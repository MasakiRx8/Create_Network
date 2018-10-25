#ifndef FSTREAM_H
#define FSTREAM_H
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <vector>
#include "String.h"
#include "sort.h"
//#include "shuffle.h"

std::vector< std::vector< int > > agent_neighbor( std::string filename, int N );
double beta( std::string filename );

std::vector< std::vector< int > > agent_neighbor( std::string filename, int N ) {
	Sort sort;
	std::vector< std::vector< int > > neighbor( N );
	const char* F = filename.c_str();
	std::ifstream ifs( F );
	if( ifs.fail() ){
		std::cout << "!!!ERROR!!!" << std::endl;
		std::cout << "no such file or directory : " << filename << std::endl;
		exit( EXIT_SUCCESS );
	}
	int n = 0;
	while( n < N ) {
		int num;
		char ch;
		ifs >> num >> ch;
		neighbor[n].push_back( num );
		if( ch == ';' ) {
			neighbor[n] = sort.quicksort.ascendingsort_data( neighbor[n] );
			n++;
		}
	}
	return neighbor;
}

double beta( std::string filename ) {
	double b;
	const char* F = filename.c_str();
	std::ifstream ifs( F );
	if( ifs.fail() ) {
		std::cout << "!!!ERROR!!!" << std::endl;
		std::cout << "no such file or directory : " << filename << std::endl;
		exit( EXIT_SUCCESS );
	}
	ifs >> b;
	return b;
}

#endif // FSTREAM_H

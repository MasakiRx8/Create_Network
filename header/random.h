#ifndef RANDOM_H
#define RANDOM_H
#include <stdlib.h>
#include <stdio.h>
#include <svrng.h>
#include <time.h>
#include <vector>

int random( int N );
int random( int Nmin, int Nmax );
double random( double D );
int get_rand();

int random( int N ) {
	static int rnd = get_rand();
	static svrng_engine_t engine = svrng_new_mt19937_engine( rnd );
	svrng_distribution_t distr = svrng_new_uniform_distribution_int( 0, N );
	int t = svrng_generate_int( engine, distr );
	return t;
}

int random( int Nmin, int Nmax) {
	static int rnd = get_rand();
	static svrng_engine_t engine = svrng_new_mt19937_engine( rnd );
	svrng_distribution_t distr = svrng_new_uniform_distribution_int( Nmin, Nmax );
	int t = svrng_generate_int( engine, distr );
	return t;
}

double random( double D ) {
	static int rnd = get_rand();
	static svrng_engine_t engine = svrng_new_mt19937_engine( rnd );
	svrng_distribution_t distr = svrng_new_uniform_distribution_double( 0.0, D );
	double t = svrng_generate_double( engine, distr );
	return t;
}

int get_rand() {
	srand( ( unsigned int )time( NULL ) );
	return rand();	
}

#endif	// RANDOM_H

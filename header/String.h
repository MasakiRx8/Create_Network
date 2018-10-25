#ifndef STRING_H
#define STRING_H
#include <string>
#include <sstream>
#include <string.h>
#include <iomanip>

std::string to_string( int I );
std::string to_string( double D );
std::string int_to_string( int I, int decimal );
std::string double_to_string( double D, int decimal );

std::string to_string( int I ) {
	std::stringstream ss;
	ss << I;
	return ss.str();
}

std::string to_string( double D ) {
	std::stringstream ss;
	ss << D;
	return ss.str();
}

std::string int_to_string( int I, int decimal ) {
	std::stringstream ss;
	ss << std::fixed;
	ss << std::setprecision( decimal ) << double( I );
	return ss.str();
}

std::string double_to_string( double D, int decimal ) {
	std::stringstream ss;
	ss << std::fixed;
	ss << std::setprecision( decimal ) << D;
	return ss.str();
}

#endif // STRING_H	

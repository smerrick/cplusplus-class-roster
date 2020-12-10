#pragma once
//#include "stdafx.cpp"
#include <string>
#ifndef DEGREE_H
#define DEGREE_H
/*headers contain the class definition, including data members and member function declarations. */
using namespace std; 
enum Degree {SECURITY, NETWORKING, SOFTWARE};
static const string degreeTypeStrings[] = { "Security","Networking", "Software" };
#endif // !DEGREE_H

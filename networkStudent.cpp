//#include "stdafx.cpp"
//FIXME (consider your include and namespace statements)
/*.cpp files contain member function definitions.*/
#pragma once
#include "networkStudent.h"
#include "degree.h"
#include "student.h"
using namespace std;

NetworkStudent::NetworkStudent()
{
}

NetworkStudent::NetworkStudent(string studentID, string firstName, string lastName, string emailAddress, int age, int * daysInCourse, Degree degreeType)
{
}

Degree NetworkStudent::GetDegreeProgram() {
		return degreeType;
	}
NetworkStudent::~NetworkStudent()
{
}
;
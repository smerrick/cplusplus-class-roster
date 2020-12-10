#pragma once
//#include "stdafx.cpp"
//FIXME (consider your include and namespace statements)
/*.cpp files contain member function definitions.*/
#include "softwareStudent.h"
#include "degree.h"
#include "student.h"
using namespace std;

SoftwareStudent::SoftwareStudent()
{
}

SoftwareStudent::SoftwareStudent(string studentID, string firstName, string lastName, string emailAddress, int age, int * daysInCourse, Degree degreeType)
{
}

Degree SoftwareStudent::GetDegreeProgram() {
		return degreeType;
	}
SoftwareStudent::~SoftwareStudent()
{
}
;
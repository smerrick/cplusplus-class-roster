//FIXME (consider your include and namespace statements)
/*.cpp files contain member function definitions.*/

#pragma once
#include "securityStudent.h"
#include "degree.h"
#include "student.h"
using namespace std; 

SecurityStudent::SecurityStudent()
{
}

SecurityStudent::SecurityStudent(string studentID, string firstName, string lastName, string emailAddress, int age, int * daysInCourse, Degree degreeType)
{
}

Degree SecurityStudent::GetDegreeProgram() {
	return degreeType;
}
SecurityStudent::~SecurityStudent()
{
}
;
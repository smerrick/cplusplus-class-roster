#pragma once
//#include "stdafx.cpp"
#ifndef SOFTWARESTUDENT_H
#define SOFTWARESTUDENT_H
/*headers contain the class definition, including data members and member function declarations. */
#include <string>
#include "student.h"
#include "degree.h"
using namespace std; 
class SoftwareStudent : public Student {
private:
	string degreeType_; 
public:
	SoftwareStudent(); 
	
	SoftwareStudent(string studentID, string firstName, string	lastName, string emailAddress, int age, int* daysInCourse, string degreeType_);
	Degree GetDegreeProgram() override;
	~SoftwareStudent(); 
	
};
#endif // !SOFTWARESTUDENT_H



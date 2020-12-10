#pragma once
//#include "stdafx.cpp"
#ifndef SECURITYSTUDENT_H
#define SECURITYSTUDENT_H
/*headers contain the class definition, including data members and member function declarations. */
#include <string>
#include "student.h"
#include "degree.h"
	using namespace std;
class SecurityStudent : public Student {
private: 
	string degreeType_; 
public: 
	SecurityStudent();
	SecurityStudent(string studentID, string firstName, string lastName, string emailAddress, int age, int *daysInCourse, Degree degreeType);
	virtual Degree GetDegreeProgram() override;
	~SecurityStudent();
};
#endif // !SECURITYSTUDENT_H


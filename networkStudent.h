#pragma once
//#include "stdafx.cpp"
#ifndef NETWORKSTUDENT_H
#define NETWORKSTUDENT_H
/*headers contain the class definition, including data members and member function declarations. */
#include <string>
#include "student.h"
#include "degree.h"
using namespace std;
class NetworkStudent : public Student {
private:
	string degreeType_;
public:
	NetworkStudent();
	NetworkStudent(string studentID, string firstName, string	lastName, string emailAddress, int age, int* daysInCourse, Degree degreeType);
	virtual Degree GetDegreeProgram() override;
	~NetworkStudent();
};
#endif // !NETWORKSTUDENT_H


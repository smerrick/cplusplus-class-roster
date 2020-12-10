#pragma once
//#include "stdafx.cpp"
#ifndef STUDENT_H
#define STUDENT_H
#include <string>
#include <array>
#include "degree.h"


using namespace std;

class Student /*class Definition (part D1)*/{
protected: 
	string studentID_; 
	string firstName_;
	string lastName_;
	string emailAddress_;
	int age_; 
	int *daysInCourse_; //array
	Degree degreeType; //enumerated in degree.h

public: 
	const static int daysInCourseSize = 5; 
	Student(); //you empty little constructor
	Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse[], Degree degreeType);

	//The "Getters"
string GetStudentID() const;
string GetFirstName() const;
string GetLastName() const;
string GetEmailAddress() const;
int GetAge() const;
virtual Degree GetDegreeProgram();
int *GetDaysInCourse() const; 

	//The "Setters"
void SetStudentID(string studentID); 
void SetFirstName(string firstName); 
void SetLastName(string lastName); 
void SetEmailAddress(string emailAddress); 
void SetAge(int age);
void SetDaysInCourse(int daysInCourse[]);
virtual void SetDegreeProgram(string degreeType);
virtual void print();

~Student(); //Destructor


#endif // !STUDENT_H
};

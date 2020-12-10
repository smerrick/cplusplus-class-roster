//#include "stdafx.cpp"
#include <iostream>
#include <string>
#include <array>
#include "student.h"
#include "degree.h"
#include "softwareStudent.h"
#include "networkStudent.h"
#include "securityStudent.h"
using namespace std; 

Student::Student() {

}

Student::Student(string studentID, string firstName, string	lastName, string emailAddress, int age, int daysInCourse[], Degree degreeType) {
	studentID_ = studentID;
	firstName_ = firstName; 
	lastName_ = lastName; 
	emailAddress_ = emailAddress;
	age_ = age;
	daysInCourse_ = new int[daysInCourseSize];
	for (size_t i{}; i < daysInCourseSize; ++i) {
		daysInCourse_[i] = daysInCourse[i];
	}
}
//defining the getters
string Student::GetStudentID() const {
	return studentID_;
}

string Student::GetFirstName() const {
	return firstName_;
}
string Student::GetLastName() const {
	return lastName_;
}

string Student::GetEmailAddress() const {
	return emailAddress_;
}

int Student::GetAge() const {
	return age_;
}

virtual Degree Student::GetDegreeProgram()
{
	return Degree();
}

int *Student::GetDaysInCourse() const {
	return daysInCourse_;
}
Degree Student::GetDegreeProgram() {
	return Degree degreeType; 
}
//and now the setters
void Student::SetStudentID(string studentID) {
	studentID_ = studentID; 
}

void Student::SetFirstName(string firstName) {
	firstName_ = firstName;
}

void Student::SetLastName(string lastName) {
	lastName_ = lastName; 
}

void Student::SetEmailAddress(string emailAddress) {
	emailAddress_ = emailAddress;
}

void Student::SetAge(int age) {
	age_ = age; 
}

void Student::SetDaysInCourse(int daysInCourse[])
{
	daysInCourse_ = new int[daysInCourseSize];
	for (size_t i{}; i < daysInCourseSize; ++i) {
		this->daysInCourse_[i] = daysInCourse[i];
	}
}
void Student::SetDegreeProgram(string degreeType)
{
	//degree
}

void Student::print() {//work on this next - prints SPECIFIC student data. Not print all which is in roster.cpp 
  int* GetDaysInCourse(); 
  cout << "Student ID: " << GetStudentID()<< "\t";
  cout << "First Name: " << GetFirstName()<< "\t";
  cout << "Last Name: " << GetLastName() << "\t";
  cout << "Age: " << GetAge() << "\t";
  cout << "Days in Course: {";
  for (size_t i{}; i < daysInCourseSize; ++i){
	cout << daysInCourse_[i] << ", ";
  }
  cout << " } " << "\t";
  cout << "Degree Program: ";
  if (degreeType == Degree::SECURITY) {  //return value of GetDegreeProgram()
  	cout << degreeTypeStrings[0]; 
  }
  else if (degreeType == Degree::NETWORKING) {
  	cout << degreeTypeStrings[1]; 
  }
  else {
  	cout << degreeTypeStrings[2]; 
  }
  cout << "\t"; 
 }
  Student::~Student()
{
}


/* For the Student class, do the following:

1.  Create the base class Student in the files student.h and student.cpp, which includes each  of the following variables:

�   student ID

�   first name

�   last name

�   email address

�   age

�   array of number of days to complete each course

�   degree types
 

Note: Degree type should be populated in subclasses only.
 

2.  Create each of the following functions in the Student class:

a.  an accessor (i.e., getter) for each  instance variable from part D1

b.  a mutator (i.e., setter) for each  instance variable from part D1
 

Note: All access and changes to the instance variables of the Student class should be done through the accessor and mutator functions.
 

c.  constructor using all  of the input parameters provided in the table

d.  virtual print() to print specific student data 

e.  destructor

f.  virtual getDegreeProgram()
 

Note: Leave the implementation of the getDegreeProgram() function empty.
 

3.  Create the three following classes as subclasses of Student, using the files created in part B:

�   SecurityStudent

�   NetworkStudent

�   SoftwareStudent

Each subclass should override the getDegreeProgram() function. Each  subclass should have a data member to hold the enumerated type for the degree program using the types defined in part C.*/
#pragma once
#ifndef ROSTER_H
#define ROSTER_H
/*headers contain the class definition, including data members and member function declarations. */
//#include "stdafx.cpp"
#include <string>
#include <array>
#include <iostream>
#include "networkStudent.h"
#include "securityStudent.h"
#include "softwareStudent.h"
#include "student.h"
#include "degree.h"

using namespace std; 

const string studentData[] =  //good luck parsing this, figure out comma delimiters
{ 
"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", //invalid email
"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", //invalid email
"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", //invalid email
"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
"A5,Siobhan,McKenney,smcke19@wgu.edu,40,1,30,20,SOFTWARE" 
};

	class Roster {
	public: 
		Roster(); //here's a constructor that doesn't have anything in it 
		Student* classRosterArray[5] {nullptr, nullptr, nullptr, nullptr, nullptr}; 
		void constructVector(string studentObject); //actually add usable data to classRosterArray
		void add(string	studentID, string firstName, string lastName, string emailAddress, int age, int day0, int day1, int day2, Degree degreeType); 
		void remove(string studentID);
		void printAll();
		void printDaysInCourse(string studentID);
		void printInvalidEmails(); 
		void printByDegreeProgram(int degreeProgram);
		~Roster();
		
	};
#endif // !ROSTER_H

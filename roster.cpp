//FIXME (consider your include and namespace statements)
/*.cpp files contain member function definitions.*/
//#include "stdafx.cpp"
#include "roster.h"
#include "student.h"
#include "securityStudent.h"
#include "softwareStudent.h"
#include "networkStudent.h"
#include "degree.h"
#include <iostream>
#include <string>
#include <array>
#include <sstream>
#include <vector>

using namespace std;

/*Create a Roster class (roster.cpp) by doing the following:

1.  Create an array of pointers, classRosterArray, to hold the data provided in the studentData table.

2.  Create a student object for each  student in the data table by using the subclasses NetworkStudent, SecurityStudent, and SoftwareStudent, and populate classRosterArray.

a.  Apply pointer operations when parsing each  set of data identified in the studentData table.

b.  Add each student object to classRosterArray.


	
/*Demonstrate the program�s required functionality by adding a void main() function to roster.cpp, which will contain the required function calls to achieve the following results :

	1.  Print out to the screen, via your application, the course title, the programming language used, your student ID, and your name.

		2.  Create an instance of the Roster class called classRoster.

		3.  Add each student to classRoster.

		4.  Convert the following pseudo code to complete the rest of the main() function :
		classRoster.printAll();
	classRoster.printInvalidEmails();
	//loop through classRosterArray and for each element:
	classRoster.printAverageDaysInCourse(/*current_object's student id
	/*classRoster.printByDegreeProgram(SOFTWARE);
	classRoster.remove("A3");
	classRoster.remove("A3");
	//expected: the above line should print a message saying such a student with this ID was not found.

	5.  Call the destructor to release the Roster memory.*/

Roster::Roster(){ //constructor, 

}


void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int day0, int day1, int day2, Degree degreeType) {
	int daysInCourse[] {day0, day1, day2};
	for (size_t i{}; i < 5; ++i) { //loop through the roster
		if (classRosterArray[i] == nullptr) { //can't be full
			if (degreeType == Degree::NETWORKING) {
			classRosterArray[i] =	new NetworkStudent(studentID, firstName, lastName, emailAddress, age, daysInCourse, degreeType);
		}
			else if (degreeType == Degree::SECURITY) {
			classRosterArray[i] =	new SecurityStudent(studentID, firstName, lastName, emailAddress, age, daysInCourse, degreeType); 
		}
			else if (degreeType == Degree::SOFTWARE) {
			classRosterArray[i] = new SoftwareStudent(studentID, firstName, lastName, emailAddress, age, daysInCourse, degreeType);
		}
			break; 
		}
	}
}

void Roster::printAll(){
	for (size_t i{}; i < 5; ++i) {
		//FIXME stub for student print function - going back to student.cpp
	}
}

int main() {
	
	cout << "Scripting and Programming Applications - C867" << endl;
	cout << "Programming Language: C++" << endl;
	cout << "Student ID: #000566565" << endl; 
	cout << "Name: Siobhan McKenney Merrick" << endl; 
	
	Roster StudentRoster; 
	Degree degreeType; 
	//adding data to classRosterArray: 
	for (size_t i {}; i < 5; ++i) {
		//cout << studentData[i] << endl;
		istringstream row (studentData[i]);
		vector<string> delimit; //let's put the broken down data in a vector so I can push it back instead of messing with hardcoded array size
		while (row.good()) {
			string cell;
			getline(row, cell, ','); 
			delimit.push_back(cell); 
		}
		if (delimit.at(8) == "NETWORK") {
			degreeType = Degree::NETWORKING; 
		}
		else if (delimit.at(8) == "SOFTWARE") {
			degreeType = Degree::SOFTWARE;
		} 
		else if (delimit.at(8) == "SECURITY") {
			degreeType = Degree::SECURITY; 
		} 
		else {
			cout << "There is no valid degree type!" <<endl; 
		}
		
		/*0 - string StudentID
		1 - string firstName
		2 - string lastName
		3 - string emailAddress
		4 - int age (stoi)
		5 - int daysInCourse[0] (day0)
		6 - int daysInCourse[1] (day1)
		7 - int daysInCourse[2] (day2)
		8 - Degree degreeType */
		StudentRoster.add(delimit.at(0), delimit.at(1), delimit.at(2), delimit.at(3), stoi(delimit.at(4)), stoi(delimit.at(5)), stoi(delimit.at(6)), stoi(delimit.at(7)), degreeType);
		
	}
	//cout << [0]; 
	//cout << daysInCourse[0] << " " << daysInCourse[1] << " " << daysInCourse[2] << endl;  
	system("pause"); 
	return 0; 
	}//this is your main ending bracket 
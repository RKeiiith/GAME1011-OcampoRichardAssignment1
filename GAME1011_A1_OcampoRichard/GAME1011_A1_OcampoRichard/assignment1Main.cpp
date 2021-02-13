/*
 * GAME1011 - Advanced Programming
 * Assignment 1
 *
 * Student: Richard Ocampo (101332726)
 *
 * Prof. Joss Moo Young and Wallace Balaniuc
 */
#include <iostream>

using namespace std;


//Class Declaration
//Base Class
class Person
{

private:
	//private attributes
	string m_name;
	int m_age;
	
public:

	//public setters
	void setName(string name) { m_name = name; }
	void setAge(int age) { m_age = age; }
	
	//public getters
	string getName() { return m_name; }
	int getAge() { return m_age; }
	
};

//Student class inheriting Person class
class Student : public Person
{
	//private attributes
private:
	string m_collegeName;
	string m_program;
	int m_semester;
public:
	//public setters
	void setCollege(string cname) { m_collegeName = cname; }
	void setProgram(string program) { m_program = program; }
	void setSemester(int semester) { m_semester = semester; }

	//public getters
	string getCollege() { return m_collegeName; }
	string getProgram() { return m_program; }
	int getSemester() { return m_semester; }
	
	
};

//NonGamingStudent Class inheriting student
class NonGamingStudent : public Student
{
	//private attributes
private:
	string m_preferStreamService;
	int m_hoursNonGame;

public:
	//public setters
	void setStreamService(string stream) { m_preferStreamService = stream; }
	void setNonGameHours(int nghours) { m_hoursNonGame = nghours; }

	//public getters
	string getStreamService() { return m_preferStreamService; }
	int getNonGameHours() { return m_hoursNonGame; }
};

class GamingStudent : public Student
{
	//private attributes
private:
	string m_preferGameDevice;
	int m_hoursGame;
public:
	//public setters
	void setGameDevice(string gameDevice) { m_preferGameDevice = gameDevice; }
	void setHoursGame(int ghours) { m_hoursGame = ghours; }

	//public getters
	string getGameDevice() { return m_preferGameDevice; }
	int getHoursGame() { return m_hoursGame; }
};

class Survey
{
	string participants[3] = {"Alexander Richard", "Wallace Balaniuc", "Joss Moo Young"};

};


int main()
{

	//Class Objects
	Survey mySurveyObj;
	GamingStudent myGamingStudentObj;
	NonGamingStudent myNonGamingStudentObj;
	Student myStudentObj;

	
	
	//Variable Declaration
	int inputParticipants;
	string inputStudent;

	cout << "Welcome" << endl;
	cout << "How many participants do you want in the survey?" << endl;
	cin >> inputParticipants;

	cout << "Enter the name of the student" << endl;
	cin >> inputStudent;

	
	//Initiallize values
	//The student object is inheriting from the base Person class. Allowing it to use its Name, Age
	myStudentObj.setName(inputStudent);
	myStudentObj.setAge(31);
	myStudentObj.setCollege("George Brown");
	myStudentObj.setProgram("T163 - Game Programming");
	myStudentObj.setSemester(2);
	myGamingStudentObj.setGameDevice("PC");
	myGamingStudentObj.setHoursGame(27);


	//Output the information
	cout << "Student Information" << endl;
	cout << myStudentObj.getName() << endl;
	cout << "Age: " << myStudentObj.getAge() << endl;
	cout << "College: " << myStudentObj.getCollege() << endl;
	cout << "Program: " << myStudentObj.getProgram() << endl;
	cout << "Semester: " << myStudentObj.getSemester() << endl;
	cout << "Game device: " << myGamingStudentObj.getGameDevice() << endl;
	cout << "Hours of Gaming: " << myGamingStudentObj.getHoursGame() << endl;
	


	
}
#include "teacher.h"
#include"common.h"
#include<iostream>
#include<fstream>
using namespace std;

teacher::teacher(){
}

teacher & teacher::operator=(const teacher & t)     //operator overloading
{
	this->teacherch = t.teacherch;
	return *this;
}

void teacher::print()                          //override print function of teacher
{
	fstream tfile("teacherfile.txt", ios::in);
	fstream offilet;
	if (tfile)
	{
		while (!tfile.eof())
		{
			tfile.get(teacherch);
			cout << teacherch;
		}
		cout << endl;
	}
	tfile.close();

	////////////////////////////////////////////////////////// ask for data addition of student
	cout << "Either you want to add data(y/n)" << endl;
	cin >> teacherch;
	if (teacherch == 'd')
	{
		cin.clear();                                        // to delete garbage data
		cout << "Enter Name" << endl;
		cin >> name;
		cout << "Enter Roll No. ( Don't break sequence)" << endl;
		cin >> id;
		cout << "Enter Date of birth(with dashes-)" << endl;
		cin >> readDOJT;
		cout << "Enter E-mail ID" << endl;
		cin >> email;
		cout << "Enter Contact number" << endl;
		cin >> contactno;
		offilet.open("teacherfile.txt", ios::app);
		{
			offilet << endl << name << "		" << id << "	      " << readDOJT << "	   " << email << "	      " << contactno << endl;
		}
		offilet.close();
	}//ie end
	else 
	{
		cout << "Thanks......!"<<endl;
	}


}
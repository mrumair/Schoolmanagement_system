#include "clerk.h"
#include"common.h"
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

clerk::clerk(){
	readDOJ=" ";
}

void clerk::print()               // override function of print clerk
{
	fstream cfile("clerkfile.txt", ios::in);
	ofstream offile;
	if (cfile)
	{

		while (!cfile.eof())
		{
			cfile.get(clerkch);
			cout << clerkch;
		}
		cout << endl;
	}
	cfile.close();
	////////////////////////////////////////////////////////// ask for data addition of student
	cout << "Either you want to add data(y/n)" << endl;
	cin >> clerkch;
	if (clerkch == 'd')
	{
		cin.clear();                                        // to delete garbage data
		cout<< "Enter Name" << endl;
		cin>> name;
		cout<< "Enter ID. ( Don't break sequence)" << endl;
		cin>> id;
		cout << "Enter Date of Joing(with dashes-)" << endl;
		cin>> readDOJ;
		cout << "Enter E-mail ID" << endl;
		cin>> email;
		cout << "Enter Contact number" << endl;
		cin>> contactno;
		offile.open("clerkfile.txt", ios::app);
		{
			offile << endl << name << "		" << id << "	      " << readDOJ << "	   " << email << "	      " << contactno << endl;
		}
		offile.close();
	}//ie end
	else 
	{
		cout << "Thanks......!" << endl;
	}
}

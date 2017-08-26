#include<fstream>
#include"head.h"
#include"common.h"
#include<iostream>
#include<string>

using namespace std;

head::head(){                 //constractor
	readDOJh = "";
}


void head::print()               // override function of print  head
{
	fstream hfile("headfile.txt", ios::in);
	fstream offileh;
	if (hfile)
	{
		cout << "Name		ID		DOJ		e-mail ID 		Moble No." << endl;
		while (!hfile.eof())
		{
			hfile.get(headch);
			cout << headch;
		}
		cout << endl;
	}
	hfile.close();
	////////////////////////////////////////////////////////// ask for data addition of student
	cout << "Either you want to add a new head(y/n)" << endl;
	cin >> headch;
	if (headch == 'd')
	{
		cin.clear();                                        // to delete garbage data
		cout << "Enter Name" << endl;
		cin >> name;
		cout << "Enter ID. ( Don't break sequence)" << endl;
		cin >> id;
		cout << "Enter Date of Joing(with dashes-)" << endl;
		cin >> readDOJh;
		cout << "Enter E-mail ID" << endl;
		cin >> email;
		cout << "Enter Contact number" << endl;
		cin >> contactno;
		offileh.open("headfile.txt");
		{
			offileh << endl << name << "		" << id << "	      " << readDOJh << "	   " << email << "	      " << contactno << endl;
		}
		offileh.close();
	}//ie end
	else
	{
		cout << "Thanks......!"<<endl;
	}
}

#include "classroom.h"
#include<fstream>
#include<string>
#include<iostream>
using namespace std;

classroom::classroom()
{
	totalR = 0;
}
//////////////////////////////////////////////////classroom of primary
void classroom:: printcrp() 
{
	fstream clrfile;
	ofstream offile4;
	//readlab = new char[10];

	clrfile.open("crpfile.txt", ios::in);          //rp=
	if (clrfile)
	{
		while (!clrfile.eof())
		{
			clrfile.get(clsRoom);
			cout << clsRoom;
		}
		cout << endl;
	}
	clrfile.close();

	////////////////////////////////////////////////////// ask for data addition of class romms
	cout << "Either you want to add a new head(y/n)" << endl;
	cin >> clsRoom;
	if (clsRoom == 'd')
	{
		cin.clear();                                        // to delete garbage data
		cout << "Enter total number of Rooms" << endl;
		cin >> totalR;
		offile4.open("rfpfile.txt");
		{
			offile4 << "Primary Portion contain " << totalR << endl;
		}
		offile4.close();
	}//ie end
	else
	{
		cout << "Thanks......!"<<endl;
	}
}
//////////////////////////////////////////////////////classroom of middle
void classroom::printcrm()
{
	fstream clrfile;
	ofstream offile4;
	//readlab = new char[10];

	clrfile.open("crmfile.txt", ios::in);
	if (clrfile)
	{
		while (!clrfile.eof())
		{
			clrfile.get(clsRoom);
			cout << clsRoom;
		}
		cout << endl;
	}
	clrfile.close();

	////////////////////////////////////////////////////// ask for data addition of class romms
	cout << "Either you want to add a new head(y/n)" << endl;
	cin >> clsRoom;
	if (clsRoom == 'd')
	{
		cin.clear();                                        // to delete garbage data
		cout << "Enter total number of Rooms" << endl;
		cin >> totalR;
		offile4.open("rfmfile.txt");
		{
			offile4 << "Primary Portion contain " << totalR << endl;
		}
		offile4.close();
	}//ie end
	else 
	{
		cout << "Thanks......!"<<endl;
	}
}
//////////////////////////////////////////////////////class rom of high
void classroom::printcrh()
{
	fstream clrfile;
	ofstream offile4;
	//readlab = new char[10];

	clrfile.open("crhfile.txt", ios::in);
	if (clrfile)
	{
		while (!clrfile.eof())
		{
			clrfile.get(clsRoom);
			cout << clsRoom;
		}
		cout << endl;
	}
	clrfile.close();

	////////////////////////////////////////////////////// ask for data addition of class romms
	cout << "Either you want to add a new head(y/n)" << endl;
	cin >> clsRoom;
	if (clsRoom == 'd')
	{
		cin.clear();                                        // to delete garbage data
		cout << "Enter total number of Rooms" << endl;
		cin >> totalR;
		offile4.open("rfhfile.txt");
		{
			offile4 << "Primary Portion contain " << totalR << endl;
		}
		offile4.close();
	}//ie end
	else 
	{
		cout << "Thanks......!"<<endl;
	}

}
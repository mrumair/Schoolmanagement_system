#include "classroom.h"
#include<fstream>
#include<string>
#include<iostream>
using namespace std;

classroom::classroom()
{
	totalR = 0;
}
// classroom of primary School
void classroom:: printcrp() 
{
	fstream clrfile;
	ofstream offile4;
	clrfile.open("crpfile.txt", ios::in); 
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
	// ask for data addition of class rooms
	cout << "Either you want to add a new head(y/n)" << endl;
	cin >> clsRoom;
	if (clsRoom == 'd')
	{
		// to delete garbage data
		cin.clear();
		cout << "Enter total number of Rooms" << endl;
		cin >> totalR;
		offile4.open("rfpfile.txt");
		{
			offile4 << "Primary Portion contain " << totalR << endl;
		}
		offile4.close();
	}// end if
	else
	{
		cout << "Thanks......!"<<endl;
	}
}
// classroom of middle
void classroom::printcrm()
{
	fstream clrfile;
	ofstream offile4;
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
	// ask for data addition of class rooms
	cout << "Either you want to add a new head(y/n)" << endl;
	cin >> clsRoom;
	if (clsRoom == 'd')
	{
		// delete garbage data
		cin.clear();                                        
		cout << "Enter total number of Rooms" << endl;
		cin >> totalR;
		offile4.open("rfmfile.txt");
		{
			offile4 << "Primary Portion contain " << totalR << endl;
		}
		offile4.close();
	} // end if
	else 
	{
		cout << "Thanks......!"<<endl;
	}
}
// class room of high School
void classroom::printcrh()
{
	fstream clrfile;
	ofstream offile4;
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
	// ask for data addition of class rooms
	cout << "Either you want to add a new head(y/n)" << endl;
	cin >> clsRoom;
	if (clsRoom == 'd')
	{
		// delete garbage data
		cin.clear();
		cout << "Enter total number of Rooms" << endl;
		cin >> totalR;
		offile4.open("rfhfile.txt");
		{
			offile4 << "Primary Portion contain " << totalR << endl;
		}
		offile4.close();
	}// end if
	else 
	{
		cout << "Thanks......!"<<endl;
	}

}
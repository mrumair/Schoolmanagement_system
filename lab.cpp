#include "lab.h"
#include<fstream>
#include<iostream>
#include<string>
using namespace std;
lab::lab()
{
	total = 0;
	labname = "";
	inchargename = "";
}
/////////////////////////////////////////////////////////////print primary poration lab
void lab::printlabp()
{
	fstream labfile;
	ofstream offilel;
	labfile.open("labprimary.txt",ios::in);
	if (labfile)
	{
		while (!labfile.eof())
		{
			labfile.get(labch);
			cout <<labch;
		}
		cout << endl;
	}
	labfile.close();

	////////////////////////////////////////////////////////// ask for data addition of lab
	cout << "Either you want to add a new head(y/n)" << endl;
	cin >> labch;
	if (labch == 'd')
	{
		cin.clear();                                        // to delete garbage data
		cout << "Enter Lab Name" << endl;
		cin >> labname;
		cout << "Enter total number of lab" << endl;
		cin >>total;
		cout << "Enter lab Incharge Name" << endl;
		cin >>inchargename;
		offilel.open("labprimary.txt",ios::app);
		{
			offilel << endl <<labname << "		" << total << "	      " << inchargename << endl;
		}
		offilel.close();
	}//ie end
	else
	{
		cout << "Thanks......!"<<endl;
	}
}
/////////////////////////////////////////////////////////////print middle poration lab
void lab::printlabm()
{
	fstream labfile;
	ofstream offilel2;
	labfile.open("labmiddle.txt", ios::in);
	if (labfile)
	{
		while (!labfile.eof())
		{
			labfile.get(labch);
			cout << labch;
		}
		cout << endl;
	}
	labfile.close();

	/////////////////////////////////////////////////////// ask for data addition of lab
	cout << "Either you want to add a new head(y/n)" << endl;
	cin >> labch;
	if (labch == 'd')
	{
		cin.clear();                                        // to delete garbage data
		cout << "Enter Lab Name" << endl;
		cin >> labname;
		cout << "Enter total number of lab" << endl;
		cin >> total;
		cout << "Enter lab Incharge Name" << endl;
		cin >> inchargename;
		offilel2.open("labmiddle.txt",ios::app);
		{
			offilel2 << endl << labname << "		" << total << "	      " << inchargename << endl;
		}
		offilel2.close();
	}//ie end
	else 
	{
		cout << "Thanks......!"<<endl;
	}
}
/////////////////////////////////////////////////////////////print high poration lab
void lab::printlabh()
{
	fstream labfile;
	ofstream offilel3;

	labfile.open("labhigh.txt", ios::in);
	if (labfile)
	{
		while (!labfile.eof())
		{
			labfile.get(labch);
			cout <<labch;
		}
		cout << endl;
	}
	labfile.close();
	/////////////////////////////////////////////////////// ask for data addition of lab
	cout << "Either you want to add a new head(y/n)" << endl;
	cin >> labch;
	if (labch == 'd')
	{
		cin.clear();                                        // to delete garbage data
		cout << "Enter Lab Name" << endl;
		cin >> labname;
		cout << "Enter total number of lab" << endl;
		cin >> total;
		cout << "Enter lab Incharge Name" << endl;
		cin >> inchargename;
		offilel3.open("labhigh.txt",ios::app);
		{
			offilel3 << endl << labname << "		" << total << "	      " << inchargename << endl;
		}
		offilel3.close();
	}//ie end
	else
	{
		cout << "Thanks......!"<<endl;
	}
}
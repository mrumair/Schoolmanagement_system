#include"student.h"
#include<iostream>
#include<fstream>
#include"common.h"
using namespace std;


student::student(){}

student::student(char a, char b, string bc)                    //copy constractor
{
	oneclass = a;
	add = b;
	readDOB = bc;
}

void student::print()                                        //defining the override function
{
	cout << " Students are the Nation builder" << endl;
}
void student::spacificclassP()                               //students of primary class containing 5 class
{
	//mune:
	cout << "a-1st class" << endl;
	cout << "b-2nd class" << endl;
	cout << "c-3rd  class" << endl;
	cout << "d-4th class" << endl;
	cout << "e-5th class" << endl;

	cout << "Enter a,b,.....e  for a spacific class" << endl;
	cin >> oneclass;

	const int MAX = 100;                                       //size of buffer
	char buffer[MAX];                                        //character buffer
	ifstream infile;  //ifstream object ti read a file
	ofstream offile;  //object to write in a file

	switch (oneclass)
	{//switch strat
	case'a':
	{
			   cout << "1st class students" << endl;


			   infile.open("studentrecord1.txt");                          //create file for input
			   while (!infile.eof())                                     //until end-of-file
			   {
				   infile.getline(buffer, MAX);                        //read a line of text
				   cout << buffer << endl;                            //display it
			   }
			   infile.close();
			    ////////////////////////////////////////////////////////// ask for data addition of student
			   cout << "Either you want to add data(y/n)" << endl;
			   cin >> add;
			   if (add == 'd')
			   {
				   cin.clear();                                        // to delete garbage data
				   cout << "Enter Name" << endl;    
				   cin >> name;
				   cout << "Enter Roll No. ( Don't break sequence)" << endl;
				   cin >> id;
				   cout << "Enter Date of birth(with dashes-)" << endl;
				   cin>> readDOB;
				  cout << "Enter E-mail ID" << endl;
				  cin >> email;
				  cout << "Enter Contact number" << endl;
				  cin >>contactno;
					 offile.open("studentrecord1.txt", ios::app);
					 {
						 offile <<endl<< name <<"		" << id<<"	      "<<readDOB<<"	   "<<email<<"	      "<<contactno<<endl;
					 }
			   offile.close();
			   }
			   else
			   {
				   break;
			   }
			   break;

	}
	case'b':
	{
			   cout << "2nd class students" << endl;
			   infile.open("studentrecord2.txt");                          //create file for input
			   while (!infile.eof())                                     //until end-of-file
			   {
				   infile.getline(buffer, MAX);                        //read a line of text
				   cout << buffer << endl;                            //display it
			   }
			   ////////////////////////////////////////////////////////// ask for data addition of student
			   cout << "Either you want to add data(y/n)" << endl;
			   cin >> add;
			   if (add == 'd')
			   {
				   cin.clear();                                        // to delete garbage data
				   cout << "Enter Name" << endl;
				   cin >> name;
				   cout << "Enter Roll No. ( Don't break sequence)" << endl;
				   cin >> id;
				   cout << "Enter Date of birth(with dashes-)" << endl;
				   cin >> readDOB;
				   cout << "Enter E-mail ID" << endl;
				   cin >> email;
				   cout << "Enter Contact number" << endl;
				   cin >> contactno;
				   offile.open("studentrecord2.txt", ios::app);
				   {
					   offile << endl << name << "		" << id << "	      " << readDOB << "	   " << email << "	      " << contactno << endl;
				   }
				   offile.close();
			   }
			   else 
			   {
				   break;
			   }

			   break;
	}
	case'c':
	{
			   cout << "3rd class students" << endl;
			   infile.open("studentrecord3.txt");                          //create file for input
			   while (!infile.eof())                                     //until end-of-file
			   {
				   infile.getline(buffer, MAX);                        //read a line of text
				   cout << buffer << endl;                            //display it
			   }
			   ////////////////////////////////////////////////////////// ask for data addition of student
			   cout << "Either you want to add data(y/n)" << endl;
			   cin >> add;
			   if (add == 'd')
			   {
				   cin.clear();                                        // to delete garbage data
				   cout << "Enter Name" << endl;
				   cin >> name;
				   cout << "Enter Roll No. ( Don't break sequence)" << endl;
				   cin >> id;
				   cout << "Enter Date of birth(with dashes-)" << endl;
				   cin >> readDOB;
				   cout << "Enter E-mail ID" << endl;
				   cin >> email;
				   cout << "Enter Contact number" << endl;
				   cin >> contactno;
				   offile.open("studentrecord3.txt", ios::app);
				   {
					   offile << endl << name << "		" << id << "	      " << readDOB << "	   " << email << "	      " << contactno << endl;
				   }
				   offile.close();
			   }
			   else 
			   {
				   break;
			   }

			   break;
	}
	case'd':
	{
			   cout << "4th class students" << endl;
			   infile.open("studentrecord4.txt");                          //create file for input
			   while (!infile.eof())                                     //until end-of-file
			   {
				   infile.getline(buffer, MAX);                        //read a line of text
				   cout << buffer << endl;                            //display it
			   }
			   ////////////////////////////////////////////////////////// ask for data addition of student
			   cout << "Either you want to add data(y/n)" << endl;
			   cin >> add;
			   if (add == 'd')
			   {
				   cin.clear();                                        // to delete garbage data
				   cout << "Enter Name" << endl;
				   cin >> name;
				   cout << "Enter Roll No. ( Don't break sequence)" << endl;
				   cin >> id;
				   cout << "Enter Date of birth(with dashes-)" << endl;
				   cin >> readDOB;
				   cout << "Enter E-mail ID" << endl;
				   cin >> email;
				   cout << "Enter Contact number" << endl;
				   cin >> contactno;
				   offile.open("studentrecord4.txt", ios::app);
				   {
					   offile << endl << name << "		" << id << "	      " << readDOB << "	   " << email << "	      " << contactno << endl;
				   }
				   offile.close();
			   }
			   else
			   {
				   break;
			   }
			   break;
	}
	case'e':
	{
			   cout << "5nd class students" << endl;
			   infile.open("studentrecord5.txt");                          //create file for input
			   while (!infile.eof())                                     //until end-of-file
			   {
				   infile.getline(buffer, MAX);                        //read a line of text
				   cout << buffer << endl;                            //display it
			   }
			   ////////////////////////////////////////////////////////// ask for data addition of student
			   cout << "Either you want to add data(y/n)" << endl;
			   cin >> add;
			   if (add == 'd')
			   {
				   cin.clear();                                        // to delete garbage data
				   cout << "Enter Name" << endl;
				   cin >> name;
				   cout << "Enter Roll No. ( Don't break sequence)" << endl;
				   cin >> id;
				   cout << "Enter Date of birth(with dashes-)" << endl;
				   cin >> readDOB;
				   cout << "Enter E-mail ID" << endl;
				   cin >> email;
				   cout << "Enter Contact number" << endl;
				   cin >> contactno;
				   offile.open("studentrecord5.txt", ios::app);
				   {
					   offile << endl << name << "		" << id << "	      " << readDOB << "	   " << email << "	      " << contactno << endl;
				   }
				   offile.close();
			   }
			   else 
			   {
				   break;
			   }
			   break;
	}
	default:
	{
			   cout << "Not exist" << endl;
			   break;
	}
	}//switch end

}//fun.end
///////////////////////////////////////////////////////////////////////Middle
void student::spacificclassM()
{
	cout << "a-6th class" << endl;
	cout << "b-7th class" << endl;
	cout << "c-8th  class" << endl;

	cout << "Enter a,b, or c : for a spacific class" << endl;
	cin >> oneclass;

	const int MAX = 80;                                       //size of buffer
	char buffer[MAX];                                        //character buffer
	ifstream infile;  //ifstream object ti read a file
	ofstream offile;  //object to write in a file

	switch (oneclass)
	{//switch strat
	case'a':
	{
			   cout << "1st class students" << endl;


			   infile.open("studentrecord6.txt");                          //create file for input
			   while (!infile.eof())                                     //until end-of-file
			   {
				   infile.getline(buffer, MAX);                        //read a line of text
				   cout << buffer << endl;                            //display it
			   }
			   infile.close();
			   ////////////////////////////////////////////////////////// ask for data addition of student
			   cout << "Either you want to add data(y/n)" << endl;
			   cin >> add;
			   if (add == 'd')
			   {
				   cin.clear();                                        // to delete garbage data
				   cout << "Enter Name" << endl;
				   cin >> name;
				   cout << "Enter Roll No. ( Don't break sequence)" << endl;
				   cin >> id;
				   cout << "Enter Date of birth(with dashes-)" << endl;
				   cin >> readDOB;
				   cout << "Enter E-mail ID" << endl;
				   cin >> email;
				   cout << "Enter Contact number" << endl;
				   cin >> contactno;
				   offile.open("studentrecord6.txt", ios::app);
				   {
					   offile << endl << name << "		" << id << "	      " << readDOB << "	   " << email << "	      " << contactno << endl;
				   }
				   offile.close();
			   }
			   else 
			   {
				   break;
			   }
			   break;

	}
	case'b':
	{
			   cout << "2nd class students" << endl;
			   infile.open("studentrecord7.txt");                          //create file for input
			   while (!infile.eof())                                     //until end-of-file
			   {
				   infile.getline(buffer, MAX);                        //read a line of text
				   cout << buffer << endl;                            //display it
			   }
			   ////////////////////////////////////////////////////////// ask for data addition of student
			   cout << "Either you want to add data(y/n)" << endl;
			   cin >> add;
			   if (add == 'd')
			   {
				   cin.clear();                                        // to delete garbage data
				   cout << "Enter Name" << endl;
				   cin >> name;
				   cout << "Enter Roll No. ( Don't break sequence)" << endl;
				   cin >> id;
				   cout << "Enter Date of birth(with dashes-)" << endl;
				   cin >> readDOB;
				   cout << "Enter E-mail ID" << endl;
				   cin >> email;
				   cout << "Enter Contact number" << endl;
				   cin >> contactno;
				   offile.open("studentrecord7.txt", ios::app);
				   {
					   offile << endl << name << "		" << id << "	      " << readDOB << "	   " << email << "	      " << contactno << endl;
				   }
				   offile.close();
			   }
			   else
			   {
				   break;
			   }
			   break;
	}
	case'c':
	{
			   cout << "3rd class students" << endl;
			   infile.open("studentrecord8.txt");                          //create file for input
			   while (!infile.eof())                                     //until end-of-file
			   {
				   infile.getline(buffer, MAX);                        //read a line of text
				   cout << buffer << endl;                            //display it
			   }
			   ////////////////////////////////////////////////////////// ask for data addition of student
			   cout << "Either you want to add data(y/n)" << endl;
			   cin >> add;
			   if (add == 'd')
			   {
				   cin.clear();                                        // to delete garbage data
				   cout << "Enter Name" << endl;
				   cin >> name;
				   cout << "Enter Roll No. ( Don't break sequence)" << endl;
				   cin >> id;
				   cout << "Enter Date of birth(with dashes-)" << endl;
				   cin >> readDOB;
				   cout << "Enter E-mail ID" << endl;
				   cin >> email;
				   cout << "Enter Contact number" << endl;
				   cin >> contactno;
				   offile.open("studentrecord8.txt", ios::app);
				   {
					   offile << endl << name << "		" << id << "	      " << readDOB << "	   " << email << "	      " << contactno << endl;
				   }
				   offile.close();
			   }
			   else 
			   {
				   break;
			   }
			   break;
	}

	default:
	{
			   cout << "Not exist" << endl;
			   break;
	}

	}//switch end
}
/////////////////////////////////////////////////////////////////////////High
void student::spacificclassH()
{
	cout << "a-9th class" << endl;
	cout << "b-10th class" << endl;

	cout << "Enter a or b for a spacific class" << endl;
	cin >> oneclass;

	const int MAX = 80;                                       //size of buffer
	char buffer[MAX];                                        //character buffer
	ifstream infile;  //ifstream object ti read a file
	ofstream offile;  //object to write in a file

	switch (oneclass)
	{//switch strat
	case'a':
	{
			   cout << "1st class students" << endl;


			   infile.open("studentrecord9.txt");                          //create file for input
			   while (!infile.eof())                                     //until end-of-file
			   {
				   infile.getline(buffer, MAX);                        //read a line of text
				   cout << buffer << endl;                            //display it
			   }
			   infile.close();
			   ////////////////////////////////////////////////////////// ask for data addition of student
			   cout << "Either you want to add data(y/n)" << endl;
			   cin >> add;
			   if (add == 'd')
			   {
				   cin.clear();                                        // to delete garbage data
				   cout << "Enter Name" << endl;
				   cin >> name;
				   cout << "Enter Roll No. ( Don't break sequence)" << endl;
				   cin >> id;
				   cout << "Enter Date of birth(with dashes-)" << endl;
				   cin >> readDOB;
				   cout << "Enter E-mail ID" << endl;
				   cin >> email;
				   cout << "Enter Contact number" << endl;
				   cin >> contactno;
				   offile.open("studentrecord9.txt", ios::app);
				   {
					   offile << endl << name << "		" << id << "	      " << readDOB << "	   " << email << "	      " << contactno << endl;
				   }
				   offile.close();
			   }
			   else 
			   {
				   break;
			   }
			   break;

	}
	case'b':
	{
			   cout << "2nd class students" << endl;
			   infile.open("studentrecord10.txt");                          //create file for input
			   while (!infile.eof())                                     //until end-of-file
			   {
				   infile.getline(buffer, MAX);                        //read a line of text
				   cout << buffer << endl;                            //display it
			   }
			   ////////////////////////////////////////////////////////// ask for data addition of student
			   cout << "Either you want to add data(y/n)" << endl;
			   cin >> add;
			   if (add == 'd')
			   {
				   cin.clear();                                        // to delete garbage data
				   cout << "Enter Name" << endl;
				   cin >> name;
				   cout << "Enter Roll No. ( Don't break sequence)" << endl;
				   cin >> id;
				   cout << "Enter Date of birth(with dashes-)" << endl;
				   cin >> readDOB;
				   cout << "Enter E-mail ID" << endl;
				   cin >> email;
				   cout << "Enter Contact number" << endl;
				   cin >> contactno;
				   offile.open("studentrecord10.txt", ios::app);
				   {
					   offile << endl << name << "		" << id << "	      " << readDOB << "	   " << email << "	      " << contactno << endl;
				   }
				   offile.close();
			   }
			   else 
			   {
				   break;
			   }
			   break;
	}
	
	default:
	{
			   cout << "Not exist" << endl;
			   break;
	}

	}//switch end
}


#include "result.h"
#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;

result::result(){
	 obtainmark = 0;
	 sname = "";
	 rollno = "";
}
//////////////////////////////////////////////////////////result of primary
void result::resultprimary()                              
{
	int nbr1=0;
	cout << "\tSelect a class" << endl;
	cout << "\n1-1st class\n2-2nd class\n3-3rd class\n4-4th class\n5-5th class" << endl;
	cin >> nbr1;

	switch(nbr1)                                       //switch statement on one class
	{
	case 1:
	   {
			fstream resultfile;
			ofstream offile5;
			 resultfile.open("rfile1.txt", ios::in);
			if (resultfile)
		  {
			while (!resultfile.eof())
			{
				resultfile.get(rch);
				cout << rch;
			}
			cout << endl;
		  }
		    resultfile.close(); 
			////////////////////////////////////////////////////////// ask for data addition of student
			cout << "Either you want to add data(y/n)" << endl;
			cin >> rch;
			if (rch == 'd')
			{
				cin.clear();                                        // to delete garbage data
				cout << "Enter Name" << endl;
				cin >> sname;
				cout << "Enter Roll No.. ( Don't break sequence)" << endl;
				cin >> rollno;
				cout << "Enter the Obtained marks" << endl;
				cin >> obtainmark;
				offile5.open("rfile1.txt", ios::app);
				{
					offile5 << endl << sname << "		" << rollno << "	      " << obtainmark << "	   " << "100"<< endl;
				}
				offile5.close();
			}//if end
			else 
			{
				
				cout << "Thanks......!"<<endl;
			}
			break;
	}
	case 2:
	{
			  fstream resultfile;
			  ofstream offile5;

			  resultfile.open("rfile2.txt", ios::in);
			  if (resultfile)
			  {
				  while (!resultfile.eof())
				  {
					  resultfile.get(rch);
					  cout << rch;
				  }
				  cout << endl;
			  }
			  resultfile.close();

			  ////////////////////////////////////////////////////////// ask for data addition of student
			  cout << "Either you want to add data(y/n)" << endl;
			  cin >> rch;
			  if (rch == 'd')
			  {
				  cin.clear();                                        // to delete garbage data
				  cout << "Enter Name" << endl;
				  cin >> sname;
				  cout << "Enter Roll No.. ( Don't break sequence)" << endl;
				  cin >> rollno;
				  cout << "Enter the Obtained marks" << endl;
				  cin >> obtainmark;
				  offile5.open("rfile2.txt", ios::app);
				  {
					  offile5 << endl << sname << "		" << rollno << "	      " << obtainmark << "	   " << "200" << endl;
				  }
				  offile5.close();
			  }//if end
			  else
			  {
				  cout << "Thanks......!"<<endl;
			  }
			  break;
	}
	case 3:
	{
			  fstream resultfile;
			  ofstream offile5;
			  resultfile.open("rfile3.txt", ios::in);
			  if (resultfile)
			  {
				  while (!resultfile.eof())
				  {
					  resultfile.get(rch);
					  cout << rch;
				  }
				  cout << endl;
			  }
			  resultfile.close();
			  ////////////////////////////////////////////////////////// ask for data addition of student
			  cout << "Either you want to add data(y/n)" << endl;
			  cin >> rch;
			  if (rch == 'd')
			  {
				  cin.clear();                                        // to delete garbage data
				  cout << "Enter Name" << endl;
				  cin >> sname;
				  cout << "Enter Roll No.. ( Don't break sequence)" << endl;
				  cin >> rollno;
				  cout << "Enter the Obtained marks" << endl;
				  cin >> obtainmark;
				  offile5.open("rfile3.txt", ios::app);
				  {
					  offile5 << endl << sname << "		" << rollno << "	      " << obtainmark << "	   " << "300" << endl;
				  }
				  offile5.close();
			  }//if end
			  else 
			  {
				  cout << "Thanks......!"<<endl;
			  }
			  break;
	}
	case 4:
	{
			  fstream resultfile;
			  ofstream offile5;
			  resultfile.open("rfile4.txt", ios::in);
			  if (resultfile)
			  {
				  while (!resultfile.eof())
				  {
					  resultfile.get(rch);
					  cout << rch;
				  }
				  cout << endl;
			  }
			  resultfile.close();
			  ////////////////////////////////////////////////////////// ask for data addition of student
			  cout << "Either you want to add data(y/n)" << endl;
			  cin >> rch;
			  if (rch == 'd')
			  {
				  cin.clear();                                        // to delete garbage data
				  cout << "Enter Name" << endl;
				  cin >> sname;
				  cout << "Enter Roll No.. ( Don't break sequence)" << endl;
				  cin >> rollno;
				  cout << "Enter the Obtained marks" << endl;
				  cin >> obtainmark;
				  offile5.open("rfile4.txt", ios::app);
				  {
					  offile5 << endl << sname << "		" << rollno << "	      " << obtainmark << "	   " << "400" << endl;
				  }
				  offile5.close();
			  }//if end
			  else 
			  {
				  cout << "Thanks......!"<<endl;
			  }
			  break;
	}
	case 5:
	{
			  fstream resultfile;
			  ofstream offile5;
			  resultfile.open("rfile5.txt", ios::in);
			  if (resultfile)
			  {
				  while (!resultfile.eof())
				  {
					  resultfile.get(rch);
					  cout << rch;
				  }
				  cout << endl;
			  }
			  resultfile.close();
			  ////////////////////////////////////////////////////////// ask for data addition of student
			  cout << "Either you want to add data(y/n)" << endl;
			  cin >> rch;
			  if (rch == 'd')
			  {
				  cin.clear();                                        // to delete garbage data
				  cout << "Enter Name" << endl;
				  cin >> sname;
				  cout << "Enter Roll No.. ( Don't break sequence)" << endl;
				  cin >> rollno;
				  cout << "Enter the Obtained marks" << endl;
				  cin >> obtainmark;
				  offile5.open("rfile5.txt", ios::app);
				  {
					  offile5 << endl << sname << "		" << rollno << "	      " << obtainmark << "	   " << "500" << endl;
				  }
				  offile5.close();
			  }//if end
			  else 
			  {
				  cout << "Thanks......!"<<endl;
			  }
			  break;
	}
	default:
	{
			   cout << "Out of Range" << endl;
			   break;
	}
		
	}//end switch

}
////////////////////////////////////////////////////////////////////result of middle
void result::resultmiddle()
{
	int nbr1 = 0;
	cout << "Select a class" << endl;
	cout << "\n1-6th class\n2-7th class\n3-8th class" << endl;
	cin >> nbr1;

	switch (nbr1)
	{
	case 1:
	{
			  fstream resultfile;
			  ofstream offile5;
			  resultfile.open("rfile6.txt", ios::in);
			  if (resultfile)
			  {
				  while (!resultfile.eof())
				  {
					  resultfile.get(rch);
					  cout << rch;
				  }
				  cout << endl;
			  }
			  resultfile.close();
			  ////////////////////////////////////////////////////////// ask for data addition of student
			  cout << "Either you want to add data(y/n)" << endl;
			  cin >> rch;
			  if (rch == 'd')
			  {
				  cin.clear();                                        // to delete garbage data
				  cout << "Enter Name" << endl;
				  cin >> sname;
				  cout << "Enter Roll No.. ( Don't break sequence)" << endl;
				  cin >> rollno;
				  cout << "Enter the Obtained marks" << endl;
				  cin >> obtainmark;
				  offile5.open("rfile.txt", ios::app);
				  {
					  offile5 << endl << sname << "		" << rollno << "	      " << obtainmark << "	   " << "600" << endl;
				  }
				  offile5.close();
			  }//if end
			  else 
			  {
				  cout << "Thanks......!"<<endl;
			  }
			  break;
	}
	case 2:
	{
			  fstream resultfile;
			  ofstream offile5;
			  resultfile.open("rfile7.txt", ios::in);
			  if (resultfile)
			  {
				  while (!resultfile.eof())
				  {
					  resultfile.get(rch);
					  cout << rch;
				  }
				  cout << endl;
			  }
			  resultfile.close();
			  ////////////////////////////////////////////////////////// ask for data addition of student
			  cout << "Either you want to add data(y/n)" << endl;
			  cin >> rch;
			  if (rch == 'd')
			  {
				  cin.clear();                                        // to delete garbage data
				  cout << "Enter Name" << endl;
				  cin >> sname;
				  cout << "Enter Roll No.. ( Don't break sequence)" << endl;
				  cin >> rollno;
				  cout << "Enter the Obtained marks" << endl;
				  cin >> obtainmark;
				  offile5.open("rfile7.txt", ios::app);
				  {
					  offile5 << endl << sname << "		" << rollno << "	      " << obtainmark << "	   " << "700" << endl;
				  }
				  offile5.close();
			  }//if end
			  else 
			  {
				  cout << "Thanks......!"<<endl;
			  }
			  break;
	}
	case 3:
	{
			  fstream resultfile;
			  ofstream offile5;
			  resultfile.open("rfile8.txt", ios::in);
			  if (resultfile)
			  {
				  while (!resultfile.eof())
				  {
					  resultfile.get(rch);
					  cout << rch;
				  }
				  cout << endl;
			  }
			  resultfile.close();
			  ////////////////////////////////////////////////////////// ask for data addition of student
			  cout << "Either you want to add data(y/n)" << endl;
			  cin >> rch;
			  if (rch == 'd')
			  {
				  cin.clear();                                        // to delete garbage data
				  cout << "Enter Name" << endl;
				  cin >> sname;
				  cout << "Enter Roll No.. ( Don't break sequence)" << endl;
				  cin >> rollno;
				  cout << "Enter the Obtained marks" << endl;
				  cin >> obtainmark;
				  offile5.open("rfile8.txt", ios::app);
				  {
					  offile5 << endl << sname << "		" << rollno << "	      " << obtainmark << "	   " << "800" << endl;
				  }
				  offile5.close();
			  }//if end
			  else 
			  {
				  cout << "Thanks......!" << endl;
			  }
			  break;
	}
	default:
	{
			   cout << "Out of Range" << endl;
			   break;
	}

	}//end switch

}
///////////////////////////////////////////////////////////////////result of high
void result::resulthigh()
{
	int nbr1 = 0;
	cout << "Select a class" << endl;
	cout << "\n1-9th class\n2-10th class" << endl;
	cin >> nbr1;

	switch (nbr1)
	{
	case 1:
	{
			  fstream resultfile;
			  ofstream offile5;
			  resultfile.open("rfile9.txt", ios::in);
			  if (resultfile)
			  {
				  while (!resultfile.eof())
				  {
					  resultfile.get(rch);
					  cout << rch;
				  }
				  cout << endl;
			  }
			  resultfile.close();
			  ////////////////////////////////////////////////////////// ask for data addition of student
			  cout << "Either you want to add data(y/n)" << endl;
			  cin >> rch;
			  if (rch == 'd')
			  {
				  cin.clear();                                        // to delete garbage data
				  cout << "Enter Name" << endl;
				  cin >> sname;
				  cout << "Enter Roll No.. ( Don't break sequence)" << endl;
				  cin >> rollno;
				  cout << "Enter the Obtained marks" << endl;
				  cin >> obtainmark;
				  offile5.open("rfile.txt", ios::app);
				  {
					  offile5 << endl << sname << "		" << rollno << "	      " << obtainmark << "	   " << "900" << endl;
				  }
				  offile5.close();
			  }//if end
			  else 
			  {
				  cout << "Thanks......!"<<endl;
			  }
			  break;
	}
	case 2:
	{
			  fstream resultfile;
			  ofstream offile5;
			  resultfile.open("rfile10.txt", ios::in);
			  if (resultfile)
			  {
				  while (!resultfile.eof())
				  {
					  resultfile.get(rch);
					  cout << rch;
				  }
				  cout << endl;
			  }
			  resultfile.close();
			  ////////////////////////////////////////////////////////// ask for data addition of student
			  cout << "Either you want to add data(y/n)" << endl;
			  cin >> rch;
			  if (rch == 'd')
			  {
				  cin.clear();                                        // to delete garbage data
				  cout << "Enter Name" << endl;
				  cin >> sname;
				  cout << "Enter Roll No.. ( Don't break sequence)" << endl;
				  cin >> rollno;
				  cout << "Enter the Obtained marks" << endl;
				  cin >> obtainmark;
				  offile5.open("rfile10.txt", ios::app);
				  {
					  offile5 << endl << sname << "		" << rollno << "	      " << obtainmark << "	   " << "1000" << endl;
				  }
				  offile5.close();
			  }//if end
			  else 
			  {
				  cout << "Thanks......!"<<endl;
			  }
			  break;
	}
	default:
	{
			   cout << "Out of Range" << endl;
			   break;
	}

	}//end switch
}
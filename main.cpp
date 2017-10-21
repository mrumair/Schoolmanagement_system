////////////////////////////////////////////////////
////
////   Muhammad Ramzan    2015-CS-54
////
////   *****Section D*******
////  
////  Project:: "School Managment System"
////
////////////////////////////////////////////////////
#include<iostream>
#include<string>
#include<conio.h>
#include<Windows.h>
#include"school.h"
using namespace std;

int main()
{
	// label for the menu
	abc:                 
	// creating object of the School                                                       //to show manu again and agin	
	school schoolpart;
	int no;
	string welcome = "\t***********Welcome to R-School System**********\n";   
	for (int i = 0; i < 48; i++)
	{
		cout << welcome[i];
		Sleep(30);
	}
	// displaying menu items
	cout << "\n\n\n\tWhich School do you want to visit?\n" << endl;            
	cout << "\t\t1-Primary \n\t\t2-Middle \n\t\t3-High" << endl;               // show option to slect  a School poration
	cout << "\tEnter Number : ";
	// taking input from the user for menu choice
	cin >> no;
	cout << endl;
	switch (no)                                                                // switch statement 
	{

		case 1: // primary school
		  {
		  	// clear the console screen after user enters choice
		  	System("cls");
		  	// primary school visiting
			schoolpart.printP();
			break; 
		   }

		case 2: //Middle or Elementry School
		   {
		   	// clear the console screen after usre enters choice
		   	System("cls");
			schoolpart.printM();
		    break;
		   }
		case 3: // High or Secondary School
		   {
		   	// clear the console screen after usre enters choice
		   	System("cls");
		   	schoolpart.printH();
		   	break;
		   }
		default: // default case
		   {
		   	System("cls");
		    cout << "Wrong input" << endl;
		    goto abc;
		    break;
		   }
	}//switch end

	cout << "************************************************************************************" << endl;
	goto abc;

	_getch();
}//main end
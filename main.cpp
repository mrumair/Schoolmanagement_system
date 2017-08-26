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
	abc:                                                                       //to show manu again and agin
	
	school schoolpart;
	int no;
	string welcome = "\t***********Welcome to R-School System**********\n";   
	for (int i = 0; i < 48; i++)
	{
		cout << welcome[i];
		Sleep(30);
	}
	cout << "\n\n\n\tWhich School do you want to visit?\n" << endl;            
	cout << "\t\t1-Primary \n\t\t2-Middle \n\t\t3-High" << endl;               // show option to slect  a School poration
	cout << "\tEnter Number : ";
	cin >> no;
	cout << endl;
	switch (no)                                                                // switch statement 
	{
	case 1:
	  {
		schoolpart.printP();
		break; 
	   }

	case 2:
	   {
			  schoolpart.printM();
	   break;
	   }
	case 3:
	   {schoolpart.printH();
	   break;
	   }
	default:
	    {cout << "Wrong input" << endl;
	     break;
	   }
	}//switch end

	cout << "************************************************************************************" << endl;
	goto abc;

	_getch();
}//main end
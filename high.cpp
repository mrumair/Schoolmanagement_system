#include "high.h"
#include<iostream>
using namespace std;

high::high()
{

	labh = new lab();
	clsh = new classroom();
	enh = new enroll();
	resulth = new result();
}

void high::showhigh()                   // show the features of the primary poration the school
{
	char hminor;
	cout << "\tWelcome to Primary School\n" << endl;
	cout << "\t\ta-Labs \n\t\tb-classRooms \n\t\tc-Enrollment\n\t\td-Result" << endl;
	cout << "\tEnter a, b, c or d : ";
	cin >> hminor;                     //slect a feature like labs,classrooms,results, and enrolment systems
	switch (hminor)
  {//switch start
	case'a':
	{labh->printlabh();
	break; 
	}
	case'b':
	{clsh->printcrh();
	break; 
	}
	case'c':
	{enh->showHighoption();
	break; 
	}
	case'd':
	{ resulth->resulthigh();
	break;
	}
	default:
	{cout << "Wrong input" << endl;
	break; 
	}
 }//end switch

}
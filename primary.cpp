#include "primary.h"


primary::primary()                       //memoray allocation according to the classes
{
	labp = new lab();
	clsp = new classroom();
	enp = new enroll();
	resultp = new result();
}

void primary::showprimary()             // show the features of the primary poration the school
{
	char Pminor;
	cout << "\tWelcome to Primary School\n" << endl;
	cout << "\t\ta-Labs \n\t\tb-classRooms \n\t\tc-Enrollment\n\t\td-Result" << endl;
	cout << "\tEnter a, b, c or d : ";
	cin >> Pminor;                     //slect a feature like labs,classrooms,results, and enrolment systems
	switch(Pminor)
	{
	case 'a':
	{labp->printlabp();
	break; }
	case'b':
	{clsp->printcrp();
	break; }
	case'c':
	{enp->showPrimaryoption();
	break; }
	case'd':
	{resultp->resultprimary();
	break; }
	default:
	{cout << "Wrong input" << endl;
	break; }

	}//end of switch
}
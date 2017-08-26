#include "middle.h"
#include<iostream>
using namespace std;


middle::middle()
{                                  //memory allocation according to the classes
	labm = new lab();
	clsm = new classroom();
	enm = new enroll();
	resultm = new result();
}
void middle::showmiddle()         // show the features of the primary poration the school
{
	char Mminor;
	cout << "\tWelcome to Middle School\n" << endl;
	cout << "\t\ta-Labs \n\t\tb-classRooms \n\t\tc-Enrollment\n\t\td-Result" << endl;
	cout << "\tEnter a, b, c or d : " ;
	cin >> Mminor;                  //slect a feature like labs,classrooms,results, and enrolment systems
	switch (Mminor)
	{
	case'a':
	{labm->printlabm();
	break; }
	case'b':
	    {clsm->printcrm();
		break; }
	case'c':
	{enm->showMiddleoption();
	break; }
	case'd':
	{resultm->resultmiddle();
	break; }
	default:
	{cout << "Wrong input " << endl;
	break; }


	}//end switch
}
#include "enroll.h"

enroll::enroll()                                 //constractor
{
	nbr = 0;
}
void enroll:: operator=(enroll &en)             //operator overloading
{
	this->teacherE = en.teacherE;
	this->clerkE = en.clerkE;
	this->headE = en.headE;


}

////////////////////////////////////////////////////////////function for high poration
void enroll::showHighoption()
{
	cout << "1-Head \n 2-Teacher \n 3-Student \n 4-Clerk" << endl;
	cin >> nbr;
	switch (nbr)
	{
	case 1:
	{headE.print();
	break; }
	case 2:
	{teacherE.print();
	break; }
	case 3:
	{ stdE.spacificclassH();
	      
	
	     break;
	}
	case 4:
	{clerkE.print();
	break; }

	default:
	{cout << "    " << endl;
	break; }
	}//switch end
}
////////////////////////////////////////////////////////funtion for Middle poration
void enroll::showMiddleoption()
{
	cout << "1-Head \n 2-Teacher \n 3-Student \n 4-Clerk" << endl;
	cin >> nbr;
	switch (nbr)
	{
	case 1:
	{headE.print();
	break; }
	case 2:
	{teacherE.print();
	break; }
	case 3:
	{ stdE.spacificclassM();


	break;
	}
	case 4:
	{clerkE.print();
	break; }

	default:
	{cout << "    " << endl;
	break; }
	}//switch end
}
//////////////////////////////////////////////////////funtion for primary poration
void enroll::showPrimaryoption()
{
	cout << "1-Head \n 2-Teacher \n 3-Student \n 4-Clerk" << endl;
	cin >> nbr;
	switch (nbr)
	{
	case 1:
	{headE.print();
	break; }
	case 2:
	{teacherE.print();
	break; }
	case 3:
	{ stdE.spacificclassP();
	break;
	}
	case 4:
	{clerkE.print();
	break; }

	default:
	{cout << "    " << endl;
	break; }
	}//switch end
}
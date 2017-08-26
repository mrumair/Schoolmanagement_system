#pragma once
#include"head.h"
#include"teacher.h"
#include"clerk.h"
#include"student.h"
class enroll
{                                                 // compose the classes in enrollment
private:                                         // head,teacher,student and clerk
	int nbr;
	teacher teacherE;
	clerk clerkE;
	head headE;
	student stdE;
public:
	enroll();                                    //constractor
	                                                            
	void operator=(enroll &en);                 //operator overloading
	                                           //enrollment of the High ,middle and primary porations of school
	void showHighoption();
	void showMiddleoption();
	void showPrimaryoption();
};


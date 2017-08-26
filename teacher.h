#pragma once
#include<iostream>
#include<string>
#include"common.h"
class teacher:public common                  // //inheriteded class for the head of the school
{ private:
	string readDOJT;
	char teacherch;
public:
	teacher();                           
	teacher &operator=(const teacher & t);    //operator overloading
	void print();                             //// override function of print
};


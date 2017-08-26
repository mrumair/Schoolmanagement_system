#pragma once
#include<string>
#include<iostream>
#include"common.h"
                                       //override function print is define in this class
using namespace std;

class student:public common            // inheritance of class common
{
	private:
	char oneclass;
	char add;
	string readDOB;
public:
	student();                        //constractor
	student(char,char,string);        //copy constractor
	void print();
	                                 // functions for primary, middle and high poration students
	void spacificclassP();
	void spacificclassM();
	void spacificclassH();
};


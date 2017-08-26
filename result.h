#pragma once
#include<iostream>
#include<string>
using namespace std;

class result                      //this class contain results for three poratons
{  
private:
	char rch;
	string sname;
	string rollno;
	int obtainmark;
public:
	result();
	void resultprimary();       //result of primary
	void resultmiddle();      //result of middle
	void resulthigh();      // result of high
};


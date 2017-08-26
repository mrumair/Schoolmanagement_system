#pragma once
#include<iostream>
using namespace std;
class common                //abstract  common class
{
public:
	string name;             //attribute to add in files so these are public
	int id;
	string contactno;
	string email;

	common();                // contractor

	common(string iname, int iid, string imobleno, string iemail);  //constractor with attributes

	virtual void print() = 0;                                      // virtual function
};

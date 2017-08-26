#pragma once
#include<iostream>
using namespace std;
class lab                        //class of lab   for all porations of school
{  
private:
	int total;
	char labch;
	string labname;
	string inchargename;
public:
	
	lab();
	void printlabp();        //labs of primary
	void printlabm();       //labs of middle
	void printlabh();       //labs of high
};
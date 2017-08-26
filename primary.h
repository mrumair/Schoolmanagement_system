#pragma once
#include"classroom.h"
#include"lab.h"
#include"enroll.h"
#include"result.h"

class primary                     // primary poration
{
private:                         // Associate the lab,classroom,result,and enrollment classes in primary
	lab *labp;                   //by creating pointers of these classes
	classroom *clsp;
	enroll *enp;
	result *resultp;

public:
	primary();
	void showprimary();
};


#pragma once
#include"classroom.h"
#include"lab.h"
#include"enroll.h"
#include"result.h"

class high                                    // high poration of school
{ 
private:                                // Associate the lab,classroom,result,and enrollment classes in primary
	lab *labh;
	classroom *clsh;                        // by creating the pointer of these classes
	enroll *enh;
	result *resulth;
public:
	high();
	void showhigh();
};


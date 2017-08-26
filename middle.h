#pragma once
#include"classroom.h"
#include"lab.h"
#include"enroll.h"
#include"result.h"

class middle                          // middle poraion 
{            
private:                                 // Associate the lab,classroom,result,and enrollment classes in primary
	lab *labm;
	classroom *clsm;                //by creating pointers of these classes
	enroll *enm;
	result *resultm;
public:
	middle();
	void showmiddle();
};


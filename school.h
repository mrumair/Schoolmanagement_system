#pragma once
#include"primary.h"
#include"middle.h"
#include"high.h"
class school                    // main class of school
{
private:                        // classes primary, middle, high are compose in school
	primary p1;
	middle m1;
	high h1;
public:
	school();                  //   print functions for all three porations
	void printP();      
	void printM();
	void printH();
};


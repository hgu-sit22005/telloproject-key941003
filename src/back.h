#pragma once
#include "TelloPro.h"

class Back: public TelloPro
{
public:
	Back();
	Back(int value);
	
public:
	double get_delay();
};

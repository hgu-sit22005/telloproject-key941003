#pragma once
#include "TelloPro.h"

class Left: public TelloPro
{
public:
	Left();
	Left(int value);
	
public:
	double get_delay();
};

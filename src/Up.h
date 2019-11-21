#pragma once
#include "TelloPro.h"

class Up: public TelloPro
{
public:
	Up();
	Up(int value);
	
public:
	double get_delay();
};

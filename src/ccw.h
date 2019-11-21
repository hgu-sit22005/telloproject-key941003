#pragma once
#include "TelloPro.h"

class Ccw: public TelloPro
{
public:
	Ccw();
	Ccw(int value);
	
public:
	double get_delay();
};

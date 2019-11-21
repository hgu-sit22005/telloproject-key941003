#pragma once
#include "TelloPro.h"

class Cw: public TelloPro
{
public:
	Cw();
	Cw(int value);
	
public:
	double get_delay();
};

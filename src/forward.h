#pragma once
#include "TelloPro.h"

class Forward: public TelloPro
{
public:
	Forward();
	Forward(int value);
	
public:
	double get_delay();
};

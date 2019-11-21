#pragma once
#include "TelloPro.h"

class Flip: public TelloPro
{
public:
	Flip();
	Flip(int value);
	
public:
	double get_delay();
};

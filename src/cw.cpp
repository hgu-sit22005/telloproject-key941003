#include "cw.h"
#include <cstring>
#include <sstream> // sting stream, cout과 같은 것으로 문자열로 출력해준다.
Cw::Cw()
{
	command = new char[strlen("cw 20")+1];
	strcpy(command, "cw 20");
}

Cw::Cw(int _value)
{
	std::stringstream sstream;

	sstream << "cw " << _value;

	command = new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());
}

double Cw::get_delay()
{ 
	return 5; 
}
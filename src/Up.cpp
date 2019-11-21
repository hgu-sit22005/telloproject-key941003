#include "Up.h"
#include <cstring>
#include <sstream> // sting stream, cout과 같은 것으로 문자열로 출력해준다.
Up::Up()
{
	command = new char[strlen("up 20")+1];
	strcpy(command, "up 20");
}

Up::Up(int _value)
{
	std::stringstream sstream;

	sstream << "up " << _value;

	command = new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str());
}

double Up::get_delay()
{ 
	return 5; 
}
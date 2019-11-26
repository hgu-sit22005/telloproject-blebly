#include "ccw.h"
#include <cstring>
#include <sstream> //cout이랑 똑같. 하지만 출력을 문자열로

Ccw::Ccw()
{
	command = new char[strlen("ccw 45")+1];
	strcpy(command, "ccw 45"); //ccw X
}

Ccw::Ccw(int _value)
{
	//command = "ccw " + value /in python
	std::stringstream sstream;
	sstream << "ccw " << _value;

	command = new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str()); 
}

double Ccw::get_delay()
{ 
	return 2; 
}
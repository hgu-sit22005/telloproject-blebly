#include "cw.h"
#include <cstring>
#include <sstream> //cout이랑 똑같. 하지만 출력을 문자열로

Cw::Cw()
{
	command = new char[strlen("cw 45")+1];
	strcpy(command, "cw 45"); //cw X
}

Cw::Cw(int _value)
{
	//command = "cw " + value /in python
	std::stringstream sstream;
	sstream << "cw " << _value;

	command = new char[strlen(sstream.str().c_str())+1];
	strcpy(command, sstream.str().c_str()); 
}

double Cw::get_delay()
{ 
	return 2; 
}
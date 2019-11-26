#include "right.h"
#include <cstring>
#include <sstream> //cout이랑 똑같. 하지만 출력을 문자열로

Right::Right()
{
	command = new char[strlen("right 30")+1];
	strcpy(command, "right 30");
}

Right::Right(int _value)
{
	//command = "right " + value /in python
	std::stringstream sstream;
	sstream << "right " << _value;

	command = new char[strlen(sstream.str().c_str())+1]; //꺼내오기
	strcpy(command, sstream.str().c_str());
}

double Right::get_delay()
{ 
	return 5; 
}
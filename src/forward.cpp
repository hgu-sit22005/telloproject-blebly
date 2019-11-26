#include "forward.h"
#include <cstring>
#include <sstream> //cout이랑 똑같. 하지만 출력을 문자열로

Forward::Forward()
{
	command = new char[strlen("forward 40")+1];
	strcpy(command, "forward 40"); //forword X
}

Forward::Forward(int _value)
{
	//command = "forward " + value /in python
	std::stringstream sstream;
	sstream << "forward " << _value;

	command = new char[strlen(sstream.str().c_str())+1]; //꺼내오기
	strcpy(command, sstream.str().c_str()); 
}

double Forward::get_delay()
{ 
	return 2; 
}
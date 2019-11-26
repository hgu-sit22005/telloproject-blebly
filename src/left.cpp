#include "left.h"
#include <cstring>
#include <sstream> //cout이랑 똑같. 하지만 출력을 문자열로

Left::Left()
{
	command = new char[strlen("left 30")+1];
	strcpy(command, "left 30"); //left X
}

Left::Left(int _value)
{
	//command = "left " + value /in python
	std::stringstream sstream;
	sstream << "left " << _value;

	command = new char[strlen(sstream.str().c_str())+1]; //꺼내오기
	strcpy(command, sstream.str().c_str()); 
}

double Left::get_delay()
{ 
	return 2; 
}
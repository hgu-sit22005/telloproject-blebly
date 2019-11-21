#include "up.h"
#include <cstring>
#include <sstream> //cout이랑 똑같. 하지만 출력을 문자열로

Up::Up()
{
	command = new char[strlen("up 20")+1];
	strcpy(command, "up 20"); //up X
}

Up::Up(int _value)
{
	//command = "up " + value /in python
	std::stringstream sstream;
	sstream << "up " << _value;

	command = new char[strlen(sstream.str().c_str())+1]; //꺼내오기
	strcpy(command, sstream.str().c_str()); //up X //sstream 복사
}

double Up::get_delay()
{ 
	return 5; 
}
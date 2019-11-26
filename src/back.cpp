#include "back.h"
#include <cstring>
#include <sstream> //cout이랑 똑같. 하지만 출력을 문자열로

Back::Back()
{
	command = new char[strlen("back 40")+1];
	strcpy(command, "back 40"); //left X
}

Back::Back(int _value)
{
	//command = "back " + value /in python
	std::stringstream sstream;
	sstream << "back " << _value;

	command = new char[strlen(sstream.str().c_str())+1]; //꺼내오기
	strcpy(command, sstream.str().c_str()); 
}

double Back::get_delay()
{ 
	return 2; 
}
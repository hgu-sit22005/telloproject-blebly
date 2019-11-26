#include "down.h"
#include <cstring>
#include <sstream> //cout이랑 똑같. 하지만 출력을 문자열로

Down::Down()
{
	command = new char[strlen("down 30")+1];
	strcpy(command, "down 30"); //down X
}

Down::Down(int _value)
{
	//command = "down " + value /in python
	std::stringstream sstream;
	sstream << "down " << _value;

	command = new char[strlen(sstream.str().c_str())+1]; //꺼내오기
	strcpy(command, sstream.str().c_str()); //down X //sstream 복사
}

double Down::get_delay()
{ 
	return 2; 
}
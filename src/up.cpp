#include "up.h"
#include <cstring>
#include <sstream> //cout이랑 똑같. 하지만 출력을 문자열로

Up::Up() //()argu가 없을 때 이걸로 가고, 아래 숫자만큼 움직임
{
	command = new char[strlen("up 50")+1];
	strcpy(command, "up 50"); //up X
}

Up::Up(int _value) //input value가 있을 때, 그만큼 움직임
{
	//command = "up " + value /in python
	std::stringstream sstream;
	sstream << "up " << _value; //up뒤에 _value 붙임.

	command = new char[strlen(sstream.str().c_str())+1]; //꺼내오기
	strcpy(command, sstream.str().c_str()); //up X //sstream 복사
}

double Up::get_delay()
{ 
	return 5; 
}
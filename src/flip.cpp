#include "flip.h"
#include <cstring>
#include <sstream> //cout이랑 똑같. 하지만 출력을 문자열로

Flip::Flip()
{
	command = new char[strlen("flip 20")+1];
	strcpy(command, "flip 20"); //flip X
}

Flip::Flip(int _value)
{
	//command = "flip " + value /in python
	std::stringstream sstream;

	switch(_value)
	{
	case 0:
			sstream << "flip l";
			break;
	case 1:
			sstream << "flip r";
			break;
	case 2:
			sstream << "flip f";
			break;
	case 3:
			sstream << "flip b";
			break;
	}

	command = new char[strlen(sstream.str().c_str())+1]; //꺼내오기
	strcpy(command, sstream.str().c_str()); //up X //sstream 복사
}

double Flip::get_delay()
{ 
	return 2; 
}
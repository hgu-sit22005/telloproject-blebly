#pragma once
#include "TelloPro.h"

class Up: public TelloPro
{
public:
	Up();
	Up(int _value); //생성자 추가
	
public:
	double get_delay();
};

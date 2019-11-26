#pragma once
#include "TelloPro.h"

class Down: public TelloPro
{
public:
	Down();
	Down(int _value); //생성자 추가
	
public:
	double get_delay();
};

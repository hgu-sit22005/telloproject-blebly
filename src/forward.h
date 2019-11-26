#pragma once
#include "TelloPro.h"

class Forward: public TelloPro
{
public:
	Forward();
	Forward(int _value); //생성자 추가
	
public:
	double get_delay();
};

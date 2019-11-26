#pragma once
#include "TelloPro.h"

class Right: public TelloPro
{
public:
	Right();
	Right(int _value); //생성자 추가
	
public:
	double get_delay();
};

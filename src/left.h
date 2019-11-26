#pragma once
#include "TelloPro.h"

class Left: public TelloPro
{
public:
	Left();
	Left(int _value); //생성자 추가
	
public:
	double get_delay();
};

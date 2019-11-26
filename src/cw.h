#pragma once
#include "TelloPro.h"

class Cw: public TelloPro
{
public:
	Cw();
	Cw(int _value); //생성자 추가
	
public:
	double get_delay();
};

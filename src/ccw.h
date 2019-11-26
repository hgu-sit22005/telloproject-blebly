#pragma once
#include "TelloPro.h"

class Ccw: public TelloPro
{
public:
	Ccw();
	Ccw(int _value); //생성자 추가
	
public:
	double get_delay();
};

#pragma once
#include "TelloPro.h"

class Flip: public TelloPro
{
public:
	Flip();
	Flip(int _value); //생성자 추가
	
public:
	double get_delay();
};

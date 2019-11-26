#pragma once
#include "TelloPro.h"

class Back: public TelloPro
{
public:
	Back();
	Back(int _value); //생성자 추가
	
public:
	double get_delay();
};

#include "MMOn.h"
#include <iostream>


MMOn::MMOn()
	: MyCond{5}
{
}


MMOn::~MMOn()
{
}

int MMOn::MonCondition()
{
	return MyCond;
}

void MMOn::Hello()
{
	std::cout << "그르르 꺼져버려!!\n";
	std::cout << "지금은 내가 기분이 매우 좋아 그냥 보내주는 거야!!\n";
	std::cout << "다음에 보면 국물도 없어!!\n";
	  
}

int MMOn::Role()
{
	return MyRole;
}

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
	std::cout << "�׸��� ��������!!\n";
	std::cout << "������ ���� ����� �ſ� ���� �׳� �����ִ� �ž�!!\n";
	std::cout << "������ ���� ������ ����!!\n";
	  
}

int MMOn::Role()
{
	return MyRole;
}

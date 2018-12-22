#pragma once
class MMOn
{
private:

	int MyCond;
	int MyRole;

public:
	MMOn();

	~MMOn();
	


	// 기분을 알려주는 멤버함수
	int	MonCondition();

	// 인사를 하는 맴버함수
	void Hello();

	// 목적을 알려주는 멤버함수
	int Role();
};


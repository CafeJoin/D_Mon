﻿// DMon.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "MMOn.h"



int main()
{
    std::cout << "몬월드에 온걸 환영한다!\n";
    std::cout << "...\n";
    std::cout << "...\n";
    std::cout << "저 앞에 작은 몬스터 같은 것이 허리에 손 같은 것을 올리고 \"그르르르\" 소리를 내고 있다.\n";
    
	char ok;
    std::cout << "다가 가겠습니까? (Y / N) ";
	std::cin >> ok;

	if (ok == 'y' || ok == 'Y')
	{ 
	std::cout << "조금 겁이 났지만 덩치도 작은 것이기에 자연스럽게 다가가 보기로 했다.\n";
	}
	else
	{
	std::cout << "모르는 것은 무서운 것 이기에 나는 저 작은 몬스터를 피해가기로 했다.\n";
	std::cout << "그러나 너무나 겁먹은 나는 그만 발이 꼬여 굴러굴러 몬스터 앞으로....\n";
	std::cout << "젠장!!\n";
	std::cout << "젠장!!!!!\n";
	std::cout << "젠장....\n";

	}


}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.

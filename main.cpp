#include <iostream>
#include "StringUtil.h"

using namespace std;

int main()
{
	// computer 
	// heap 동적으로 int 사이즈 만들고 주소 반환
	int* Players = new int;

	// 포인터 변수의 주소의 heap의 영역 반환
	delete Players;
	Players = nullptr;

	if (Players) // 참인 경우 사용하고 아닌 경우 사용하지 말라는 형식으로
	{

	}

	return 0;
}

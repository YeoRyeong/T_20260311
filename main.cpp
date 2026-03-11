#include <iostream>
#include "StringUtil.h"

using namespace std;

int main()
{
	// 숫자 입력 받아서 그걸 크기로 숫자 배열을 만들어서
	// 1부터 크기까지 초기화하고 출력하는 프로그램 만들어 보세요.
	// heap 배열을 size 크기만큼 int, 시작번지(int*)

	int Input = 0;
	int* P = nullptr;

	cin >> Input;

	P = new int[Input];

	if (!P) // if(P == nullptr), if(P == 0)
	{
		return -1;
	}

	for (int i = 0; i < Input; i++)
	{
		P[i] = i + 1;
	}

	for (int i = 0; i < Input; i++)
	{
		cout << *(P + i) << ", ";
	}

	cout << endl;

	// 포인터 변수의 주소의 heap의 영역 반환
	delete[] P;
	P = nullptr;

	return 0;
}

#include <iostream>

using namespace std;

void Length(char* Leng)
{
	int Count = 0;

	for (int i = 0; i < 6; i++)
	{
		if (Leng[i] == '\0')
		{
			break;
		}
	}

	cout << "문자열의 갯수 : " << Count << endl;

}

void Change(char* Chan, char* Ch1, char* Ch2)
{
	cout << "특정문 바꾸기(l -> W) : ";

	for (int j = 0; j < 6; j++)
	{
		if (Chan[j] == *Ch1)
		{
			Chan[j] = *Ch2;
		}

		cout << Chan[j];
	}

}

void Search(char* Sear, char* Se)
{
	for (int k = 0; k < 6; k++)
	{
		if (Sear[k] == *Se)
		{
			cout << "o의 위치 : " << k;
		}
	}

}

int main()
{	
	// 문자열 갯수 세기,
	// 문자열 중에서 특정 문자를 특정문 바꾸기
	// 문자열 중에서 특정 문자 위치 찾기

	//	특정 값을 함수 인자로 작업


	char Array[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
	char Ar1 = 'l';
	char Ar2 = 'W';
	char Se = 'o';

	cout << "시작 : " << Array << endl;
	
	Length(Array);
	Change(Array, &Ar1, &Ar2);

	cout << "\n";
	
	Search(Array, &Se);

	return 0;
}
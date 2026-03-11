#include "StringUtil.h"

int Length(char* String, int Size) // char String[] 도 가능하지만 char* String이 맞음.
{ // 끝을 모르기 때문에 배열 크기를 받는 함수가 있어야함.
	for (int i = 0; i < Size; i++) // 끝나는 조건 없앰 -> 길이를 몰라서
	{
		if (String[i] == '\0')
		{
			return i;
		}
	}

	return Size;
}

void Replace(char* String, int Size, char FindCharacter, char ReplaceCharacter)
{
	for (int j = 0; j < Size; j++)
	{
		if (String[j] == FindCharacter)
		{
			String[j] = ReplaceCharacter;
		}
	}
}

int IndexOf(char* String, int Size, char FindCharacter)
{
	for (int k = 0; k < Size; k++)
	{
		if (String[k] == FindCharacter)
		{
			return k;
		}
	}

	return -1;
}

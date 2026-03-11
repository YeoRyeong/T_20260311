#pragma once

/*
	문자열 길이 세는 함수
	param : String - 문자열
			Size - 최대 배열 크기
*/
int Length(char* String, int Size);

void Replace(char* String, int Size, char FindCharacter, char ReplaceCharacter); // 헤더는 정의만 있어도 됨 -> 구현이 없어도 됨.

int IndexOf(char* String, int Size, char FindCharacter);
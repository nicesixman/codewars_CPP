#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

string highestScoringWord(const string &str)
{
	// '&str' will be filled to 'HighestScoringWord'
	return str;
	// return "magic";
}

int getHighestScoringWord()
{
	string testWord = highestScoringWord("man i need a taxi up to ubud");
	cout << testWord;
	// char strArray[1024];
	// strcpy_s �Լ��� �� char �ɰ��� ���� �ʿ�.

	/*
	// ������ ������ ������ �ջ��� ���� ���ο� int ������ ������ ����
	// ���� �ܾ�� ������ ��, ���� �ܾ �� ũ�� �ش� �ܾ highestScorringWord�� �����ϴ� ������� Ǯ�� �� ��.
	*/
	
	return 0;
}

int main()
{
	// All letters will be lowercase and all inputs will be valid.
	// 'a' = 97, 'z' = 122
	// "magic" = 13, 1, 7, 9, 3 = 33
	getHighestScoringWord();

	system("pause");
	return 0;
}
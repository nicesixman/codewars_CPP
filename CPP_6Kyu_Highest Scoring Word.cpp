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
	// strcpy_s 함수로 각 char 쪼개서 복사 필요.

	/*
	// 공백이 나오기 전까지 합산한 수를 새로운 int 변수에 저정한 다음
	// 다음 단어와 비교했을 때, 다음 단어가 더 크면 해당 단어를 highestScorringWord에 저장하는 방식으로 풀면 될 듯.
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
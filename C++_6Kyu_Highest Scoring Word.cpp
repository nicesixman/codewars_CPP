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

string getHighestScoringWord(const string &str_word)
{
	string full_sentence = str_word;
	int get_alphabet_points = 96;
	int word_points = 0;
	int word_compare = 0;

	string final_word;
	int where_is_space = 0;

	cout << "입력된 전체 문장: " << full_sentence << "\n\n";
	for (int i=0; i<(int)full_sentence.length(); i++)
	{
		// 공백 문자 발견 + 점수가 가장 클 경우
		if ((full_sentence.at(i) == ' ') && (word_compare < word_points))
		{
			word_compare = word_points;
			word_points = 0;
			continue;
		}

		// 공백 문자를 발견했으나 점수가 동점 이하인 경우
		else if ((full_sentence.at(i) == ' ') && (word_compare >= word_points))
		{
			word_points = 0;
			where_is_space = i;
			continue;
		}

		// 그 외 일반 문자인 경우
		else
		{
			word_points += (int)full_sentence.at(i) - get_alphabet_points;
			cout << "개별: " << (int)full_sentence.at(i) - get_alphabet_points << "\n";
		}
	}

	// 다음 단어와 비교했을 때, 다음 단어가 더 크면 해당 단어를 highestScorringWord에 저장하는 방식으로 풀면 될 듯.
	// 숫자 합산 및 가장 큰 단어가 있는 부분 계산은 잘 해결됐지만, 해당되는 단어를 string으로 빼는 방법을 고민 중.

	return str_word;
}

int main()
{
	// All letters will be lowercase and all inputs will be valid.
	// 'a' = 97, 'z' = 122
	// "magic" = 13, 1, 7, 9, 3 = 33

	string input;

	cout << "소문자 문장을 입력하세요.\n";
	getline(cin, input);
	getHighestScoringWord(input);

	system("pause");
	return 0;
}

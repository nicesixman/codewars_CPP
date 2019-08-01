#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

string highestScoringWord(const string &str)
{
	string full_sentence = str;
	int get_alphabet_points = 96;
	int word_points = 0;
	int word_compare = 0;

	string final_word;
	char devided_word[100] = { '\0', };
	int alphabet_count = 0;

	cout << "입력된 전체 문장: " << full_sentence << "\n------------------------------------------------\n";
	for (int i=0; i<(int)full_sentence.length(); i++)
	{
		// 공백 문자 발견 + 점수가 가장 클 경우
		if ((full_sentence.at(i) == ' ') && (word_compare < word_points))
		{
			final_word = devided_word;				// 가장 높은 단어를 final_word에 저장한 후
			word_compare = word_points;				// 해당 단어의 점수를 word_compare에 저장하여 지속 비교.
			cout << final_word << " -> " << word_compare << "점 입니다.\n";			// for debug
			word_points = 0;
			memset(devided_word, '\0', sizeof(devided_word));
			alphabet_count = 0;
			continue;
		}

		// 공백 문자를 발견했으나 점수가 동점 이하인 경우
		else if ((full_sentence.at(i) == ' ') && (word_compare >= word_points))
		{
			word_points = 0;
			memset(devided_word, '\0', sizeof(devided_word));
			alphabet_count = 0;
			continue;
		}

		// 그 외 일반 문자인 경우
		else
		{
			word_points += (int)full_sentence.at(i) - get_alphabet_points;			// 단어별 점수 합산
			devided_word[alphabet_count] = full_sentence.at(i);
			alphabet_count++;
			// 제일 마지막 단어는 공백이 없으므로 별도 조건식 작성
			if ((i == (int)full_sentence.length() - 1) && (word_compare < word_points))
			{
				final_word = devided_word;
				word_compare = word_points;
				cout << final_word << " -> " << word_compare << "점 입니다.\n";			// for debug
				memset(devided_word, '\0', sizeof(devided_word));
				break;			// for문 탈출.
			}
		}
	}
	cout << "최종 선별 단어(return): " << final_word << endl;
	return final_word;
}

int main()
{
	// All letters will be lowercase and all inputs will be valid.
	// ASCII) 'a' = 97, 'z' = 122
	// ex) magic == 13, 1, 7, 9, 3 = 33

	string input;

	cout << "소문자 문장을 입력하세요.\n";
	getline(cin, input);
	highestScoringWord(input);

	system("pause");
	return 0;
}

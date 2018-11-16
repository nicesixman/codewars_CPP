#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

class CountDig
{
public:
	static int nbDig(int n, int d);
};

int CountDig::nbDig(int n, int d)
{
	int Squared;
	string SquaredStr;
	int countReturn = 0;

	for (int Count=0; Count<=n; Count++)
	{
		Squared = Count*Count;
		SquaredStr = to_string(Squared);
		char dChar;

		// 2자리 이상의 숫자를 쪼개 각각 검색하기 위해 int Squared -> string으로 변환했기 때문에
		// 검색할 매개변수 int d를 char d로 변환해야 검색이 가능하다.
		dChar = d + '0';
		cout << Squared << " 에서 찾고싶은 숫자(" << d << ")는 "
			<< count(SquaredStr.begin(), SquaredStr.end(), dChar)
			<< "개 포함되어 있습니다.\n";
		if (count(SquaredStr.begin(), SquaredStr.end(), dChar) != 0)
			countReturn += count(SquaredStr.begin(), SquaredStr.end(), dChar);
	}
	cout << "------------------------------------------------------------------\n";
	cout << "숫자(" << d << ")는 모두 " << countReturn << "개 포함되어 있습니다.\n";
	cout << "------------------------------------------------------------------\n";
	return countReturn;
}

int main()
{
	int n, d;
	cout << "------------------------------------------------------------------\n";
	cout << "0~n 까지의 제곱수 내에서 원하는 숫자의 개수를 찾는 프로그램입니다.\n";
	cout << "------------------------------------------------------------------\n";
	cout << "임의의 수 n을 입력하세요: ";
	cin >> n;
	cout << "0~n 까지의 제곱수 내에서 찾고 싶은 숫자를 입력하세요: ";
	cin >> d;
	cout << "------------------------------------------------------------------\n";

	// CtD는 정적 클래스 인스턴스가 되지만, 함수를 호출할 때 필요하지 않음.
	/*
	CountDig CtD;
	CtD.nbDig(n, d);
	*/
	// C4101 warning을 무시할 것이라면 아래 한 줄을 지우고 윗 두 줄을 살리면 된다.
	CountDig::nbDig(n, d);
	
	system("pause");
	return 0;
}

#include <iostream>
#include <Windows.h>
#include <math.h>
using namespace std;

bool is_square(int n)
{
	double sqrt_result;

	sqrt_result = sqrt(n);
	if ((int)sqrt_result == sqrt(n))
		return true;
	else
		return false;
}

int main()
{
	int n;
	cout << "제곱근 판별할 숫자를 입력하세요: ";
	cin >> n;
	is_square(n);
	
	system("pause");
	return 0;
}

#include <iostream>
#include <vector>
#include <Windows.h>
using namespace std;

class Kata
{
public:
	vector<int> foldArray(vector<int> array, int runs)
	{
		cout << "Hello foldArray!\n";
		return vector<int>();
	}
};

int main()
{
	// Sample Test #1.
	vector<int> array = { 1,2,3,4,5 };
	int runs = 1;

	cout << "Hello World!\n";

	Kata kata;
	kata.foldArray(array, runs);

	system("pause");
	return 0;
}

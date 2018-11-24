#include <iostream>
#include <vector>
#include <Windows.h>
using namespace std;

class Kata
{
public:
	vector<int> foldArray(vector<int> array, int runs);
};

vector<int> Kata::foldArray(vector<int> array, int runs)
{
	vector<int> NewArray(((int)array.capacity() / 2));
	vector<int> arrayReTurned;
	vector<int> arrayReUsed;

	// 캐스팅을 하는 이유는 Warning C4018을 방지하기 위함.
	cout << "Original Array(vector): ";
	for (int d=0; d<(int)array.capacity(); d++)
		cout << array[d] << " ";
	cout << "(Capacity: " << array.capacity() << ")\n";
	cout << "New Array(vector): ";

	// 원소의 개수가 짝수일 때는 array 벡터의 원소가 모두 접힌다.
	if ((int)array.capacity() % 2 == 0)
	{
		for (int i=0; i<(((int)array.capacity()/2)); i++)
		{
			NewArray[i] = array.at(i) + array.back();
			array.pop_back();
			cout << NewArray[i] << " ";
		}
		cout << "(Capacity: " << (array.capacity() / 2) << ")\n";
	}
	// 원소의 개수가 홀수일 때는 array 벡터의 마지막 원소 1개가 남는다.
	else if ((int)array.capacity() % 2 == 1)
	{
		for (int i=0; i<((int)array.capacity()/2); i++)
		{
			NewArray[i] = array.at(i) + array.back();
			array.pop_back();
			cout << NewArray[i] << " ";
		}
		NewArray.push_back(array.back());
		array.pop_back();
		cout << NewArray.back() << " ";
		cout << "(Capacity: " << (array.capacity() / 2) + 1 << ")\n";
	}

	if (runs == 1)
		return NewArray;
	else
	{
		arrayReTurned = NewArray;
		for (int re=2; re<=runs; re++)
		{
			cout << "-------------------------------------\n";
			cout << "Try to running foldArray function " << re << " times.\n";
			cout << "-------------------------------------\n";
			cout << "↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓↓\n";
			arrayReUsed = foldArray(arrayReTurned, 1);
			arrayReTurned = arrayReUsed;

			if (arrayReUsed.capacity() == 1)
			{
				cout << "-------------------------------------\n";
				cout << "No more need to 'foldArray' function. Program will exit.\n";
				return arrayReTurned;
				break;
			}
		}
		return arrayReTurned;
	}
}

int main()
{
	// Sample Test.
	vector<int> array = { 1,2,3,4,5,6,7,8,9,10 };
	int runs = 6;

	Kata kata;
	kata.foldArray(array, runs);

	system("pause");
	return 0;
}

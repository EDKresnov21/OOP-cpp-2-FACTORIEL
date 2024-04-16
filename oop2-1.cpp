#include <iostream>
#include <string>
using namespace std;

class Fact {
private:
	int num = 5;
public:
	int factFind(int n)
	{
		if (n == 1)
		{
			return 1;
		}
		else
		{
			return n * factFind(n - 1);
		}
	}
	Fact(int n)
	{
		num = n;
		cout << factFind(num) << endl;
	}
	Fact()
	{
		cout << factFind(num) << endl;
	}
};

int main()
{
	cout << "Input a number (please not 5): ";
	int n;
	cin >> n;
	Fact f(5);
	Fact ff;
	cout << f.factFind(5) << endl << f.factFind(n);
}
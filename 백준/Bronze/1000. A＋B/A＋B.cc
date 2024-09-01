#include<iostream>

using namespace std;

int a=0, b=0;

int main()
{
	cin >> a >> b;

	while ((a>=10)||(b>=10))
	{
		cin >> a >> b;
	}

	int temp = a + b;
	cout << temp;

	return 0;
}
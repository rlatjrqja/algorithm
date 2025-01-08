#include<iostream>

using namespace std;

int main()
{
	int N;
	int arr[1000000] = {};
	int max;
	int min;

	while (1)
	{
		cin >> N;
		if (N >= 1 && N <= 1000000) break;
	}

	for (int i = 0; i < N; i++)
	{
		while (1)
		{
			cin >> arr[i];
			if (arr[i] >= -1000000 && arr[i] <= 1000000) break;
		}

		if (i == 0) { min = arr[0]; max = arr[0]; }
		else {
			if (arr[i] > max) max = arr[i];
			else if (arr[i] < min) min = arr[i];
		}
	}

	cout << min << " " << max;

	return 0;
}
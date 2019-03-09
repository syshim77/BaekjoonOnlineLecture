#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char arr[101];
	int cnt[26] = { 0 };
	int length;

	cin >> arr;
	length = strlen(arr) + 1;

	for (int i = 97; i < 123; i++)
	{
		for (int j = 0; j < length; j++)
		{
			if (arr[j] == i)
			{
				cnt[i - 97]++;
			}
		}
	}

	for (int i = 0; i < 26; i++)
	{
		cout << cnt[i] << " ";
	}

	return 0;
}
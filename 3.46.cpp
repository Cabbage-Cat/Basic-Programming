#include <iostream>
#include <cstdio>

using namespace std;
int main()
{
	float people, rate;
	cout << "Please Enter the earth people and increase rate." << endl;
	cin >> people >> rate;
	rate += 1;
	for (int i = 0; i < 5; i++)
	{
		people *= rate;
		cout << "people " << i + 1 << " year: " << people << endl;
	}
	system("pause");
	return 0;
}
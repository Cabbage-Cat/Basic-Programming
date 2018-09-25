#include <iostream>
#include <cstdio>

using namespace std;
typedef struct
{
	int year, month, day;
	int r_max;
} Node;
int main()
{
	Node person;
	cout << "Plz enter user's birthday." << endl;
	cout << "Sample : 1999 1 1" << endl;
	cin >> person.year >> person.month >> person.day;
	cout << "Plz enter today." << endl;
	cout << "Sample : 2018 1 1" << endl;

	float year, month, day;
	int age;
	cin >> year >> month >> day;
	
	year = year - person.year + (month - person.month) / 12 + (day - person.day) / 365;
	age = year;
	person.r_max = 220 - age;

	cout << "Age: " << age << endl;
	cout << "Max rate: " << person.r_max << endl;
	cout << "Rate expection: " << person.r_max*0.5 << " ~ " << person.r_max*0.85 << endl;
	
	system("pause");
	return 0;
}
#include<iostream>
using namespace std;

int main()
{
	int t_Celsius, t_Fahrenheit;
	cout << "Enter the Celsius temperature:";
	cin >> t_Celsius;
	t_Fahrenheit = (t_Celsius * 9) / 5 + 32;
	cout << "Fahrenheit temperature =" << t_Fahrenheit << endl;

	return 0;
}
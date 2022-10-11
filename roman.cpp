/*
CEH 10/10/2022
*/
#include <iostream>
#include <string>

using namespace std;

string toRoman(int number);

int main(void)
{
	int num;
	system("clear");
	cout << "Please enter a number from 1-3999. >> ";
	cin >> num;
	cout << "\nNumber " << num << " is " << toRoman(num) << " in Roman Numbers.\n";	
}


string toRoman(int number)
{
	string romanNum = "";
	string thousands[] = {"","M", "MM", "MMM"};
	string hundreds[] ={"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
	string tens[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
	string units[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
	
	romanNum = thousands[ (number/1000) ];
	romanNum += hundreds[ (number/100) % 10];
	romanNum += tens[ (number/10) % 10];
	romanNum += units[ number % 10 ];
	
	return romanNum;
}


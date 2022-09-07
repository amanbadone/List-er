// List'er.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Author Aman Badone @LNCTBHOPAL
#include <iostream>
#include<string>
using namespace std;
int main()
{
	cout << "Enter From";
	int from;
	cin >> from;
	cout << "Enter Till";
	int till;
	cin >> till;
	cout << "Enter Constant Part If any";
	string con;
	getline(cin,con) ;
	cin >> con;
	cout << "The list is as follows : " << endl;
	for(int i= from;i<=till;i++)
	{
		//cout << con << i << endl;
		if (i < 10)
		{
			cout << con << 0 << i << endl;
		}
		else
		{
			cout << con << i << endl;
		}
	}
	system("pause");

}





#pragma once
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

class vehicleDrozdov
{
public:
	string name;
	int year = 0;
	double strt_prc = 0;
	void output();
	void input();
	void output_file(ifstream& file);
	void input_file(ofstream& file);
};

template <typename T>
void check_menu(T& input, T min, T max)
{
	while (!(cin >> input) || (input > max) || (input < min))
	{
		cin.clear();
		cin.ignore(10000, '\n');
		cout << "Неверные данные" << endl;
	}
}

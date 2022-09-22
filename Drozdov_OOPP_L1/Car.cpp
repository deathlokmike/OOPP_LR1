#include "Car.h"

void vehicleDrozdov::input()
{
	
	string str;
	cout << "������� �������� ����������:" << endl;
	cin.ignore();
	getline(cin, str);
	name = str;
	cout << "������� ��� �������:" << endl;
	check_menu(year, 1800, 2020);
	cout << "������� ��������� ���� � $:" << endl;
	check_menu(strt_prc, 0.0, 99999999999.0);
}

void vehicleDrozdov::output()
{
	cout << "����������: " << name << endl;
	cout << "��� �������:  " << year << endl;
	cout << "��������� ���� � $: " << strt_prc << endl;
}

void vehicleDrozdov::input_file(ofstream& file)
{
	file << year << 
	"\n" << strt_prc << 
	"\n" << name << "\n";
}

void vehicleDrozdov::output_file(ifstream& file)
{
	file >> year;
	file >> strt_prc;
	file.ignore();
	getline(file, name);
	file.peek();
}
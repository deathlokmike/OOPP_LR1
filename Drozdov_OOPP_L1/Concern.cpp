#include "Concern.h"

void ConcernDrozdov::add_new() 
{
	vehicleDrozdov* vhl = new vehicleDrozdov();
	vhl->input();
	motorshow.push_back(vhl);
	system("cls");
	cout << "���������� ��������, �������� ����� ��� �����������:" << endl;
}

void ConcernDrozdov::out_console()
{
	if (motorshow.size() != 0) {
		system("cls");
		for (int i = 0; i < int(motorshow.size()); i++)
		{
			cout << i + 1 << ") ";
			(*motorshow[i]).output();
			cout << endl;
		}
	}
	else
	{
		system("cls");
		cerr << "� �������� ��� ����\n" << endl;
	}
}

void ConcernDrozdov::add_to_file()
{
	if (motorshow.size() != 0) {
		system("cls");
		string path;
		cout << "������� �������� �����:" << endl;
		cin >> path;
		ofstream file;
		file.open(path += ".txt");
		for (int i = 0; i < int(motorshow.size()); i++)
		{
			(*motorshow[i]).input_file(file);
		}
		file.close();
		system("cls");
		cout << "������!\n" << endl;
	}
	else
	{
		system("cls");
		cerr << "� �������� ��� ����\n" << endl;
	}
}

void ConcernDrozdov::out_from_file()
{
	system("cls");
	string path;
	cout << "������� �������� �����:" << endl;
	cin >> path;
	ifstream file;
	file.open(path += ".txt");
	if (!file.is_open())
	{
		cerr << "������ �������� �����\n" << endl;
		return;
	}
	while (!file.eof())
	{
		vehicleDrozdov* vhl = new vehicleDrozdov();
		vhl->output_file(file);
		motorshow.push_back(vhl);
	}
	file.close();
	system("cls");
	cout << "������!\n" << endl;
}

void ConcernDrozdov::clear()
{
	for (int i = 0; i < motorshow.size(); i++)
	{
		delete motorshow[i];
	}
	motorshow.clear();
	system("cls");
	cout << "������ ������\n" << endl;
}
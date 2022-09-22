#include "Concern.h"
#include <Windows.h>

void Menu()
{
	cout << "1. Добавить авто в картотеку\n" <<
		"2. Показать каталог авто\n" <<
		"3. Сохранить базу авто в файл\n" <<
		"4. Загрузить базу авто из файла\n" <<
		"5. Отчистить список\n" << 
		"0. Закрыть программу" << endl;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Rus");
	int n;
	ConcernDrozdov concern;
	for (;;)
	{
		Menu();
		check_menu(n, 0, 5);
		switch (n)
		{
		case 1:
			concern.add_new();
			break;
		case 2:
			concern.out_console();
			break;
		case 3:
			concern.add_to_file();
			break;
		case 4:
			concern.out_from_file();
			break;
		case 5:
			concern.clear();
			break;
		case 0:
			return 0;
		default:
			break;
		}
	}
}
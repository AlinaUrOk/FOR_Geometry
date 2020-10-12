// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "ConsoleApplication1.h"
using namespace std;
int mainMenu() 
{
	setlocale(LC_ALL, "Russian");
	system("CLS");
	cout << "1. Прямоугольный треугольник" << endl;
	cout << "2. Прямоугольник" << endl;
	cout << "3. Равностороний треугольник" << endl;
	cout << "4. Ромб" << endl;
	cout << "0. Exit" << endl;
	int choice = 0;
	cin >> choice;
	return choice;
}
int main()
{
	while (true)
	{
		int choice = mainMenu();
		if (choice == 0) break;
		switch (choice)
		{
		case 1: coutPrTr(); break;
		case 2: coutPryam(); break;
		case 3: coutTre(); break;
		case 4: coutRomb(); break;
		default: cout << "Error choice"; break;
		}
		system("PAUSE");
	}
	return 0;
	
	
}





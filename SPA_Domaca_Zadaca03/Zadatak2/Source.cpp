#include<iostream>
#include "DijkstraAlgorithm.h"
#include <Windows.h>
using namespace std;

int main()
{
	int x = 20;
	int y = 40;

	DijkstraAlgorithm polje(x, y);

	cout << "Redak A: ";
	cin >> x;
	cout << "Stupac A: ";
	cin >> y;

	polje.setA(x, y);

	cout << "Redak B: ";
	cin >> x;
	cout << "Stupac B: ";
	cin >> y;

	polje.setB(x, y);

	do
	{
		system("cls");
		cout << polje.start();
		Sleep(100);

	} while (polje.TempTocka() != polje.RealTocka());


	return 0;
}
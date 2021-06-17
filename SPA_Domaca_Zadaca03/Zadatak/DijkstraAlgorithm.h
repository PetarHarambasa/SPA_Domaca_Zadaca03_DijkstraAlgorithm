#pragma once
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class DijkstraAlgorithm
{
private:
	int x = 0;
	int y = 0;
	pair<pair<int, int>, pair<int, int>> realTocka;
	pair<int, int> tempTocka;
	void Algoritam();
public:
	DijkstraAlgorithm(int x, int y);
	void setA(int x, int y);
	void setB(int x, int y);
	string start();
	pair<int, int> RealTocka();
	pair<int, int> TempTocka();
};


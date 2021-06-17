#include "DijkstraAlgorithm.h"

void DijkstraAlgorithm::Algoritam()
{
	if (this->tempTocka.first == 3 && this->tempTocka.second == 1 ||
		this->tempTocka.first == 3 && this->tempTocka.second == 2 ||
		this->tempTocka.first == 3 && this->tempTocka.second == 3 ||
		this->tempTocka.first == 3 && this->tempTocka.second == 4 ||
		this->tempTocka.first == 3 && this->tempTocka.second == 5 ||
		this->tempTocka.first == 3 && this->tempTocka.second == 6 ||
		this->tempTocka.first == 3 && this->tempTocka.second == 7 ||
		this->tempTocka.first == 3 && this->tempTocka.second == 8 ||
		this->tempTocka.first == 3 && this->tempTocka.second == 9 ||
		this->tempTocka.first == 3 && this->tempTocka.second == 10 ||
		this->tempTocka.first == 3 && this->tempTocka.second == 11 ||
		this->tempTocka.first == 3 && this->tempTocka.second == 12 ||
		this->tempTocka.first == 3 && this->tempTocka.second == 13 ||
		this->tempTocka.first == 3 && this->tempTocka.second == 14 ||
		this->tempTocka.first == 3 && this->tempTocka.second == 15 ||
		this->tempTocka.first == 3 && this->tempTocka.second == 16 ||
		this->tempTocka.first == 3 && this->tempTocka.second == 17 ||
		this->tempTocka.first == 3 && this->tempTocka.second == 18 ||
		this->tempTocka.first == 3 && this->tempTocka.second == 19 ||
		this->tempTocka.first == 3 && this->tempTocka.second == 20 ||
		this->tempTocka.first == 3 && this->tempTocka.second == 21 ||
		this->tempTocka.first == 3 && this->tempTocka.second == 22 ||
		this->tempTocka.first == 3 && this->tempTocka.second == 23 ||
		this->tempTocka.first == 3 && this->tempTocka.second == 24 ||
		this->tempTocka.first == 3 && this->tempTocka.second == 25 ||
		this->tempTocka.first == 3 && this->tempTocka.second == 26 ||
		this->tempTocka.first == 3 && this->tempTocka.second == 27 ||
		this->tempTocka.first == 3 && this->tempTocka.second == 28 ||
		this->tempTocka.first == 3 && this->tempTocka.second == 29 ||
		this->tempTocka.first == 3 && this->tempTocka.second == 30 ||
		this->tempTocka.first == 3 && this->tempTocka.second == 31 ||
		this->tempTocka.first == 3 && this->tempTocka.second == 32 ||
		this->tempTocka.first == 3 && this->tempTocka.second == 33 ||
		this->tempTocka.first == 3 && this->tempTocka.second == 34 ||
		this->tempTocka.first == 3 && this->tempTocka.second == 35 ||
		this->tempTocka.first == 3 && this->tempTocka.second == 36 ||
		this->tempTocka.first == 3 && this->tempTocka.second == 37 ||
		this->tempTocka.first == 3 && this->tempTocka.second == 38 ||
		this->tempTocka.first == 3 && this->tempTocka.second == 39 
		)
	{
		++(this->tempTocka.second);
	}
	else if (this->tempTocka.first > this->realTocka.second.first)
	{
		--(this->tempTocka.first);
	}
	else if (this->tempTocka.first < this->realTocka.second.first)
	{
		++(this->tempTocka.first);
	}
	else
	{
		if (this->tempTocka.second > this->realTocka.second.second)
		{
			--(this->tempTocka.second);
		}
		else if (this->tempTocka.second <= this->realTocka.second.second)
		{
			++(this->tempTocka.second);
		}
	}
}

DijkstraAlgorithm::DijkstraAlgorithm(int x, int y)
{
	this->x = x;
	this->y = y;
}

void DijkstraAlgorithm::setA(int x, int y)
{
	this->realTocka.first.first = x;
	this->realTocka.first.second = y;
}

void DijkstraAlgorithm::setB(int x, int y)
{
	this->realTocka.second.first = x;
	this->realTocka.second.second = y;

	this->tempTocka = this->realTocka.first;
}

string DijkstraAlgorithm::start()
{
	this->Algoritam();
	stringstream ss;

	for (int i = 1; i <= this->x; ++i)
	{
		for (int j = 1; j <= this->y; ++j)
		{
			if (i == this->tempTocka.first && j == this->tempTocka.second)
			{
				ss << "x";
			}
			else if (i == this->realTocka.first.first && j == this->realTocka.first.second)
			{
				ss << "A";
			}
			else if (i == this->realTocka.second.first && j == this->realTocka.second.second)
			{
				ss << "B";
			}
			else if (i == 4 && j == 1 || i == 4 && j == 2 || i == 4 && j == 3 || i == 4 && j == 4 || i == 4 && j == 5 ||
				i== 4 && j==6 || i == 4 && j == 7|| i == 4 && j == 8|| i == 4 && j == 9|| i == 4 && j == 10 || i == 4 && j == 11 
				|| i == 4 && j == 12 || i == 4 && j == 13 || i == 4 && j == 14 || i == 4 && j == 15 || i == 4 && j == 16 || i == 4 && j == 17
				|| i == 4 && j == 18 || i == 4 && j == 19 || i == 4 && j == 20 || i == 4 && j == 21 || i == 4 && j == 22 || i == 4 && j == 23 || i == 4 && j == 24 || i == 4 && j == 25 ||
				i == 4 && j == 26 || i == 4 && j == 27 || i == 4 && j == 28 || i == 4 && j == 29 || i == 4 && j == 30 || i == 4 && j == 31
				|| i == 4 && j == 32 || i == 4 && j == 33 || i == 4 && j == 34 || i == 4 && j == 35 || i == 4 && j == 36 || i == 4 && j == 37
				|| i == 4 && j == 38 || i == 4 && j == 39)
			{
				ss << "*";
			}
			else
			{
				ss << "-";
			}
		}
		ss << "\n";
	}

	return ss.str();
}

pair<int, int> DijkstraAlgorithm::RealTocka()
{
	return this->realTocka.second;
}

pair<int, int> DijkstraAlgorithm::TempTocka()
{
	return this->tempTocka;
}

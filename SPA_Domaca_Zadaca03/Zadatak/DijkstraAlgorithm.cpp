#include "DijkstraAlgorithm.h"

void DijkstraAlgorithm::Algoritam()
{
	if (this->tempTocka.first > this->realTocka.second.first)
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

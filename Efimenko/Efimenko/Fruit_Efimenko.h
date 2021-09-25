#pragma once
#include <string>
#include <iostream>
#include <stdio.h>
#include <fstream>
using namespace std;

class Fruit_Efimenko
{
public:
	string name = "";
	int amount = 0; //параметры по умолчанию
	double price = 0;

	void print();
	void enter();
	void save(ofstream& fout);
	void load(ifstream& fin);

};
	

#pragma once
#include <string>
#include <iostream>
#include <vector>
#include "Fruit_Efimenko.h"
using namespace std;

class Salad
{
public:
	string causin="";
	string name="";
	vector <Fruit_Efimenko*> salad;

	void add_fruit(Fruit_Efimenko* subject);
	void print();
	void enter();
	void save_recipe(ofstream& fout);
	void load_recipe(ifstream& fin);
	void delvec();

	Salad();
	~Salad();

	
};

#include "Fruit_Efimenko.h"
using namespace std;

void Fruit_Efimenko::print()
{
	cout << "Название: " << name << endl;
	cout << "Кол-во: " << amount << '\n' << "Цена: " << price << endl;
}
void Fruit_Efimenko:: enter()
{
	cin.clear();
	cout << "Введите имя: ";
	cin >> name;
	cout << "Введите кол-во: ";
	cin >> amount;
	cout << "Введите стои-ть: ";
	cin >> price;
	cout << "Фрукт добавлен" << endl;
}
void Fruit_Efimenko:: save(ofstream& fout)
{
	fout << "fruit" << '\n' << name << '\n' << amount << '\n' << price << '\n';
}
void Fruit_Efimenko:: load(ifstream& fin)
{
	getline(fin, name);
	fin >> amount;
	fin >> price;
	fin.ignore();
}


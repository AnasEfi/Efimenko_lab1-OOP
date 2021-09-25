#include "Salad.h"
using namespace std;

void Salad::add_fruit(Fruit_Efimenko* subject)
{
	salad.push_back(subject);
}

void Salad::print()
{
	cout << '\n' << "+++++++++++++++++++++++" << endl;
	cout << "Название салата: " << name << '\n' << "Название кухни: " << causin << endl;
	cout << "Ингредиенты: " << endl;

	for (auto& ptr : salad)
	{
		cout << "Фрукт: " << ptr->name << '\n' << "Кол-во: " << ptr->amount << '\n' << "Цена:" << ptr->price << endl;
	}
	cout << "+++++++++++++++++++++++" << '\n' << endl;

}
void Salad::enter()
{
	cin.clear();
	cout << "Введите название салата: ";
	cin >> name;
	cout << "Введите название национальной кухни: ";
	cin >> causin;
}

void Salad::save_recipe(ofstream& fout)
{
	fout << "recipe" << '\n' << name << '\n' << causin << '\n';
	for (auto& ptr : salad)
		fout << "Fruit" << '\n' << ptr->name << '\n' << ptr->amount << '\n' << ptr->price << endl;
	fout << "finish" << endl;
}
void Salad::load_recipe(ifstream& fin)
{
	string data;
	getline(fin, name);
	getline(fin, causin);
	while (getline(fin, data))
	{
		if (data != "finish")
		{
			Fruit_Efimenko* ptr = new Fruit_Efimenko();
			getline(fin, ptr->name);
			fin >> ptr->amount;
			fin >> ptr->price;
			fin.ignore();
			salad.push_back(ptr);
		}
		else return;
	}
}
void Salad:: delvec()
{
	for (auto& ptr : salad)
		delete ptr;
}

Salad::Salad()
{

}
Salad::~Salad()
{

}


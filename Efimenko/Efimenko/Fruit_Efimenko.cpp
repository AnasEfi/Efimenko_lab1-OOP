#include "Fruit_Efimenko.h"
using namespace std;

void Fruit_Efimenko::print()
{
	cout << "��������: " << name << endl;
	cout << "���-��: " << amount << '\n' << "����: " << price << endl;
}
void Fruit_Efimenko:: enter()
{
	cin.clear();
	cout << "������� ���: ";
	cin >> name;
	cout << "������� ���-��: ";
	cin >> amount;
	cout << "������� ����-��: ";
	cin >> price;
	cout << "����� ��������" << endl;
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


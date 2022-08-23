#include <iostream>
#include <cstring>
using namespace std;
class Children
{
	char name[32];
	char surname[32];
	int age;
	public:
	void fillData();
	void showData();
};
int main() {
	setlocale(LC_CTYPE, "RUSSIAN");
	Children FirstChild;
	Children SecondChild;
	
	cout<<"Внесите данные!\n";
	FirstChild.fillData();
	SecondChild.fillData();
	
	FirstChild.showData();
	SecondChild.showData();
	
	return 0;
}
void Children::fillData()
{
	cout << "Имя: ";
	cin.getline(name, 32);
	cout << "Фамилия: ";
	cin.getline(surname, 32);
	cout << "Возраст: ";
	cin>> age;
	cin.get();
}
void Children::showData()
{
	cout << name << endl;
	cout << surname << endl;
	cout << age << " лет;\n";
	 }	 


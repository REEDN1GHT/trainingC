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
	
	cout<<"������� ������!\n";
	FirstChild.fillData();
	SecondChild.fillData();
	
	FirstChild.showData();
	SecondChild.showData();
	
	return 0;
}
void Children::fillData()
{
	cout << "���: ";
	cin.getline(name, 32);
	cout << "�������: ";
	cin.getline(surname, 32);
	cout << "�������: ";
	cin>> age;
	cin.get();
}
void Children::showData()
{
	cout << name << endl;
	cout << surname << endl;
	cout << age << " ���;\n";
	 }	 


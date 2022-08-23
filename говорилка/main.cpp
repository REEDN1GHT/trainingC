#include <iostream>
using namespace std;


int main() 
{
	setlocale(LC_CTYPE,"Russian");
	/*7*/ int a, b;
	    cout <<"Здравствуйте! Меня зовут Попуапуа:" <endl>;
		cout <<"Как вас зовут?" <endl>;
		
		cin >>a;
		cout <<"Приятно познакомиться:";
		cout <<"Сколько вам лет?";
		cin >>b;
		cout <<"Имя" << a << endl;
		cout <<"Возраст" << b << endl;
		system("pause>nul"); 
	return 0;
}

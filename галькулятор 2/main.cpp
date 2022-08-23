#include <iostream>
using namespace std;


int main() {
	setlocale(0,"");
	/*7*/ int a, b;
		cout <<"Введите первое число:";
		cin >>a;
		cout <<"Введите второе число:";
		cin >>b;
		/*12*/ int c=a+b;
		int d=a*b;
		int e=a-b;
		int f=a/b;
		cout <<"Сумма чисел=" << c << endl;
		cout <<"Призведение чисел=" << d << endl;
		cout <<"Разность чисел=" << e << endl;
		cout <<"Частное=" << f << endl;
		system("pause>nul"); 
	return 0;
}

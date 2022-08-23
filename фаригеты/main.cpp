#include <iostream>
#include <math.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_CTYPE, "Russian");
	cout<<"Введите температуру"<<endl;
	float c,f;
	cin>>f;
	c=5/9*(f-32);
	cout<<"c="<<c<<endl;
	system("pause.nul");
	
	
	return 0;
}

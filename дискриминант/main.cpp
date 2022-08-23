#include <iostream>
#include <math.h>
using namespace std;
int main() {
	setlocale(LC_CTYPE,"Russian");
	float a,b,c,D,x,x1,x2;
	cout<<"Введите значения"<<endl;
	cin>>a>>b>>c;
	D=(b*b)-4*a*c;
	if (D>=0) 
	x1=(-b)+sqrt(D)/2*a;
	x2=(-b)-sqrt(D)/2*a;
	cout<<"x1="<<x1<<"x2="<<x2<<endl;
	system("pause>nul");
	return 0;
}

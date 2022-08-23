#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"Russian");
	cout<<"¬ведите число"<<endl;
	float a,z1,z2;
	cin>>a;
	z1=(sin(2*a)+sin(5*a)-sin(3*a))/(cos(a)-cos(3*a)+cos(5*a));
	z2=tan(3*a);
	cout<<"z1="<<z1<<endl;
	cout<<"z2="<<z2<<endl;
	system("pause.nul");
	return 0;
}

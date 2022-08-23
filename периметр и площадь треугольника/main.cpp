#include <iostream>
#include <math.h>
using namespace std;
int main() {
	setlocale(LC_CTYPE,"Russian");
	cout<<("¬ведите число")<<endl;
	float a,b,c,s,p;
	cin>>a>>b>>c;
	p=a+b+c;
	s=sqrt(p/2*((p/2)-a)*((p/2)-b)*((p/2))-c);
	cout<<"P="<<p<<endl;
	cout<<"s="<<s<<endl;
	system("pause>nul");
	return 0;
}

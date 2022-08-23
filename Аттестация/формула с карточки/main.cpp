#include <iostream>
#include <math.h>
using namespace std;
int main() {
	double R,x,b,a,S,s1;
	cout <<"x=";
	cin>>x;
	cout<<"b=";
	cin>>b;
	cout<<"a=";
	cin>>a;
	R=(pow(x,2)*(x+1))/b-(pow(sin(x+a),2));
	s1=pow((x+b),3);
	S=sqrt(x*b/a)+pow(cos(s1),2);
	cout <<"R="<<R<<endl;
	cout <<"S="<<S<<endl;
	system("pause.nul");
	
	return 0;
}

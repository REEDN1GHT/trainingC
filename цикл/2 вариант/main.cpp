#include <iostream>
#include <math.h>
using namespace std;

int main() {
	double const pi=3.14;
	float x,y;
	x=0;
	do
	{
		y=exp(sin(x))*cos(x);
		cout<<"x= "<<x<<"y= "<<y<<endl;
		x+=0.1;
	}
	while (x<=pi);
	
	return 0;
}

#include <iostream>
#include <math.h>
using namespace std;

int main() {
	double const pi=3.14;
	float x,y;
 for (x=0;x<=pi;x+=0.1)
	{
		y=exp(sin(x))*cos(x);
		cout<<"x= "<<x<<"y= "<<y<<endl;
		x+=0.1;
	}
	
	return 0;
}

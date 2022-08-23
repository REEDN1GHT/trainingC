#include <iostream>
#include <math.h>
using namespace std;

int main() {
	float x,y;
	x=0;
	do
	{
		y=(pow(2,x));
		cout<<"x= "<<x<<"y= "<<y<<endl;
	    x+=1;
	}
	while (x<=10);
	return 0;
}

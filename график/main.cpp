#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "Russian");
	float x,y;
	cout<<"������� �������� ���������"<<endl;
	cin>>x;
	if(x<-2)y=0;
	if(x>=-2&& x<-1)y=-x+2;
	if(x>=2)y=0;
	cout<<"��� x="<<x<<" "<<"�������� ������� y="<<y<<endl;
	system("pause.nul");
	return 0;
}

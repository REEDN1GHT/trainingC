#include <iostream>
#include <string>
#include <graphics.h>
using namespace std;
class tochka
{	
    public:
	int x;
	int y;
}
int main() {
	setlocale(LC_CTYPE, "RUSSIAN");
	tochka b;
	cout<<"Введите значения"<<endl;
	cin>>b.x;
	cin>>b.y;
	line(b.x,b.y);
	
	return 0;
}

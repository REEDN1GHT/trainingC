#include <iostream>
using namespace std;
string Vvod(string b)
{
setlocale(LC_ALL, "Russian");
cin>>b;
cout<<"������ "<<b<<endl;
return b;
}
int main() {
	string b;
	Vvod(b);
	return 0;
}

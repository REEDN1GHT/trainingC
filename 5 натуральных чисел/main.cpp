#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	setlocale(LC_CTYPE,"Russian");
	int n=9,k=1;
	cout<<"Пять натуральных чисел"<<endl;
	while(k<=n)
	{
	cout<<" "<<k;
	k=k+2;	

	}
		system("pause>nul");
	return 0;
}

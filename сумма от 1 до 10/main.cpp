#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	setlocale(LC_CTYPE,"Russian");

	int n=10,s=0,k=1;
	while(k<=n)
	{s=s+k*k;
	k++;
	}
	cout<<"����� ��������� �� 1 �� "<<n<<": "<<s<<endl;
	system("pause>nul");
	return 0;
}

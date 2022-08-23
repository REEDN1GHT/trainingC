#include <iostream> 
using namespace std; 
int main() 
{
	int i,j,n,m,a[20][20];
	setlocale(LC_CTYPE,"Russian");
	cout<<"N= ";
	cin>>n;
	cout<<"M= ";
	cin>>m;
	cout<<"Введите значения матрицы"<<endl;
	for (i=0; i<n; i++)
    for (j=0; j<m; j++)
	cin>>a[i][j];
 cout<<"Матрица А"<<endl;
	 for(i=0; i<n; i++)
	 {
	 for (j=0; j<m; j++)
	 cout<<a[i] [j]<< "  ";
	 cout<<endl;
	 }
	 return 0;
}

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
	
	for (i=0; i<n; i++)
    for (j=0; j<m; j++)
    {
	int array[20][20];
	 if (i * n <= j * m) 
    array[i][j] = 1; 
 else
     array[i][j] = 0;
    }
	cout<<"Матрица А"<<endl;
	 for(i=0; i<n; i++)
	 {
	 for (j=0; j<m; j++)
	 cout<<a[i] [j]<< "  ";
	 cout<<endl;
	 }
	 return 0;
}

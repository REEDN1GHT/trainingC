#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main(void)
{
	int i;
    int val = -1;
    int N;
 
    scanf ("%d", &N);
 
    while ( ((val += 2) <= 10) && printf ("%5d", val) ) ;
 
    system ("pause");
    return 0;
}

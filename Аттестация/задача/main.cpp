#include <iostream>
#include <math.h>
using namespace std;
int main() {
	setlocale(LC_CTYPE,"Russian");
	const double g=9.81;
   const double pi=3.1416;
   double H, alpha, V, t, x,y, s, T, k, m;
   cout << "Введите высоту обрыва H = ";
   cin >> H;
   cout << "Введите начальную скорость V = ";
   cin >> V;
   cout << "Введите угол альфа = ";
   cin >> alpha;
   cout << "Введите время t = ";
   cin >> t;
   alpha = alpha*pi/180;
   x = V*t*cos(alpha);
   y = H+V*t*sin(alpha)-g*t*t/2;
   k = cos(alpha)/sin(alpha);
   m = sin(alpha)/cos(alpha);   
  // s = 1-((k-m)/(k+m)/2); 
   s = pow(sin(alpha),2); 
   T = (V*sin(alpha)/g)*(1+sqrt(1+((2*g*H)/(V*V*s))));
   cout << "Высота от дна обрыва x = " << x << endl;
   cout << "Рсстояние до края обрыва y = " << y << endl;
   cout << "Время полета камня = " << T << endl;
  
   system("pause.nul");
	return 0;
}

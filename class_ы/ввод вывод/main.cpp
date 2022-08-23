#include <iostream>
#include <string>
using namespace std;
class stud
{public:
string name;
string surname;};
int main ()
{setlocale(LC_CTYPE, "RUSSIAN");
stud b;
b.name="Андрей";
b.surname="Гуськов";
cout<<b.name<<" "<<b.surname; 
return 0;}

#include <iostream>
#include <string>
using namespace std;
class stud
{	
    private:
	char a_name;
	string surname;
	int a_age;
	
	public:
		int setage(int age){a_age=age;}
		int getage(){return a_age; }
	//	char setname(char name) {a_name=name; }
//		char getname() {return a_name;}
};
int main() {
	stud b;
	b.setage(1579);
//	b.setname("a");
	cout<<b.getage()<<endl;
//	cout<<b.getname();
	
	return 0;
}

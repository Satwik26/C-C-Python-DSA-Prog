#include<iostream>
using namespace std;
class Test {
public:
    static int objCounter;
	Test(){
		Test::objCounter++;
    }
	~Test(){
		Test::objCounter--;
	}
};
int Test::objCounter;
int main(){
	Test obj1, *ptr, obj2;
	cout << endl << "Number of Objects : " << Test::objCounter;
	ptr= new Test;
	cout << endl << "Number of Objects : " << Test::objCounter;
	delete ptr;
	cout << endl << "Number of Objects : " << Test::objCounter;
	return 0;
}

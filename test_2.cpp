#include <iostream>
using namespace std;

void func(int &a) {
	a++;
}

int main() {
	int a=0;
	func(a);
	cout<<a<<endl;
	return 0;
}

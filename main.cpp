#include <iostream>
#include "findPath.h"
#include "findPath_2.h"
using namespace std;

void test1() {
    int rows=6;
    int cols=6;
    int k=5;
    cout<<findPath(rows,cols,k)<<" "<<func(rows,cols,k)<<endl;
}

void test2() {
    int rows=1;
    int cols=6;
    int k=5;
    cout<<findPath(rows,cols,k)<<" "<<func(rows,cols,k)<<endl;
}

void test3() {
    int rows=4;
    int cols=1;
    int k=3;
    cout<<findPath(rows,cols,k)<<" "<<func(rows,cols,k)<<endl;
}

void test4() {
    int rows=1;
    int cols=6;
    int k=0;
    cout<<findPath(rows,cols,k)<<" "<<func(rows,cols,k)<<endl;
}

void test5() {
    int rows=1;
    int cols=6;
    int k=-1;
    cout<<findPath(rows,cols,k)<<" "<<func(rows,cols,k)<<endl;
}

int main() {
	test1();
	test2();
	test3();
	test4();
	try {test5();}
	catch (invalid_argument e) {
		cout<<e.what()<<endl;
	}
	return 0;
}

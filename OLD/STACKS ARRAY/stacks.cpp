#include <iostream>
#include "stack.h"
using namespace std;
int main(){
	stack a;
	a.push(5);
	a.atTop();
	a.push(10);
	a.print();
	return 0;
}
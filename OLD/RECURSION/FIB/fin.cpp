#include <iostream>
using namespace std;
int fib(double num){
	if(num<2){
		return 2;
	}
	return (fib(num-1)+fib(num-2));
}
int main(){
	double num=6;
	cout<<fib(num)<<"      ";
}
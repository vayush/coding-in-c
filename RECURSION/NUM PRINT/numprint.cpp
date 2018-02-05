#include <iostream>
using namespace std;
int countnum(int num){
	if(num<1){
		return 1;
	}
	cout<<num<<"  ";
	return countnum(num-1);

}
int main(){
	int num;
	cin>>num;
	countnum(num);
	return 0;
}
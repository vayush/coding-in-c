#include <iostream>
using namespace std;
int main(){
	int n=15;
	
	int c3=1, c5=1;
	for(int i=1 ;i <= n;i++){
		if(c3 == 3){
			cout<<"fizz";
			c3=0;
		}
		if(c5 == 5){
			cout<<"buzz";
			c5=0;
		}
		else{
			cout<<i;
		}
		cout<<"\n";
		c3++;
		c5++;
	}
return 0;	
}
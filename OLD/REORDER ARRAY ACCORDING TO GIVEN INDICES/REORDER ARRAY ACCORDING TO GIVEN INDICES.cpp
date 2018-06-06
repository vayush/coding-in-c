#include <iostream>
using namespace std;
// void prints(char a[],int n,int s){
// 	// for(int i=s;i<n;i++){
// 	// 	cout<<a[i];
// 	// }
// 	// for(int i=0;i<s;i++){
// 	// 	cout<<a[i];
// 	// }
	void print(char a[], int n, int ind)
{
    // print from ind-th index to (n+i)th index.
    for (int i = ind; i < n + ind; i++){
    	cout<<(i%n);
        cout << a[(i % n)] << " ";
    }
}

int main(){
	char c[]={'a','b','c','d','e','f'};
	int n = sizeof(c)/sizeof(c[0]);
	print(c,n,3);
	return 0;
}
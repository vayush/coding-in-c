// Non-Repeating Element
// https://practice.geeksforgeeks.org/problems/non-repeating-element/0
#include <iostream>
#include <unordered_map>
using namespace std;
int nonRepeating(int a[],int n){
	unordered_map<int,int> m;
	for (int i = 0; i < n; ++i)
	{
		m[a[i]]++;
	}
	
	for (int i = 0; i < n; i++) 
       if (m[a[i]] == 1)
            return a[i];

    return 0;
}
int main(){
	int a[] = {78,-94,-87,50,-63,-91,-64,41,73,12,68,-83,63,-68,-30,23,70,-94,12,30,-22,-85,-99,16,14,92,57,-63,97,-6,-85,-37,-47,-14,-25,-83,-15,-35,44,88,77,89,4,-55,-33,77,40,27,95,-96,35,68,-98,18,53,2,87,-66,-45,-41,-32,-98,-82,-10,-68,98,-87,-7,-20,29,-33,-4,-71,9,-41,-97,-19,-47,-22,-80,65,42,94,35};
	int n = sizeof(a)/sizeof(a[0]);
	cout<<nonRepeating(a,n);
	return 0;
	// int t;
	// cin>>t;
	// while(t--){
	// 	int n;
	// 	cin>>n;
	// 	int a[n];
	// 	for (int i = 0; i < n; i++)
	// 	{
	// 		cin>>a[i];
	// 	}
	// 	cout<<nonRepeating(a,n)<<endl;
	// }
	// return 0;
}
// // https://practice.geeksforgeeks.org/problems/the-tiny-miny/0
// The Tiny Miny

#include <iostream>
#include <vector>
#include <math.h>
#include <set>
using namespace std;
void breakMe(vector<int> v){
	multiset<int>s;
	for (int i = 0; i < v.size(); i++)
	{
		int n = v[i];
		while(n!=0){
			int a = n%10;
			if(a>0){
				s.insert(a);
			}
			
			n = n/10;
		}
	}
	for (auto x:s){
		cout<<x;
	}
	cout<<endl;
}
void tinyMiny(int a,int n){

	vector <int>v;
	set <int> s;
	for(int i =1;i<=n;i++){
		long long int x = pow(a,i);
		v.push_back(x);
	}
	
	breakMe(v);
}
int main(){
	tinyMiny(4,5);
	// int t;
	// cin>>t;
	// while(t--){
	// 	int a;
	// 	cin>>a;
	// 	int n;
	// 	cin>>n;
	// 	tinyMiny(a,n);
	// }
	return 0;
}
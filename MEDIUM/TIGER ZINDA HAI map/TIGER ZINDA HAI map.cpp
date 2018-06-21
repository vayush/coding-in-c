// https://practice.geeksforgeeks.org/problems/tiger-zinda-hai/0
// Tiger Zinda Hai


#include <iostream>
#include <map>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		map<string,int> m;
		int n;
		cin>>n;
		string s;
		for (int i = 0; i < n; i++)
		{
			
			cin>>s;
			if(s!="END"){
				if(m.find(s)==m.end()){
					m[s]++;
				}
				else{
					m.erase(s);
				}
			}
			else{
				m.clear();
			}
		}
		cout<<m.size()<<endl;
	}
	return 0;
}
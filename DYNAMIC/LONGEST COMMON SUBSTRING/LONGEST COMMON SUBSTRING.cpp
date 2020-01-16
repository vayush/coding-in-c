#include<bits/stdc++.h>
using namespace std;


void remove(std::vector<string> &v)
{
	auto end = v.end();
	for (auto it = v.begin(); it != end; ++it) {
		end = remove(it + 1, end, *it);
	}

	v.erase(end, v.end());
}

void commomSubstring(string &s1,string &s2){
	int m= s1.length();
	int n = s2.length();
	vector<string>v;
	int dp[m][n];

	for (int i = 0; i <m; i++)
	{
		for(int j=0;j<n;j++){
			dp[i][j]=0;
		}
	}

	

	int max=INT_MIN;

	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(s1[i]==s2[j]){
				if(i==0 || j==0)
					dp[i][j]=1;
				else
					dp[i][j]=1+dp[i-1][j-1];


				if(dp[i][j]>max){
					max = dp[i][j];
					v.push_back(s1.substr(i-max+1,i+1));
				}
				else if(dp[i][j]==max){
					v.push_back(s1.substr(i-max+1,i+1));
				}
			}
		}
	}

	remove(v);
	for(auto x:v)
		cout<<x<<" ";
}



int main(){
	string str1 = "ayush";
	string str2 = "ayush";
	commomSubstring(str1,str2);

	return 0;
}
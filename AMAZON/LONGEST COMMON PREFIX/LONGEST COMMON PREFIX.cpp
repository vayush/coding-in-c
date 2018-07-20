#include <bits/stdc++.h>
using namespace std;
string helper(string a,string b)
{
    string res="";
    int n=min(a.length(),b.length());
    for(int i=0;i<n;i++)
    {
        if(a[i]==b[i])
        res+=a[i];
        else break;
    }
    return res;
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector <string> v(n);
        for(int i=0;i<n;i++)
        cin>>v[i];
        string ans=v[0];
        for(int i=1;i<n;i++)
        {
            ans=helper(v[i],ans);
        }
        if(ans.length()==0)
        cout<<-1<<endl;
        else
        cout<<ans<<endl;
    }
}
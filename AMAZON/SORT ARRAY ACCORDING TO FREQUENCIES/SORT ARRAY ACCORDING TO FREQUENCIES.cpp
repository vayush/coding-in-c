#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,int> p1,
             pair<int, int> p2)
{
    // If frequencies are same, compare
    // values
    if (p1.second == p2.second)
        return p1.first < p2.first;

    return p1.second > p2.second;
}

void sortByFreq(int a[],int n){
	
	map<int,int> m;
	for (int i = 0; i < n; ++i)
	{
		m[a[i]]++;
	}
	pair<int,int> p [m.size()];

	int i=0;
	for(auto it = m.begin();it!=m.end();it++){
		p[i] = make_pair(it->first,it->second);
		i++;
	}

	sort(p,p+m.size(),compare);

	for (int i = 0; i < m.size(); i++)
    {
        int freq = p[i].second;
        while (freq--)
            cout << p[i].first << " ";
    }
}

int main(){
	int a[] = { 2, 5, 2, 6, -1, 9999999, 5, 8, 8, 8 };
    int n = sizeof(a) / sizeof(a[0]);
 
    sortByFreq(a, n);

	return 0;
}
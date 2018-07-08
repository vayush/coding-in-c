#include<bits/stdc++.h>
using namespace std;

int leftright(int n, int array[])
{
    int max = array[0];
    int element = -1;
    for(int i = 1; i < n; i++)
    {
        if (array[i] >= max) 
        {
            max = array[i];
            if (element == -1 && i != n - 1) 
            {
                element = max;
            }
        } 
        else if (array[i] < element) 
        {
            element = -1;
        }
    }
    return element;
}

int main(){
	int a[] = {4,3,2,7,8,9};
	int n = sizeof(a)/sizeof(a[0]);
	cout<<leftright(n,a)<<std::endl;
	// int t;
	// cin>>t;
	// while(t--){
	// 	int n;
	// 	cin>>n;
	// 	int a[n];
	// 	for (int i = 0; i < n; ++i)
	// 	{
	// 		cin>>a[i];
	// 	}
	// 	cout<<leftright(n,a)<<std::endl;
	// }
	return 0;
}
#include<iostream>
using namespace std;
int main()
 {
    //code
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,sum=0;
        cin>>n>>k;
        int a[k],i,j,count[n];
        for(int i=0;i<k;++i)
        {
            cin>>a[i];
        }
            for(int i=0;i<=n;++i)
        {
            count[i]=0;
        }
        
        
        for(i=0;i<k;++i)
        {
            int x=a[i];
            for(j=0;j<=n;++j)
            {
                if((j%x)==0)
                {
                    count[j]=1;
                }
            }
        }
        for(int i=0;i<=n;++i)
        {
            if(count[i]==0)
            {
                sum++;
            }
        }
        cout<<sum<<endl;
    }
    
    return 0;
}
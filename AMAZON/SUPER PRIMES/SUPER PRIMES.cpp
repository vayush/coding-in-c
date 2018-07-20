#include<bits/stdc++.h>
using namespace std;

void prime(int n){
    int primes[n+1];
    for(int i=0;i<=n;i++){
        primes[i] = 1;
    }
    map <int,int> m;
    primes[0] = 0;
    primes[1] = 0;

    for(int i=2;i<=sqrt(n);i++){
        if(primes[i]==1){
            for(int j=2; i*j<=n;j++)
                primes[j*i] = 0;
        }
    }
    int count=1;
    for(int i=0;i<=n;i++){
        if(primes[i]==1)
            m[i] = count++;
    }
    int i=1;
    for(auto it=m.begin();it!=m.end();it++){

        if(m.find(i)!=m.end()){

            cout<<it->first<<" ";
        }

        i++;
    }
    
}

int main(){
    
    prime(241);
    return 0;
}
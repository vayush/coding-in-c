// https://practice.geeksforgeeks.org/problems/ishaan-and-sticks/0
#include <iostream>
#include <stack>
// #include<bits/stdc++.h>
using namespace std;

void maxSquare(int a[],int n){
    sort(a,a+n);
    // for (int i = 0; i < n; i++)
    // {
    // 	cout<<a[i]<<" ";
    // }
    stack<int>s;
    s.push(a[0]);
    int count=0,maxarea=0;
    int sqcount=0;
    int j=0;
    for(int i=1;i<n;i++){
        // cout<<a[i]<<" "<<s.top()<<endl;
        if(a[i]==s.top()){
            s.push(a[i]);
            count++;
        }
        
        else if(a[i]!=s.top()){
           while(!s.empty()){
           	s.pop();
           }
           count = 0;
            s.push(a[i]);
        }
        if(count == 3){
            sqcount++;
            count=0;
            if(maxarea<s.top()){
            	maxarea = s.top();
            }
            while(!s.empty()){
            	s.pop();
            }
            s.push(a[i]);
        }
    }

    if(sqcount==0){
    	cout<<"-1"<<endl;
    }

    else{
    	cout<<(maxarea*maxarea)<<" "<<sqcount<<endl;
    }

    
}


int main(){
    
    // int a[] = {757,84,396,473,998,393,893,395,779,967,950,350,164,141,621,604,260,453,171,131,987,979,618,944,884,322,509,848,463,564,420,997,994,401,455,814,612,138,963,96,330,46,243,364,549,724,641,145,932,794,261,692,310,941,149,924,226,738,334,547,579,157,737,498,54,760,562,108,78,566,405,319,90,241,866,726,581,161,187,290,686,181,786,521,561,767,305,687,558,571,380,397,864,48,810,96,49,394,980,988,620,127,156,680,403,105,50,163,34,851,643,7,899,216,140,869,956,1000,109,121,942,124,161,55,935,580,492,182,619,39,998,549,446,227,96,803,517,462,52,99,365,620,802,416,780,465,736,909,927,841,690,656,507,206,674,176,89,523,746,765,236,631,927,47,676,91,440,697,208,567,920,119,247,874,96,878,831,537,785,747,354,74,655,38,678,897,482,40,372};
    // int n = sizeof(a)/sizeof(a[0]);
    // maxSquare(a,n);


    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        maxSquare(a,n);
    }

    return 0;

}                                            
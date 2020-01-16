#include<bits/stdc++.h>
using namespace std;
int game(int a[],int i,int j){
	
	if(i==j)
		return a[i];

	if (j == i + 1) 
        return max(a[i], a[j]); 
  
    
    int start = a[i] + min(game(a,i+2,j),game(a,i+1,j-1));

    int end = a[j] + min(game(a,i+1,j-1),game(a,i,j-2));


    cout<<start<<" "<<end<<" "<<endl;

    return max(start,end);



}
int main(){
	int a[] ={4,15,7,3,8,9};
	int n = sizeof(a)/sizeof(a[0]);
	cout<<game(a,0,n-1);

	return 0;
}
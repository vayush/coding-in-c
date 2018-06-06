// NAIVE SOLUTION




#include <iostream>
using namespace std;
int longestComSum(bool arr1[],bool arr2[],int n){
	int sum1=0,sum2=0,maxlen=0;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			sum1=sum1+arr1[j];
			sum2=sum2+arr2[j];
			if(sum1==sum2){
				int len=j-i+1;
				cout<<len<<"\n";
				if(len>maxlen){
					maxlen=len;
				}
			}
		}
	}
	return maxlen;
}
int main(){
	bool arr1[]={0,1,0,0,1,0,1};
	bool arr2[]={0,0,1,1,0,1,0};
	cout<<longestComSum(arr1,arr2,7);
	return 0;
}
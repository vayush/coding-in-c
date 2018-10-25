#include<iostream>
using namespace std;

void commonEle(int ar1[],int ar2[],int ar3[],int n1,int n2,int n3){

int i=0,j=0,k=0;
int count=0;
while(i<n1 && j<n2 && k<n3){
  if(ar1[i] == ar2[j] && ar2[j] == ar3[k]){
    cout<<ar1[i]<<" ";
    i++;j++;k++;
    count=1;
  }

  else if(ar1[i]<ar2[j])
    i++;

  else if(ar2[j]<ar3[k])
    j++;

  else 
    k++;
} 

if(count==0)
  cout<<-1<<endl;
else
  cout<<endl;


}

int main(){

  int a[] = {46,88,90,206 ,362 ,379 ,404 ,436 ,444 ,448 ,451 ,488 ,523 ,529 ,552 ,558 ,563 ,580 ,606 ,611,670,701,705,788,803,817,822,830,838,854,883,893,900,912,961}
  int n1 = sizeof(a)/sizeof(a[0]);
  int b[] = {37 ,93 ,108 ,124 ,167 ,354 ,355 ,387 ,418 ,427 ,438 ,481 ,507 ,590 ,665 ,795 ,821 ,922 ,949 ,995};
  int n2 = sizeof(b)/sizeof(b[0]);
  int c[] = {18 ,70 ,157 ,166 ,172 ,296 ,313 ,318 ,423 ,485 ,609 ,710 ,746 ,932 ,934,996};
  int n3 = sizeof(c)/sizeof(c[0]);


  commonEle(a,b,c,n1,n2,n3);

  // int t;
  // cin>>t;
  // while(t--){
  //   int n1,n2,n3;
  //   cin>>n1>>n2>>n3;
  //   int a[n1],b[n2],c[n3];

  //   for (int i = 0; i < n1; i++)
  //   {
  //     cin>>a[n1];
  //   }
  //   for (int i = 0; i < n2; i++)
  //   {
  //     cin>>b[n2];
  //   }
  //   for (int i = 0; i < n3; i++)
  //   {
  //     cin>>c[n3];
  //   }
  //   commonEle(a,b,c,n1,n2,n3);

  // }
  return 0;
}
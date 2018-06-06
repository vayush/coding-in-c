// https://www.geeksforgeeks.org/stock-buy-sell/

#include<iostream>
using namespace std;

class Interval
{
  public: 
    int buy;
    int sell;
  
};

void stockbuysell(int a[],int n){

  if(n==1)
    return;

  int count=0; 
  int i=0;
  Interval sol[n/2+1];

  while(i<n-1){

    // local minima
    while( (i<n-1) && (a[i+1]<=a[i]) ){

      i++;
    }

    if(i==n-1)
      break;

    sol[count].buy=i++;

    while ((i < n) && (a[i] >= a[i-1]))
            i++;

    sol[count].sell = i-1;

    count++;;
  }
  if (count == 0)
        cout<<"NO PROFIT";
    else
    {
       for (int i = 0; i < count; i++)
          cout<<"BUY ON DAY "<<sol[i].buy<<" "<<"SELL ON DAY "<<sol[i].sell<<endl;
    }
}
int main(){
  int price[] = {100, 180, 260, 310, 535, 695};
    int n = sizeof(price)/sizeof(price[0]);
    stockbuysell(price,n);
    return 0;
}
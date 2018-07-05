#include <iostream>
using namespace std;
int stairsearch(int a[4][4],int n, int e){
	int i = 0 , j = n-1 ;
	while(i<n && j>=0){
		if(a[i][j] == e){
			cout<<"FOUND   "<<i<<" "<<j;
			return 1;
		}
		else if(a[i][j]>e)
			j--;
		else
			i++;
	}
	cout<<"NOT FOUND :";
	return 0;
}
int main()
{
  int mat[4][4] = { {10, 20, 30, 40},
                    {15, 25, 35, 45},
                    {27, 29, 37, 48},
                    {32, 33, 39, 50},
                  };
  stairsearch(mat, 4, 29);
  return 0;
}


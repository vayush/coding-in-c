// https://practice.geeksforgeeks.org/problems/smallest-subarray-with-sum-greater-than-x/0
#include <iostream>
using namespace std;

int smallestArray(int arr[], int n, int x)
{
	
	int sum = 0, minLength = n;

	
	int start = 0, end = 0;
	while (end < n)
	{
		
		while (sum <= x && end < n)
		{
			
			if (sum <= 0 && x > 0)
			{
				start = end;
				sum = 0;
			}

			sum += arr[end++];
		}
    
		while (sum > x && start < n)
		{
			
			if (end - start < minLength)
				minLength = end - start;

			sum -= arr[start];
			start++;
			
			while(start<n && arr[start]<0)
			{
			    if (end - start < minLength)
				minLength = end - start;

	
			sum -= arr[start];
			start++;
			}
		}
	}
	return minLength;
}

int main()
{
	int a[] = {5,4,- 8, 16};
	int x = 10;
	int n1 = sizeof(a)/sizeof(a[0]);
	cout<<smallestArray(a, n1, x);

	return 0;
}
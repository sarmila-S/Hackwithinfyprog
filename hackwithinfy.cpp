//Good Subarrays--> a subarray should said to be good when it is in sorted order and first index should not be bad index;
//gn:
//N 3
//arr--> 1 2 3
//Index--->1 0 1  (1-->bad index,0-->good index)
//o/p:
//4-->(1,(1,2),(1,2,3),3)
#include<bits/stdc++.h>
using namespace std;
int sortedSub(int arr[],int n)
{
	int res=0;
	for(int i=1;i<n;i++)
	{
		if(arr[i]<arr[i-1])
		return 0;
	}
	return 1;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
	cin>>n;
	int arr[n],bad[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	for(int i=0;i<n;i++)
	cin>>bad[i];
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(bad[i]!=1)
		{
			for(int j=i;j<n;j++)
		{
			int temp[n];
			int l=0;
			for(int k=i;k<=j;k++)
			{
				temp[l++]=arr[k];
			}
		int flag=sortedSub(temp,l);
		if(flag==1)
		count++;
		}
		}
		
	}
	cout<<count;
	}
	
}

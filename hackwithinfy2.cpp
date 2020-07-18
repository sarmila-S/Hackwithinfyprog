//Distribution of groups-->count staisfied group(each member in a group receive atleast 1 chocolate)max grp to be satisfied.
#include<stdio.h>
using namespace std;
int main()
{
	int n;//number of groups
	int arr[n];//members in the group
	for(int i=0;i<n;i++)
	cin>>arr[i];
	int val;//total amount of chocolates
	cin>>val;
	int count=0;
	sort(arr,arr+n);// sort the group by minmum mebers of group to maximum number of groups which maximize the result
	for(int i=0;i<n;i++)
	{
		if(val>0)
		{
			val-=arr[i];
			count++;
		}
		else
		break;
	}
	cout<<count;
}

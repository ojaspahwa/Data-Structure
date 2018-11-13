#include<iostream>
using namespace std;
int main()
{
	int a[100],i,j,k,temp;
	int n;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		j=i;
		while(j>0)
		{
			if(a[j-1]>a[j])
			{
				temp=a[j];
				a[j]=a[j-1];
				a[j-1]=temp;
			}
			j--;
			cout<<a[j]<<"  ";
		}
		cout<<endl;
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<"  ";
	}
}

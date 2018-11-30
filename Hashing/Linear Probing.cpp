#include<iostream>

using namespace std;

int n;
void insert(int *arr, int ele)
{
    int pos = ele%n;
    if(arr[pos] == 0)
    {
        arr[pos] = ele;
    }
    else
    {   int count = 1;
        while(count !=n)
        {
            pos++;
            count++;
            if(arr[pos]==0)
            {
                arr[pos] = ele;
                break;
            }
            if(pos>n-1)
            {
                pos = 0;
            }
        }
    }
}
int main()
{


    cin>>n;
    cout<<"Enter number of elements:\n";
    int ele;
    int arr[n] = {0};
    int n1;
    cin>>n1;
    for(int i=0;i<n1;i++)
    {

        cin>>ele;
        if(n1>n)
        {
            cout<<"can't insert "<<endl;
            break;
        }
        insert(arr,ele);
    }
    for(int i=0;i<n;i++)
    {
        cout<<i<<" "<<arr[i]<<endl;
    }

 return 0;
}

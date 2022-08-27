// Name - Pranav Sharma
// Roll No. - 2010990539
// Set No. - 04
// Q2

#include <bits/stdc++.h>
using namespace std;

int areConsecutive(int arr[], int n)
{

	for(int i=1;i<n;i++)
	{
		if(arr[i]!=arr[i-1]+1)
		{
			return arr[i];
		}
	}
	return -1;
}


int main()
{

    int size;
    cin>>size;
    int arr[size];
    
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    // int arr[]={-1,5,4,2,0,3,1};
    // int arr[]={4,2,4,3,1};

    int n = sizeof(arr)/sizeof(arr[0]);
	sort(arr,arr+n);
	int res=areConsecutive(arr, n);
	if(res==-1)
		cout<<"The array contains consecutive integers from "<<arr[0]<<" to "<<arr[n-1]<<endl;
	else
		cout<<"The array does not contain consecutive integers as element "<<res<<" is repeated"<<endl;

    return 0;

}
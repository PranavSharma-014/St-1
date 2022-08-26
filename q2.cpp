// Name - Pranav Sharma
// Roll No. - 2010990539
// Set No. - 04
// Q2

#include <bits/stdc++.h>
using namespace std;

// Function to Check if array elements are consecutive

bool areConsecutive(int arr[], int n)
{
    //Sort the array
	sort(arr,arr+n);

    // checking the adjacent elements
	for(int i=1;i<n;i++)
	{
		if(arr[i]!=arr[i-1]+1)
		{
			return false;
		}
	}
	return true;
}


int main()
{

    int arr[]={-1,5,4,2,0,3,1};
    // int arr[]={4,2,4,3,1};

    int n = sizeof(arr)/sizeof(arr[0]);
	if(areConsecutive(arr, n) == true)
		cout<<"The array contains consecutive integers from "<<arr[0]<<" to "<<arr[n-1]<<endl;
	else
		cout<<"The array does not contain consecutive integers as element "<<arr[n-1]<<" is repeated"<<endl;

    return 0;

}
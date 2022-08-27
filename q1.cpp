// Name - Pranav Sharma
// Roll No. - 2010990539
// Set No. - 04
// Q1

#include <iostream>
#include <unordered_set>
using namespace std;
 
int findMinIndex(int arr[], int n)
{
    int minIndex = n;
 
    unordered_set<int> set;
 
    for (int i = n - 1; i >= 0; i--)
    {

        if (set.find(arr[i]) != set.end()) {
            minIndex = i;
        }
        
        else {
            set.insert(arr[i]);
        }
    }
 
    return minIndex;
}
 
int main()
{
    
    int n;
    cin>>n;

    int *arr=new int[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];


    // int arr[] = { 1, 2, 3, 4, 5, 6 };

 
    int minIndex = findMinIndex(arr, n);
 
    if (minIndex != n) {
        cout << "The minimum index of the repeating element is " << minIndex;
    }
    else {
        cout << "Invalid Input";
    }
 
    return 0;
}
/* 
 Author: Sarthak Roy
*/
#include<iostream>

using namespace std;

int BinarySearch(int arr[], int n, int key)
{
    int s=0;
    int e=n;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            e=mid-1;
        }
        else
        {
            e=mid+1;
        }
    }
    return -1;    
}

int main()
{
    int n;
    cout<<"\nEnter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"\nEnter the elements of array:- "<<endl;
    for(int i=0;i<n;i++){
        cout<<"Element "<<i+1<<": ";
        cin>>arr[i];
    }

    int key;
    cout<<"\nEnter the key: ";
    cin>>key;

    cout<<"\nThe key is at index: "<<BinarySearch(arr, n, key)<<endl;

    return 0;
}

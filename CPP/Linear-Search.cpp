/* 
 Author: Sarthak Roy
*/
#include<iostream>

using namespace std;

int LinearSearch(int arr[], int n, int key)
{
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
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
    cout<<"\nEnter the elements of array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i+1<<": ";
        cin>>arr[i];
    }

    int key;
    cout<<"\nEnter the key to be searched: ";
    cin>>key;

    cout<<"\nThe key is present at index: "<<LinearSearch(arr, n, key)<<endl;

    return 0;
}

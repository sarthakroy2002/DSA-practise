#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void SelectionSort(int arr[], int n){
    int index;
    for(int i=0;i<n-1;i++){
        index=i;
        for(int j=i+1;j<n;j++){
            if(arr[index]<arr[j]){
                index=j;
            }
            if(index=!i){
                swap(&arr[index],&arr[i]);
            }
        }
    }
}

void print(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" \n";
    }
}

void input(int arr[]){
    for(int i=0;i<5;i++){
        cout<<"Enter the value for the array: ";
        cin>>arr[i];
    }
}

int main(){
    int arr[5];
    //int n = sizeof(arr)/sizeof(arr[0]);
    input(arr);
    SelectionSort(arr,5);
    cout<<"New Sorted Array";
    print(arr,5);
    return 0;
}

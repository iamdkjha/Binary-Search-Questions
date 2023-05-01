// Given rotated sorted array = {4,5,1,2,3}
// pivot element is the smallest element in the array
// We are finding the pivot with the help of binary search

#include<iostream>
using namespace std;


int getpivot(int arr[], int size){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;

    while(start<end){
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return start;
}

int main()
{
    int arr[5]={4,5,1,2,3};
    cout<<"Location of pivot element: "<<getpivot(arr,5);
    return 0;
}

#include<iostream>
using namespace std;

int peak_in_mountain(int arr[],int size){
    int start = 0;
    int end = size-1;
    int mid = start+(end-start)/2;

    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start=mid+1;
        }
        else{
            end=mid;
        }
        mid = start+(end-start)/2;
    }
    return start;
}

int main()
{
    int arr[5]={3,4,5,2,1};
    cout<<peak_in_mountain(arr,5);
    return 0;
}

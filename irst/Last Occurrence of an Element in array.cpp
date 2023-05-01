#include<iostream>
using namespace std;

int first_occurence(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = start+(end-start)/2;
    int ans;
    while(start<=end){
        if(arr[mid]==key){
            ans = mid;
            end = mid-1;
        }
        if(arr[mid]>key){
            end = mid-1;
        }
        if(arr[mid]<key){
            start = mid+1;
        }
        mid = start+(end-start)/2;
    }
    return ans;
}

int last_occurence(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = start+(end-start)/2;
    int ans;
    while(start<=end){
        if(arr[mid]==key){
            ans = mid;
            start = mid+1;
        }
        if(arr[mid]>key){
            end = mid-1;
        }
        if(arr[mid]<key){
            start = mid+1;
        }
        mid = start+(end-start)/2;
    }
    return ans;
}

int main()
{
    int size, key, arr[8]={1,2,2,3,3,3,3,5};
    cout<<"Enter the key: ";
    cin>>key;
    int res1 = first_occurence(arr,8,key);
    int res2 = last_occurence(arr,8,key);
    cout<<res1;
    cout<<" ";
    cout<<res2;
    
    // Below line is used to find the number of occurences of input key
    cout<<endl<<"Total Number of Occurence: "<<(res2-res1)+1;
    
    return 0;
}

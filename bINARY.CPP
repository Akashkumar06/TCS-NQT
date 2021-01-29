#include<iostream>
using namespace std;

    int binarysearch(int arr[], int n, int k){
        int beg=0;
        int end=n-1;

        while(beg<=end){
            int mid=(beg+end)/2;
            if(arr[mid]==k){

                return mid;
            }
            if(arr[mid]<k){
                  beg=mid+1;

            }
            else{
             end=mid-1;

            }
    }
    return -1;
    }
    int main(){
    int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++){
        cin>>a[i];
     }
     int k;
     cin>>k;
    cout<<binarysearch(a,n,k);

    }

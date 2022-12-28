// ** simple sorting technique using for loop
// ** this sorting technique ==> bubble sort 
// ** each swap removes one inversion,i.e.,if the whole array is in the descending array then complexity(worst case) ==> O(n^2)
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter the length of the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the array"<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"now we will sort the array"<<endl;
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]); // ** used swap function.
            }
        }
    }
    cout<<"the sorted array is"<<endl;
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}


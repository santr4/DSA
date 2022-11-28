// ** how to declare an array and traverse through it.
#include<bits/stdc++.h>
using namespace std;

void traverse(int arr1[],int x){
    for(int j = 0;j<x;j++){  // ** traversing through the array;
        cout<<arr1[j]<<" ";
    }
}

int main(){
    int n(0);
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements inside the array"<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    traverse(arr,n);
    return 0;
}

// ** for inserting an element in a particular position of the array
#include<iostream>
#include<array>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of the array"<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int k,item;
    cout<<"enter the position in which you want to insert the element"<<endl;
    cin>>k;
    cout<<"enter the element that you want to insert"<<endl;
    cin>>item;
    for(int i = n-1;i>=k;i--){
        arr[i+1] = arr[i];
    }
    arr[k] = item;
    n++;
    cout<<"the new array after inserting the item is"<<endl;
    for(int j = 0;j<n;j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}

// ** deletion of an element in an array at a particular position.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of the array"<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"enter the position in which the element has to be deleted"<<endl;
    cin>>k;
    for(int i = k;i<=n;i++){
        arr[i] = arr[i+1];
    }
    n--;
    cout<<"the new array after deletion is "<<endl;
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

// ** searching 

// ** 1) --> linear search
#include<iostream>
using namespace std;

int main(){
    int n,count(0);
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int item;
    cout<<"enter the item that you want to search"<<endl;
    cin>>item;
    for(int i = 0;i<n;i++){
        if(arr[i] == item){
            count++;
        }
    }
    if(count){
        cout<<"element present in the array"<<endl;
    }
    else{
        cout<<"element not present in the array"<<endl;
    }
    return 0;
}

// ** 2) binary search --> it is available only for sorted array; here we will input an unsorted array and then sort it using bubble sort and then apply binary search for the item.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the array"<<endl;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"we apply the bubble sort"<<endl;
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<"the array has been sorted and now we can apply binary search."<<endl;
    cout<<"enter the item that the user want to search"<<endl;
    int item;
    cin>>item;
    int low = 0,high = n-1,count(0);
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] == item){
            count++;
            break;
        }
        else if(arr[mid] < item){
            low = mid + 1;
        }
        else if(arr[mid] > item){
            high = mid - 1;
        }
    }
    if(count == 1){
        cout<<"item found"<<endl;
    }
    else{
        cout<<"item not found"<<endl;
    }
    return 0;
}

// ** 3) stl sorting
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<"the sorted array"<<endl;
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}

// ** 4) quicksort
#include<iostream>
using namespace std;

void swap(int arr[],int i,int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[],int l,int r){
    int pivot = arr[r];
    int i = l-1;
    for(int j = 1;j<r;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,r);
    return i+1;
}

void quicksort(int arr[],int l,int r){
    if(l<r){
        int pi = partition(arr,l,r);
        quicksort(arr,l,pi-1);
        quicksort(arr,pi+1,r);
    }
}

int main(){
    int arr[6] = {-12,2,30,13,1,5};
    quicksort(arr,0,5);
    cout<<"after applying the quicksort algorithm"<<endl;
    for(int k = 0;k<6;k++){
        cout<<arr[k]<<" ";
    }
    return 0;
}
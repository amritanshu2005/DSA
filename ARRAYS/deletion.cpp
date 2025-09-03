#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of elements in array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int pos;
    cout<<"enter the pos at which we want to delete";
    cin>>pos;
    for(int i=pos-1;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n=n-1;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
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
    int ele,pos;
    cout<<"enter the element which we have to insert"<<endl;
    cin>>ele;
    cout<<"enter the pos at which we want to insert";
    cin>>pos;
    for(int i=n-1;i>=pos-1;i--){
        arr[i+1]=arr[i];
    }
    arr[pos-1]=ele;
    n=n+1;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
#include<iostream>
using namespace std;
static void reverse(int arr[],int n){
for(int i=0;i<n/2;i++){
    int temp=arr[i];
    arr[i]=arr[n-1-i];
    arr[n-1-i]=temp;
}
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}
int main(){
    int n;
    cout<<"enter the no of elements in array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse(arr,n);
}
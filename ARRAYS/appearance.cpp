#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter no of elements in array"<<endl;
    cin>>n;
    vector<int>arr(n);
    cout<<"enter elements of array"<<endl;
    for(int i=0;i<n;i++){
    cin>>arr[i];
    }
    int max=-1000000;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    vector<int>ans(max+1);
    for(int i=0;i<n;i++){
        ans[arr[i]]=ans[arr[i]]+1;
    }
    for(int i=0;i<max+1;i++){
        if(ans[i]%2!=0){
            cout<<i<<" ";
        }
    }
}
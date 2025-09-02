#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of elements"<<endl;
    cin>>n;
    vector<int>arr(n);
    cout<<"enter the elements of vector"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=-100000;
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
        if(ans[i]>1){
            cout<<i;
        }
    }
    }


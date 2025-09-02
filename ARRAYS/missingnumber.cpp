// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
   
//     int n;
//    cout<<"enter the elements of array"<<endl;
//    cin>>n;
//     vector<int>arr;
//    for(int i=0;i<n;i++){
//     cin>>arr[i];
//    }
//     //finding the largest element in the 
//     int max=-1000000;
//     int min=10000000;
//     for(int i=0;i<n;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//         else if(arr[i]<min){
//             min=arr[i];
//         }
//     }
// //kyki o to hoga hi aur hmko use access nhi krna hai
// vector<int>ans(max+1);//DAT-DIRECT ADDRESS TABLE
// for(int i=0;i<n;i++){
//     ans[arr[i]]=1;
// }
// //kyoki 0 ki countin to 0 hi hogi
// for(int i=1;i<max+1;i++){
//     if(ans[i]==0){
//     cout<<i;
//     break;
//     }
// }

// }
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of elements in array"<<endl;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min=100000;
    int max=-100000;
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        if(arr[i]>max){
            max=arr[i];
        }
    }
    vector<int>ans(max+1);
    for(int i=0;i<max+1;i++){
        ans[arr[i]]=1;
    }
    for(int i=1;i<max+1;i++){
        if(ans[i]==0){
            cout<<i;
        }
    }
}
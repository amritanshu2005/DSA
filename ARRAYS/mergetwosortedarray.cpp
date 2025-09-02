#include<iostream>
#include<vector>
using namespace std;
/*********/
static void traverse(vector<int>ans){
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
}
/*********/


/***********/
static void merge(vector<int>&A,int m,vector<int>&B,int n){
    int i=0;
    int j=0;
    vector <int>ans;
    while(i<m && j<n){
    if(A[i]>B[j]){
        ans.push_back(B[j]);
        j++;
    }
    else{
        ans.push_back(A[i]);
        i++;
    }
}

while(i<m){
    ans.push_back(A[i]);
    i++;
}
while(j<n){
    ans.push_back(B[j]);
    j++;
}
traverse(ans);
}

/***********/
int main(){
    int m,n;
    cout<<"enter the no of elements in array a";
    cin>>m;
    cout<<"enter the no of elements in array b";
    cin>>n;
    vector<int>A(m);
    vector<int>B(n);
    cout<<"enter the elements of array a => "<<endl;
    for(int i=0;i<m;i++){
        cin>>A[i];
    }
    cout<<"enter the elements of array b => "<<endl;
    for(int i=0;i<n;i++){
        cin>>B[i];
    }
    merge(A,m,B,n);
}
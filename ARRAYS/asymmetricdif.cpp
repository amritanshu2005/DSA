#include<iostream>
#include<vector>
using namespace std;
/**********/
static void traverse(vector<int>ans){
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
/**********/

/*******/
static void asymdif(vector<int>&p,int m,vector<int>&q,int n){
    int i=0;
    int j=0;
    int k=0;
    vector<int>ans;
    while(i<m && j<n){
        if(p[i]<q[j]){
            ans.push_back(p[i]);
            i++;
        }
        else if(p[i]>q[j]){
            j++;
        }
        else{
            i++;
            j++;
        }
    }
    while(i<m){
        ans.push_back(p[i]);
        i++;
    }
    traverse(ans);
}
/*******/


int main(){
    int m,n;
    cout<<"enter the no of elements of first array"<<" ";
    cin>>m;
    cout<<"enter the no of elements of second array"<<" ";
    cin>>n;
    vector<int>a(m);
    vector<int>b(n);
    
    cout<<"enter the elements of first array"<<endl;
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    cout<<"enter the elements of second array"<<endl;
    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    asymdif(a,m,b,n);

}

#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
static bool cmp(int x,int y){
    if(x>y)return true;
    else return false;
}
int main(){
    vector<int>v={5,8,9,1,4,10};
    sort(v.begin(),v.end(),cmp);
    for(int i:v)
    cout<<i<<" ";
}
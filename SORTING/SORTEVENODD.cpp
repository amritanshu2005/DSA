#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
static bool cmp(int x, int y){
    if(x%2==0 && y%2!=0)return true;
    if(x%2!=0 && y%2==0)return false;
    if(x%2==0 && y%2==0)return x<y;
    if(x%2!=0 && y%2!=0)return x>y;
}
int main(){
    vector<int>v={1,6,8,4,3,9,7,10};
    sort(v.begin(),v.end(),cmp);
    for(int i:v)
    cout<<i<<" ";
}
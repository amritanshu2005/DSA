#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
static bool cmp(int x, int y){
    if(abs(x)<abs(y))return true;
    else return false;
}
int main(){
    vector<int>v={-1,6,9,-10,5,-8,-2};
    sort(v.begin(),v.end(),cmp);
    for(int ele:v)
    cout<<ele<<" ";
}
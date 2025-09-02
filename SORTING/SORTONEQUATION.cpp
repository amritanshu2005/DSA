#include<iostream>
#include<vector>
using namespace std;
#include<algorithm>
static bool cmp(int x,int y){
    int A=-1,B=-4,c=1;
    int fx=A*(x*x)+B*x+c;
    int fy=A*(y*y)+B*y+c;
    if(fx<fy)return true;
    else return false;
}
int main(){
    vector<int>v={-3,-2,-1,0,2,4};
    sort(v.begin(),v.end(),cmp);
    for(int i:v)
    cout<<i<<" ";
}
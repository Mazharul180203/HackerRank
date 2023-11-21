
//prefix sum
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int NMAX = 1e7+2;
ll ara[NMAX] ={0};
ll ara1[NMAX] ={0};
int main(){
    int n,m,a,b,k;
    cin>>n>>m;
    while(m--){
        cin>>a>>b>>k;
        ara[a]+=k;
        ara[b+1]-=k;
    }

    ll maxi = -999999999;
    for(int i=1; i<=n; i++){
        ara1[i] = ara[i] + ara1[i-1];
        maxi = max(ara1[i],maxi);
    }

    cout<<maxi<<"\n";

}

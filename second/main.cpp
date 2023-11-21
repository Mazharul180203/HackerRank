#include<bits/stdc++.h>
using namespace std;
int ara[3][3];
int main(){

    string ss,ss1;
    cin>>ss>>ss1;
    for(int i=0; i<ss.length(); i++){
        if(ss[i]!=ss1[i]){
            cout<<"Not Ok"<<"\n";
            return 0;
        }
    }
    cout<<"OK"<<"\n";




}
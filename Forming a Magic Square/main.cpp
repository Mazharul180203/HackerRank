//n/2 [2a + (n – 1) * d]
#include<bits/stdc++.h>
using namespace std;

// sum of every row, col and dig are 15
// this is the grid with rotation of 90 degree and glass reflection**

int arr0[9] =   {4,9,2,3,5,7,8,1,6};
int arr1[9] =   {2,7,6,9,5,1,4,3,8};
int arr2[9] =   {6,1,8,7,5,3,2,9,4};
int arr3[9] =   {2,9,4,7,5,3,6,1,8};
int arr4[9] =   {6,7,2,1,5,9,8,3,4};
int arr5[9] =   {8,1,6,3,5,7,4,9,2};
int arr6[9] =   {8,3,4,1,5,9,6,7,2};
int arr7[9] =   {4,3,8,9,5,1,2,7,6};

int ans[8] = {0};
int main()
{
    for(int i=0; i<9; i++){
        int k;
        cin>>k;
        ans[0] += abs(k - arr0[i]);
        ans[1] += abs(k - arr1[i]);
        ans[2] += abs(k - arr2[i]);
        ans[3] += abs(k - arr3[i]);
        ans[4] += abs(k - arr4[i]);
        ans[5] += abs(k - arr5[i]);
        ans[6] += abs(k - arr6[i]);
        ans[7] += abs(k - arr7[i]);
    }

    int mini = ans[0];

    for(int i=1; i<=7; i++){
        if(ans[i] < mini){
            mini = ans[i];
        }
    }
    cout<<mini<<"\n";
}
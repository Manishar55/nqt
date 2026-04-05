//subarray with sum k

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
  
  int n;
  cin>>n;

  int arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }

  int k;
  cin>>k;
  map<int, int>mp;

  int sum=0;
  for(int i=0; i<n; i++){
    sum+=arr[i];

    if(sum==k){
      cout<<0<<" to "<<i <<endl;
    }

    int rem=sum-k;
    if(mp.find(rem)!=mp.end()){
      cout<<mp[rem]+1<<" to "<<i<<endl;
      break;
    }
    mp[sum]=i;
  }
   
}
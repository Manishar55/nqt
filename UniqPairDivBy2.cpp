// #include <iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//   int n;
//   cin>>n;
//   int arr[n];

//   for(int i=0; i<n; i++){
//     cin>>arr[i];
//   }
//   set<pair<int, int>>st;

//   for(int i=0; i<n; i++){
//      for(int j=i+1; j<n; j++){
//       if((arr[i]+arr[j])%2==0){
//         st.insert({arr[i], arr[j]});
//         // cout<<arr[i]<<" "<<arr[j]<<endl;
//       }
//     }
//   }
//   for(auto s: st){
//     cout<<s.first<<" "<<s.second<<endl;
//   }
//   cout<<st.size()<<endl;
// }

//OR

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin>>n;
  int arr[n];

  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  map<pair<int, int>, bool>mp;

  for(int i=0; i<n; i++){
     for(int j=i+1; j<n; j++){

      if((arr[i]+arr[j])%2==0){

        if(mp[{arr[i], arr[j]}]!=true){

          mp[make_pair(arr[i], arr[j])]=true;
          // cout<<arr[i]<<" "<<arr[j]<<endl;
        }
      }
    }
  }
  for(auto m: mp){
    cout<<m.first.first<<" "<<m.first.second<<endl;
  }
  cout<<mp.size()<<endl;
}
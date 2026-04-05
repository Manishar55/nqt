// #include <iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
  
//   string s;
//   int totalDays, ans;

//   cin>>s;
//   cin>>totalDays;

//   unordered_map<string, int>mp;

//   mp["mon"]=6;mp["tue"]=5;mp["wed"]=4;mp["thu"]=3;mp["fri"]=2;mp["sat"]=1;mp["sun"]=0;

//   if(totalDays-mp[s.substr(0, 3)]>=1)
//   ans=1+(totalDays-(1+mp[s.substr(0, 3)]))/7;

//   cout<<ans;
// }


#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
  
  string s;
  int totalDays;

  cin>>s;
  cin>>totalDays;
  int day;
  if(s=="sun")day=0;
  else if(s=="mon")day=1;
  else if(s=="tue")day=2;
  else if(s=="wed")day=3;
  else if(s=="thu")day=4;
  else if(s=="fri")day=5;
  else if(s=="sat")day=6;

  int firstSun=(7-day)%7;
  int ans=0;

  if(firstSun<totalDays){
    ans=(totalDays-firstSun+6)/7;
  }

  cout<<ans;
}

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
  
  string curr_day;
  int totalDays;

  cin>>curr_day;
  cin>>totalDays;

  vector<string> days = {"mon","tue","wed","thu","fri","sat","sun"};
  int day_ind=-1;

  for(int i=0; i<7; i++){
    if(curr_day==days[i]){
        day_ind=i;
        break;
    }
  }
 if(day_ind==-1){
    cout<<"Invalid day"<<endl;
 }

 int newDay=(day_ind + totalDays)%7;
  cout<<days[newDay];
}
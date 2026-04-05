#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr={1,2,3,4,5};

    string s="[";

    for(int i=0; i<arr.size(); i++){
        s+=to_string(arr[i]);

        if(i!=arr.size()-1){
            s+=",";
            s+=" ";
        }
    }
    s+="]";

    cout<<s;
}

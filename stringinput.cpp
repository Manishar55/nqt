
#include<bits/stdc++.h>
using namespace std;

int main(){
    string line;
    getline(cin, line);
    stringstream ss(line);

    string str;
    vector<string>words;

    while(ss>>str){
        words.push_back(str);
    }

    for(auto &w: words){
        cout<<w<<" ";
    }
}
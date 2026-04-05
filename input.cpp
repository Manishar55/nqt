
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
  
//   string line;
//   getline(cin, line);
//   stringstream ss(line);

//   vector<int>arr;

//   int num;
//   while(ss>>num){
//     arr.push_back(num);
//   }

//   for(int x: arr){
//     cout<<x<<" ";
//   }
// }



#include <bits/stdc++.h>
using namespace std;

int main() {
  
  string line;
  getline(cin, line);

  line.erase(remove(line.begin(), line.end(), '['), line.end());
  line.erase(remove(line.begin(), line.end(), ']'), line.end());

  stringstream ss(line);
  vector<int>arr;

//   string num;
//   while(getline(ss, num, ',')){
//     arr.push_back(stoi(num));
//   }

    int num;
    char c;
    while(ss>>num){
        arr.push_back(num);
        ss>>c;
    }

  for(int x: arr){
    cout<<x<<" ";
  }
}
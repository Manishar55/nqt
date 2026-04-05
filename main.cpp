// //Minimum platform

// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int main() {

//     int n;
//     cin >> n;
//     cin.ignore();

//     string line;
//     getline(cin, line);

//     stringstream ss(line);

//     vector<int> arr(n), dep(n);

//     // for(int i=0; i<n; i++){
//     //     ss>>arr[i];
//     // }
//     // for(int i=0; i<n; i++){
//     //     ss>>dep[i];
//     // }

//     for(int i = 0; i < n; i++){
//         ss >> arr[i] >> dep[i];
//     }

//     sort(arr.begin(), arr.end());
//     sort(dep.begin(), dep.end());

//     int i = 0, j = 0;
//     int platforms = 0, maxPlatforms = 0;

//     while(i < n && j < n){
//         if(arr[i] <= dep[j]){
//             platforms++;
//             maxPlatforms = max(maxPlatforms, platforms);
//             i++;
//         }
//         else{
//             platforms--;
//             j++;
//         }
//     }

//     cout << maxPlatforms;
// }



#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

    string line;
    getline(cin, line);

    stringstream ss(line);

    vector<int> arr, dep;
    int a, d;

    // read pair-wise
    while(ss >> a >> d){
        arr.push_back(a);
        dep.push_back(d);
    }

    int n = arr.size();

    sort(arr.begin(), arr.end());
    sort(dep.begin(), dep.end());

    int i = 0, j = 0;
    int platforms = 0, maxPlatforms = 0;

    while(i < n && j < n){
        if(arr[i] <= dep[j]){
            platforms++;
            maxPlatforms = max(maxPlatforms, platforms);
            i++;
        }
        else{
            platforms--;
            j++;
        }
    }

    cout << maxPlatforms;
}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    unordered_map<int, bool> mp;
    int removed = 0;
    int count = 0;
    int i = 1;

    while (removed < n - 1) {
        
        if (!mp[i]) {  
            count++;

            if (count == k) {
                mp[i] = true; 
                count = 0;
                removed++;
            }
        }

        i++;
        if (i > n) i = 1; 
    }

    for (int j = 1; j <= n; j++) {
        if (!mp[j]) {
            cout << j;
            break;
        }
    }

    return 0;
}
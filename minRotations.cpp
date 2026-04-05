#include <bits/stdc++.h>
using namespace std;


int minRotations(vector<int>& arr1, vector<int>& arr2) {
   
    int n=arr1.size();
    int i=0, j=0;
    int k=0;

    while(i<n && j<n){
        if(arr1[i]==arr2[j]){
            i++;
            j++;
            k++;
        }
        else{
            j++;
        }
    }
    return min(k, n-k);
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4, 5, 6};
    vector<int> arr2 = {1, 2, 3, 4, 5, 6};



    int result = minRotations(arr1, arr2);

    if (result == -1)
        cout << "Not possible\n";
    else
        cout << "Minimum rotations: " << result << endl;

    return 0;
}
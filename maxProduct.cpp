
#include <bits/stdc++.h>
using namespace std;

int main(){

    try{
    int n;
    cin>>n;

    if (cin.fail()) {
        cout << "Err..." << endl;
        return 0;
    }

    int arr[n];
    int negCount=0, zeroCount=0;
    int maxi=INT_MIN;
    int ans=1;

        for(int i=0; i<n; i++){
        cin>>arr[i];

        if (cin.fail()) {
            cout << "Err..." << endl;
            return 0;
        }

        if(arr[i]<0){
            negCount++;
            maxi=max(maxi, arr[i]);
        }
        else if(arr[i]==0){
            zeroCount++;
        }
    }

    for(int i=0; i<n; i++){
        if(arr[i]==0 || (negCount%2!=0 && arr[i]==maxi)){
            continue;
        }
        ans*=arr[i];
    }

    if(zeroCount==n || (zeroCount==n-1 && negCount==1)){
        cout<<0<<endl;
    }
    else{
        cout<<ans<<endl;
    }    
    }
    catch(exception e){
        cout<<"Err..."<<endl;
    }
}
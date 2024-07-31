#include <bits/stdc++.h>

using namespace std;

int main(){
    int q {};
    cin >> q;

    for(int t {} ; t < q ; t++){
        int n {} ; 
        cin >> n;
        int arr[2*n];
        for(int i {} ; i < 2*n ; i++){
            cin >> arr[i];
        }
        
        sort(arr , arr + 2*n);

        cout << arr[n] - arr[n-1] <<"\n";
       
    }
    return 0;
}
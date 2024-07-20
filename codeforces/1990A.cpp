#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int q {};
    cin >> q;
    for(int t {} ; t < q ; t++){
        int n {};
        cin >> n;

        int arr[n];

        for(int i {} ; i < n ; i++){
            cin >> arr[i];
        }
        
        int* m =max_element(arr , arr + n);
        
        int count1 {};
        int count2 {};
        for(int i {} ; i < n ; i++){
            if(arr[i] == *m){
                count1++;
            }
        }

        int sec = arr[n - count1 -1];
        for(int i {} ; i < n ; i++){
            if(arr[i] == sec){
                count2++;
            }
        }
        
        if(count1 % 2 != 0){
            cout << "yes" << "\n";
        }
        
        else {
            if(count2 % 2 == 0)
        }
            
        
    }
    return 0;
}
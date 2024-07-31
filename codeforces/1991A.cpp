#include <iostream>

using namespace std;

int main(){
    int q{};
    cin >> q;

    for(int t{} ; t < q ; t++){
        int n {} ;
        cin >> n;
        int arr[n];
        for( int i {} ; i < n ; i ++){
            cin >> arr[i];
        }
        int max{};
        for( int i {} ; i < n ; i ++){
            if(i != 1 && i!= n-2){
                if(arr[i] > max){
                    max = arr[i];
                }
            }
        }
        cout << max << '\n';


    }
}
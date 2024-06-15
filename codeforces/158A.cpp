#include <iostream>

using namespace std;

int main(){
    int n {};
    int k {};
    cin >> n >> k;

    int arr[n] ;
    int count{};
    for(int i {} ; i < n ; i ++ ){
        cin >> arr[i];
    }
    for(int i{} ; i < n ; i ++){
        if(arr[i] >= arr[k-1] && arr[i] != 0){
            count++;
        }
    }
    cout<< count;
    return 0;

}
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n {};
    cin >> n;
    int arr[n];
    for(int i {} ; i < n ; i++){
        cin >> arr[i];
    }
    int min {*min_element(arr , arr + n)};
    int max {*max_element(arr , arr + n)};
    
    int in = find(arr , arr + n , min) - arr;
    int ax = find(arr , arr + n , max) - arr;

    cout << ax << " " << in << "\n" << n << "\n";

    if(ax > in){
        cout << ax + n - in - 2;
    }
    else{
        cout << ax + n - in -1;
    }
    
    
    return 0;
}
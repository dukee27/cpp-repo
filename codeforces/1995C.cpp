#include <iostream>

using namespace std;

int main(){
    int q {};
    cin >> q;

    for(int t {} ; t < q ; t++){
        int n {};
        cin >> n;
        int arr[n];
        int count;
        for(int i {}; i < n ; i++){
            cin >> arr[i];
        }
        int flag {};
        for(int i {}; i < n ; i++){
            if(arr[i] != '1' || flag == 0  ){
                if(arr[i] == 1){
                    flag = 1;
                }
            }
            else{
                cout << '-1';
                goto endloop;
            }

        }

        for(int i {}; i < n ; i++){
            while(arr[i+1] < arr[i]){
                arr[i+1] *= arr[i+1];
                count ++;
            }
        }

        cout << count << "\n";
        endloop:
    }
    return 0;
}
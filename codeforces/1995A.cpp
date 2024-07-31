#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int q {}; 
    cin >> q;

    for(int t{} ; t < q ; t++){
        int n {};
        int k {};
        cin >> n >> k;
        int count{};
        int value{};
        if(k == 0){
            cout << '0' << "\n";
        }
        else if(k <= n){
            cout << '1' << "\n";
        }
        else{
            value = n;
            count++;
            for(int i {n-1} ; i > 0 ; i--){
                for(int j {} ; j < 2 ; j++){
                    if(value < k){
                        value += i;
                        count++;
                    }
                    else {
                        goto endloop;
                    }
                }
            }
            endloop:
            cout << count << "\n";
        }
    }
    return 0;
}
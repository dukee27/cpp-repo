#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int q {};
    cin >> q;

    for(int i{} ; i < q ; i ++){
        int n {};
        cin >> n ;

        int aArr[n];
        int bArr[n];
        int cArr[n];

        for(int j{}; j < n ; j++){
            cin >> aArr[j];
        }
        for(int j{}; j < n ; j++){
            cin >> bArr[j];
        }
        for(int j{}; j < n ; j++){
            cin >> cArr[j];
        }

        int r {1};
        int sum{};
        for(int j{}; j < n ; j++){
            if(aArr[j] != bArr[j]){
                r = 0;
                break;
            }
            if(aArr[j] != cArr[j]){
                r = 0;
                break;
            }
            if(bArr[j] != bArr[j]){
                r = 0;
                break;
            }

            sum+=aArr[j];
        }

        int t = ceil(sum / 3);
        
        if(r==0){
            cout << "-1";
        }
        else{

        }

    
    }
    return 0;
}
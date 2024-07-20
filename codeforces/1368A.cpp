#include <iostream>

using namespace std;

int main(){
    int q {};
    cin >> q;

    for(int t{} ; t < q ; t++){
        int a {};
        int b {};
        int c {};
        cin >> a >> b >> c;
        int count {};
        
        while(c >= a && c >= b){
            if(a<b){
                a+=b;
            }
            else{
                b+=a;
            }
            count++;
        }
        cout << count<< "\n";
    }
    return 0;
}
#include <iostream>

using namespace std;

int main(){
    int q{};
    cin >> q;

    for(int i {} ; i < q ; i++){
        int n {};
        cin >> n;
        
        for(long long j{1} ; j < n+1 ; j++){
            cout << j << " ";
        }   
        cout << "\n";
        
    }
    return 0;
}
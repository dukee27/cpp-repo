#include <iostream>

using namespace std;

int main(){
    int q {};
    cin >> q ;

    for(int t {} ; t < q ; t++){
        int n {};
        int k{};
        cin >> n >> k;

        string s[n];

        for(int i {} ; i < n ; i++){
            cin >> s[i];
        } 
        int a {};
        
        for(int i {} ; i < n ; i+=k){
                int m {};
                
                string ss[i][n/k];
                for(int j {} ; j < n/k ; j++){
                    cout << s[i][m] ;     
                    m+=k;
            }
            a++;
            cout << "\n";
        }
    }
    
    return 0;
}
#include <iostream>

using namespace std;

int main(){
    int n {};

    cin >> n  ;

    for (int i {} ; i < n ; i++){
        long long a {};
        cin >> a;
        int arr[a];
        for(int j {} ; j < a ; j++){
            long long m {};
            cin >> m ;
            arr[j] = m;
        }
        
        int d = arr[a-1] - arr[0];

        if(d != 0 ){
        cout << "YES" << "\n";
        string s(a,'0');
        for(int j {} ; j < a ; j ++){
            s[j] = 'R';
        }
        s[1] = 'B';
        cout << s << "\n";
        }
        else{
            cout << "NO" << "\n";
        }
    }
    return 0;
}
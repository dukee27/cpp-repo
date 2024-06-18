#include <iostream>

using namespace std;

int main(){
    int n {};
    int t {};
    string s{};
    cin >> n >> t;
    cin >> s;
    string ss{s};
    for(int i {} ; i < t ; i++){
        for(int j {} ; j < n ; j++){
            if(ss[j] == 'B' && ss[j+1] == 'G'){
                s[j] = 'G';
                s[j+1] = 'B';
            }
        }
        ss = s;
    }
    cout << s;
    
    return 0;
}
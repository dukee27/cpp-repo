#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main(){
    long long n {};
    cin >> n;
    string s = to_string(n);


    for(int i{} ; i < s.size() ; i++ ){
        if(int(s[i] -'0') > 4  ){
            
            int b = 9 - int(s[i] - '0');
        
            s[i] = b + '0';
            
        }
        if(s[0] == '0'){
                s[0] = '9';
            }
    }

    cout << s;
}
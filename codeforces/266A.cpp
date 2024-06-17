#include <iostream>

using namespace std;

int main(){
    int n {};
    string s {};
    cin >> n;
    cin >> s;
    int count {};
    
    for(int i {} ; i < s.length(); i++ ){
        if(s[i] == s[i+1]){
            count++;
        }
    }

    cout << count;
    return 0;
}
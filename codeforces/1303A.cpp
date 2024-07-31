#include <iostream>
#include <string>
using namespace std;

int main(){
    int q {};
    cin >> q;

    for(int t {} ; t < q ; t++){
        string s {};
        cin >> s;
     
        int count {};

        for(int i {} ; i < s.length() ; i++){
            if(s[i] == '0'){
                s[i] = '#';
            }
            else{
                break;
            }
        }
        
        for(int i {s.length()-1} ; i >= 0 ; i--){
            if(s[i] == '0'){
                s[i] = '#';
            }
            else{
                break;
            }
        }
        
        for(int i {} ; i < s.length() ; i++){
            if(s[i] == '0'){
                count++;
            }
        }
        
        cout << count << "\n";
    }
    return 0;
}
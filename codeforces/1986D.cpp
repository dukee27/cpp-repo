#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t {};
    cin >> t;
    for(int i {}; i < t ; i++){
        int n {};
        cin >> n;
        string s {};
        cin >> s;
        int value {INT_MAX};
        
        
        if(n<3){
            value = stoi(s);
            
        }
        
        else {
            
            if(n==3 && int(s[1] - '0') == 0 && int(s[0] - '0') != 0 && int(s[2] - '0') != 0 ){
                   if (int(s[0] - '0') == 1 || int(s[2] - '0') == 1)
                   {
                    value = max(int(s[0] - '0'),int(s[2] - '0'));
                   }
                   else{
                    value = int(s[0] - '0') + int(s[2] - '0') ;
                   }
                    
                    
            }

            
            else {
                
                for(int j{} ; j < n - 1 ; j++){
                    
                    int p = int(s[j] - '0')*10 + int(s[j+1] - '0');
                    
                    for(int k {} ; k < n  ; k++){
            
                        if(j!=k && j+1 != k){
                            if(int(s[k] - '0') != 1){
                                p += int(s[k] - '0');
                            }
                        }

                    }
                    

                    value = min(value , p);
                    if (value == INT_MAX) {
                            value = 0;
                        }
                    
                }
                for(int j{} ; j < n ; j++){
                    if(int(s[j] - '0' ) == 0){
                        value = 0;
                    }
                    
                }
                
        }
        

    }
    cout << value << "\n";
    }
    return 0 ;
}
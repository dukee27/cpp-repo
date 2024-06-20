#include <iostream>

using namespace std;


int main(){
    int n {};
    cin >> n;

    for(int i {}; i < n ; i++){
        int m {};
        string s;
        cin >> m;
        cin >> s;
        int countD {};
        int countU {};
        for(int j { } ; j < m ; j++){
            if(s[j] == 'U'){
                countU++;
            }
            else{
                countD++;
            }
        }
           
        
        if(countU % 2 == 1){
            cout << "YES" << "\n";
        }
        else{
            cout << "NO"<<"\n";
        }
    }

    
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int q{} ;
    cin>>q;
    for(int i{} ; i < q ; i++){
        int n {};
        cin >>n ;
        string s{};
        cin >> s;
        int cz {};
        int co {};

        vector<char> v;

        for(int j{} ; j < n ; j++){
            if(s[j] != s[j+1] || s[j] == '1'){
                v.push_back(s[j]);
            }
        }
        
        

        for(int j{} ; j < v.size() ;j++){
           
            if(v[j] == '0'){
                cz++;
            }
            else{
                co++;
            }
            
        }

        if(co > cz){
            cout << "yes" << "\n";
        }
        else{
            cout << "no" << "\n";
        }

        
    }
    return 0;
}
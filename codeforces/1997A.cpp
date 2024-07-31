#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int q {};
    cin >> q;
    for (int t {} ; t < q ; t++) {
      string s{};
      cin >> s;
      s.append("#");
      int i{};
      vector<char> v;
      int n {};
      while(s[i] != '#'){
            if(s[i] == s[i+1] &&  n == 0){
                v.push_back(s[i]);
                if(s[i] == 'a'){
                v.push_back('b');
                }
                else{
                   v.push_back('a'); 
                }
                n=1;
            }
            else{
                v.push_back(s[i]);
            }
            i++;
      }
       
      if(n){
      for(int i {} ; i < v.size() ; i++){
        cout << v[i] ;
      }
      }
      else{
        if(v[0]=='a'){ 
        cout << 'b';
        }
        else{
            cout << 'a';
        }
        for(int i {0} ; i < v.size() ; i++){
        cout << v[i] ;
      }
      }
      cout << "\n";
    }

    return 0;
}

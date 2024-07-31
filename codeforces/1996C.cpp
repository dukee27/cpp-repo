#include<bits/stdc++.h>
using namespace std;

int main(){
    int q {};
    cin >> q;

    for(int t {}; t < q ; t++){
        int s {};
        int query {};

        cin  >> s >> query;

        string a {} ;
        string b {};
        cin >> a >> b;
        for(int i {} ; i < query ; i++){
            int count {};
            int x {};
            int y {};
            cin >> x  >> y;
            string aa = a.substr(x-1 , y-x+1);
            string bb = b.substr(x-1 , y-x+1);
            
            sort(aa.begin(), aa.end());
            sort(bb.begin() , bb.end());
            
            for(int j{} ; j < y-x+1 ; j++ ){
                int flag{};
                for(int k {} ; k < y- x +1; k++){
                    if(aa[j] != bb[k]){
                        flag ++;
                        
                    }
                    else{
                        bb[k] = '#';
                        break;
                    }
                }
                if(flag == y -x +1){
                    count++;
                }
            }
            cout << count << "\n";
        }
    }
}
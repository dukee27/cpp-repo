#include <iostream>

using namespace std;
int main(){
    int n {};
    cin >> n;
    int count{};

    for(int i {} ; i < n ; i++){
        int p{};
        int c{};
        for(int j{} ; j < 3 ; j++){
            cin >> p;
            if(p == 1){
                c++;
            } 
        }
        if(c > 1){
            count++;
        }
    }

    cout << count;

}
#include <iostream> 

using namespace std;

int main(){
    int n {};
    cin >> n;

    for(int i {} ; i < n ; i++){
        int a {};
        int b {};
        int c {};
        cin >> a >> b >> c;
        if((a+b+c)% 2 == 1){
            cout << "-1" << "\n";
        }
        else if(c >= a+b){
            cout << a+b << "\n";
        }
        
        else {
            cout << (a+b+c)/2 << "\n";
        }
    }
    return 0;
}
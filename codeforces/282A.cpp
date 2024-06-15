#include <iostream>


using namespace std;

int main() {
    int n {};
    cin >> n;
    string inc = "++X";
    string inc1 = "X++";
   
    int x{0};
    for(int i {} ; i < n ; i++){
        string op {};
        cin >> op;
        if(op.compare(inc) == 0 || op.compare(inc1) == 0 ){
            x++;
        }
        else{
            x--;
        }
    }
    cout << x;
}
#include <iostream>
#include <cmath>

using namespace std;

int foo(int *x , int d){
    if(*x%d == 0){
        *x /= d;
        foo(x,d);
    }
    return *x;
}

int main(){
    int t {};
    cin >> t ;
    for(int q {} ; q < t ; q++){
        int x {};
        int d {};
        int k {};
        cin >> x >> d >> k;
        x++;
        int t{};

        for(int i {1}; i < k ;){
            if(x%d != 0){
                x++;
                i++;
            }

            if(x%d == 0 ){
                x = foo(&x,d);
                if(x == 1){
                    break;
                }
            }
            t = i;
        }
        int value{foo(&x,d)};
        if(x==1){
            value=((k-t-1)%d) + 1;
            
            if(value == d){
                value = 1;
            }
        }

        cout << value << "\n";
    }
    return 0;
}
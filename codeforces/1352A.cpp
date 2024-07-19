#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n {};
    cin >> n;
    for(int q {} ; q < n ; q++){
        int m {};
        cin >> m;
        int m1 = m;
        int count {};
        while(m > 0){
            
            if( m % 10 != 0){
                count ++;
            }
            m /= 10;
        }
        cout << count << "\n";
        int p{};
        while(m1 > 0){
            
            if( m1 % 10 != 0){
                cout << (m1%10) * int(pow(10,p)) << " ";
            }
            m1 /= 10;
            p++;
        }

    }
    return 0;
}
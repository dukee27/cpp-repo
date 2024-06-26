#include <iostream>

using namespace std;

int main(){
    int  t {};
    cin >> t;
    for(int q {} ; q < t ; q++ ){
        int x1{};
        int y1{};
        int x2{};
        int y2{};
        cin >> x1 >> y1 >> x2 >> y2;
        if(x2>x1 && y1 == y2){
            if(x2 > y1 && x1 < y1){
                cout << "NO" << "\n";
            }
            else{
                cout << "YES"<< "\n";
            }
        }
        if(y2>y1 && x1 == x2){
            if(y2 > x1 && y1 < x1){
                cout << "NO"<< "\n";
            }
            else{
                cout << "YES"<< "\n";
            }
        }
        if(x1 != x2 && y1 != y2){
            int countx{x1};
            int county{y1};
            int count{};
            for(int i {} ; i < max(y2,x2) ; i++){
                if(countx <= x2){
                    countx++;
                }
                if(county <=y2){
                    county++;
                }
                if(countx == county){
                    cout << "NO"<< "\n";
                    break;
                }
                if(countx != county){
                    count++;
                }
            }
            if(count == max(y2,x2)){
                cout << "YES"<< "\n";
            }
        }
        if(x1 == x2 && y1 == y2){
            cout << "YES"<< "\n";
        }
        

        }
    return 0;
}
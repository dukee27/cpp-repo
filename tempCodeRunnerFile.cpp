#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    
    
    for(int i=0;i<t;i++){
    int x,y,k;
    cin >> x;
    cin >> y;
    cin >> k;
    int n = k;
    
        for(int j=0;j<k;j++){
            x++;
            if(x%y==0){
                while(n>0)
                {
                    x = x/y;
                    if(x%y==0)
                    {
                        n--;
                    }
                    else{
                        break;
                    }
                }
            }
            n=k;
        }
        cout<<x << "\n";
    }

}
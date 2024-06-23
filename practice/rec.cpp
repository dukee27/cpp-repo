#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t {};
    cin >> t;
    for(int i {} ; i < t ; i++){
        int n {};
        int m {};
        cin >> n; 
        cin >> m;
        string s {};
        cin >> s;
        int arr[m];
        for (int j {}; j < m ; j++){
            cin >> arr[j];
        }
        string u = {};
        cin >> u;
        
        sort(arr , arr + m);
        sort(u.begin() , u.end());

        int arr1[m];
        
        int index = 0;
        
        arr1[index++] = arr[0]; 
        for (int j = 1; j < m; j++) {
        if (arr[j] != arr[j - 1]) { 
        arr1[index++] = arr[j];
    }
}
        int arr2[index];
        for (int j {}; j < index ; j++){
            arr2[j] = arr1[j];
        }

        for (int j {}; j < index ; j++){
            int temp = arr2[j];
            s[temp-1] = u[j];
        }
        cout << s << "\n";
    }
    return 0;
}
#include <iostream>

using namespace std;

enum Poly{
    
    Tetrahedron,
    Cube,
    Octahedron,
    Dodecahedron,
    Icosahedron,
    Unknown
};
Poly stringToPoly(const std::string& polyStr) {
    if (polyStr == "Tetrahedron") {
        return Poly::Tetrahedron;
    } else if (polyStr == "Cube") {
        return Poly::Cube;
    } else if (polyStr == "Octahedron") {
        return Poly::Octahedron;
    } else if (polyStr == "Dodecahedron") {
        return Poly::Dodecahedron;
    } else if (polyStr == "Icosahedron") {
        return Poly::Icosahedron;
    } 
    else {
        return Poly::Unknown; 
    }
}
int main(){
    int n{};
    cin >> n;
    string s[n];
    for(int i {} ; i < n ; i++){
        cin >> s[i];
    }
    int A[n];
    
    for(int i {}; i< n ; i++){
        Poly p =stringToPoly( s[i] );
        switch(p){
        case Tetrahedron : A[i] = 4; break ;
        case Cube : A[i] = 6; break ;
        case Octahedron : A[i] = 8; break ;
        case Dodecahedron : A[i] = 12; break ;
        case Icosahedron : A[i] = 20; break ;
        }
    }

    int sum;

    for(int i {} ; i <n ; i++){
        sum += A[i];
    }
    cout << sum;
    return 0;
}
#include<iostream>
using namespace std;

long long int gcd(int &,int &);


int main(){
    int x, y;
    cin >> x >> y;
    cout << gcd(x,y);
    return 0; 
}

long long int gcd(int &a,int &b){
    if (a%b==0) return b;
    else{
        a=a%b;
        return gcd(b,a);
    }
}
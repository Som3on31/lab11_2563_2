#include<iostream>
using namespace std;

long long int fibonacci(int);



int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}

long long int fibonacci(int a){

    if(a==0) return 0;
    else if (a==1) return 1;
    else return fibonacci(a-1)+fibonacci(a-2);

}
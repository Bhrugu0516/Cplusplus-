#include<iostream>
using namespace std;

int fibonacci(int n){
    int first_n=0;
    int sec_n=1;
    int thir_n=1;
    cout << first_n<< " "<< sec_n<<" ";
    int i=0;
    while(i<=n){
        cout << thir_n<<" ";
        first_n=sec_n;
        sec_n=thir_n;
        thir_n=first_n+sec_n;
        
        i++;
    }
}

int main(){
    int n;
    cin>>n;
    fibonacci(n);
    return 0;
}

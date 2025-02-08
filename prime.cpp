#include<iostream>
using namespace std;

int primecheck(int n){
    int prime=1;
    for(int i=2;i<n;i++){
        if(n==0 || n==1){
            continue;
        }
     
     else if (n/i==0){
        prime =0;
     }
     else {
        prime=1;
     }

}
if (prime==1){
    cout <<"it is prime number";
}
else 
cout <<"not a prime number";
}
int main(){
    int n;
    cin >> n;
    primecheck(n);

    return 0;
}
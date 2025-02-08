#include<iostream>
using namespace std;

int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int binomial(int n,int r){
    int fact_n=factorial(n);
    int fact_r=factorial(r);
    int fact_nmr=factorial(n-r);

    int bino=fact_n/(fact_r*fact_nmr);
    return bino;
}
int main(){
    int n=8,r=2;
    cout<<"The binomial coefficient is"<<binomial(n,r);
    return 0;

}
 
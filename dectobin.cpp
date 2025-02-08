#include<iostream>
using namespace std;

int dectobi(int deciNum){
    int biNum=0; //gonna be our binary number
    int pow=1; //represented as 10 to power 0
    while(deciNum>0){
        int rem=deciNum%2;
        deciNum/=2;
        biNum+=(rem*pow);
        pow=pow*10;

    }
    return biNum;

}
int main(){
    int n;
    cout << "Enter the nth number till which to print";
    cin >> n;
    for(int i=1;i<=n;i++){
        cout << dectobi(i)<<endl;

    }
    return 0;
}
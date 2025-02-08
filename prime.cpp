#include<iostream>
using namespace std;

int primecheck(int n){
    for(int i=2;i<n;i++){
        if(n==0 || n==1){
            cout <<"it is no prime number"<<endl;
            break;
        }
     
     else if (n%i==0){
        cout <<"it is not prime number "<<endl;
        break;
     }
     else {
        cout << "it is a prime number"<< endl;
        break;
     }

}
}

int primeprint(int n){
    cout << "2"<<" ";
    for(int i=2;i<n;i++){
        for(int j=2;j<i;j++){
            if(i%j==0){
             break;
            }
            else{
                cout << i <<" ";
                break;
            }
        }
    }
}


int main(){
    int n;
    cin >> n;
    primecheck(n);
    primeprint(n);

    return 0;
}  
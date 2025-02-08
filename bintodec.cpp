#include<iostream>
using namespace std;

int bintodec(int binNum){
    int ans=0;  // resulting decimal number
    int pow=1; // this represents 2 to power 0
    while(binNum>0){
        int rem=binNum%10; //remainder
        ans+=(rem*pow);
        binNum/=10;  
        pow*=2; // as power increases as we go frol left to right 

    }
    return ans;
    

}
    
int main(){
    int biNum;
    cout << "enter your binary number :";
    cin >>biNum;
    cout << bintodec(biNum)<<endl;


    return 0;
}
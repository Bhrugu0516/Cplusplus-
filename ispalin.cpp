#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cout << "Enter your string to chec for palindrome :" << endl;
    getline(cin,str);
    cout << "you entered below string :"  << endl;
    cout << str << endl;

    int n=str.length();
    int start=0;
    int end=n-1;
    while(start<end){
        if(str[start]==str[end]){
            start++;
            end--;
        }
        else{
            cout << "string is not palindrome "<<endl;
            return 0;
        }
    }
    cout << "The given string is Palindrome" << endl;
    return 0;
}
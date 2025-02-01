#include<iostream>
using namespace std;

int main()
{   
    int n;
    cin >> n;
    // for top part of butterfly

    for(int i=0;i<=n;i++){
        //first start triangle
        for(int j=0;j<i;j++){
            cout << "*";
        }
        //first space triangle reverse 
        for(int j=0; j<n-i;j++){
            
            cout << " ";

        }
        //second triangle space
        for(int j=0;j<n-i;j++){
            
            cout << " ";
        }
        // second star parttern for top
        for(int j=0;j<i;j++){
            cout << "*";
        }
        cout << endl;

    }
    // bottom part of butterfly
    for(int i=0;i<n;i++){
        //first star triangle
        for(int j=0;j<n-i;j++){
            cout << "*";
        }
        // first space triangle
        for(int j=0;j<i;j++){
            cout << " ";
        }
        // second space triangle
        for(int j=0;j<i;j++){
            cout <<" ";
        }
        //second star triangle
        for(int j =0;j<n-i;j++){
            cout << "*";
        }
        cout << endl;
    }
        
    
    return 0;
}
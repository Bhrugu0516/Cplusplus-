#include<iostream>
#include<vector>
using namespace std;

int lineasearch(vector <int>v,int key ){
    for(int i=0;i<v.size();i++){
        if(v[i]==key){
            return i;
        }
    }
    return -1;

}
int reverse(std::vector<int>&v){
    int n=v.size();
    for(int i=0;i<(v.size())/2;i++){
        int temp=v[i];
        v[i]=v[n-i-1];
        v[n-i-1]=temp;

    }
    

}
int main(){
    std::vector<int>v={1,2,3,4,5,6,7};
    int key =5;
    int i=lineasearch(v,key);
    if(i!=-1){
        cout <<"Item at position : "<<i+1<<endl;
    }
    else{
        cout << "item not found"<<endl;
    }
    reverse(v);
    for(int num :v){
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
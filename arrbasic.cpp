#include<iostream>
using namespace std;

void sumarr(int arr1[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr1[i];
    }
    cout << "sum of arr1 is :" << sum <<endl;
}

void proarr(int arr2[],int size){
    int product=1;
    for(int i=0;i<size;i++){
        product*=arr2[i];
    }
    cout << "product of arr2 is :" << product << endl;
}

void uniq(int arr1[],int size){
    cout << "Here are unique elements of arr1:"<< endl;
    
    for(int i=0;i<size;i++){
        int count=0;
        for(int j=0;j<size;j++){ 
            if (arr1[i]==arr1[j]){
                count++;
                
            }
        }
        if(count==1){
            cout << arr1[i] << " ";
        }    
    }
    cout << endl;
}

void inter(int arr1[],int arr2[],int size){
    cout << "below are the intersecting elements of both arrays :" << endl;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(arr1[i]==arr2[j]){
                cout << arr1[i] << " ";
            }
        }
    }
    cout << endl;
}

void maxmin(int arr1[],int size){
    int largest= INT32_MIN;
    int smallest= INT32_MAX;
    for(int i=0;i<size;i++){
        largest=max(arr1[i],largest);
        smallest=min(arr1[i],smallest);
    }
  
    cout << "largest number is :"<< largest << endl;
    cout << "smallest number is :"<< smallest << endl;
}

int main(){
    int arr1[7]={1,2,4,5,3,2,1};
    int arr2[7]={1,5,3,4,5,4,2};
    int size=7;

    sumarr(arr1,size);
    proarr(arr2,size);
    uniq(arr1,size);
    inter(arr1,arr2,size);
    maxmin(arr1,size);
    
    return 0;

}
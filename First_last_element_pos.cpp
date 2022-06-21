#include<iostream>
using namespace std;

void firstLast(int a[], int size, int key){
    int  k, count = 0;
    for(int i = 0; i < size; i++){
        if(a[i] == key){
            cout<<i<<" ";
            k = i;
            break;
        }
    }
    for(int i = 1; i < size; i++){
        if(a[k] == a[k + i]){
            count = count + 1;
        }
        else{
            break;
        }
    }
    cout<<k + count<<" ";
}


int main(){
    int arr[8] = {0,1,1,1,2,2,2,2};
    firstLast(arr, 8, 3);
}
    
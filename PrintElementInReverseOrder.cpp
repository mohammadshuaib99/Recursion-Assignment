#include<iostream>
using namespace std;

void printArrayInReverse(int array[],int size,int idx){
    if(idx == size){
        return;
    }
    printArrayInReverse(array,size,idx+1);
    cout<<array[idx]<<" ";
}

int main(){
    int array[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(array)/sizeof(int);
    printArrayInReverse(array,size,0);
    return 0;
}
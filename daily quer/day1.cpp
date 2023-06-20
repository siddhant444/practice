#include<iostream>
using namespace std;
int evaluate(int arr[],int size){
    
    if(size<=2){
        return -1;
    }
    else if(size>2){
        int count=0;
       for (int i: arr)
       {
        if(i>0){
            break;
        }
        count += 1;
       }

       if(size==count){
        return -1;
       }

       for
       
    }
}
int main(){
    int arr[]={2,10,5,9};
    evaluate(arr,5)
}
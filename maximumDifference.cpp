//In this problem statement we have to find out the maximum difference betwwent the two numbers 
//such that the difference is the maximum 
//Test Cases
//int arr[]={2,3,10,6,4,8,1}
//int arr2[]={7,9,5,6,3,2}
//int arr3[]={10,20,30}
//int arr4[]={30,10,8,2}
#include <iostream>
using namespace std;
 
 //Naive Solution
 int differenceNaive(int *arr,int size){
    int differ=0;
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            int diff=arr[j]-arr[i];
            if(diff>differ){
                differ=diff;
            }
        }
    }
return differ;
}




*/
//Finding MAX

int max(int val1,int val2){
    if(val1>val2){
        return val1;
    }
    return val2;
}
int minimum(int val1,int val2){
    if(val1<val2){
        return val1;
    }
    return val2;
}

/*Optimsed Solution*/
int difference(int *arr,int size){
    int differ=arr[1]-arr[0];
    int min=arr[0];

    for(int i=0;i<size;i++){
        differ=max(differ,(arr[i]-min));
        min=minimum(min,arr[i]);
    }
    return differ;
}


int main(){
int arr2[]={7,9,5,6,3,2};
   cout<<difference(arr2,7);

    return 0;
}
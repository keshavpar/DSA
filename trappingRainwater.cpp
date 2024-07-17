/*This problem is named as Tapping Rain Water ,in this we have to calculate the amount 
of water that can be stored in the array the formula to calculate the rain water stored is 
min(starting,endingPoint)-value at the index
In this formula we will first find the value of the left index and the right index and which one of the value is 
smaller we select it and substract it with the value of that index and and then add it value that is already present
*/
/*In this problem statment we have to compute the left max and the right max of the array */
#include <iostream>
using namespace std;
//Arrays
int min(int a,int b){
    if(a>b){
        return b;
    }
    return a;
}
int max(int a,int b){
    if(a<b){
        return b;
    }
    return a;
}

//The time complexity of the function is theta n and the auxilary space used is also theta n 
int calculateRainWater(int *arr,int size)
{
    int totalWaterCollected =0;
    int lmax[size],rmax[size];

    //We are computing the lmax of the value of the array to find the left bigger value
    lmax[0]=arr[0];
    for(int i=1;i<size;i++){
        lmax[i]=max(arr[i],lmax[i-1]);
    }
    //We are computing the rmax of the value of the array to find the right bigger value
    rmax[size-1]=arr[size-1];
    for(int i=size-2;i>=0;i--){
        rmax[i]=max(arr[i],rmax[i+1]);
    }
    //We are now computing the value by substracting the value from the current value
    for(int i=1;i<size-1;i++){
         totalWaterCollected=totalWaterCollected+( min(lmax[i],rmax[i])-arr[i]);
    }
    return totalWaterCollected;
}
int main()
{
    /*First Case for the problem Statement*/
    int arr[]={5,0,6,2,3};
    cout<<calculateRainWater(arr,5);

    return 0;
}

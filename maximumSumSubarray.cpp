/*In this problem we have to calculate the maximum sum of the subarray*/
/*Ip arr[]={2,3,-8,7,-1,2,3}
Op: 11
Ip: arr[]={5,8,3}
Op:16
I/p arr[]={-6,-1,-8}
Op:-1
*/
#include <iostream>
using namespace std;
//ARRAYS
int MaximumSubArray(int *arr,int size){
    int subtotal =0;
    subtotal=arr[0];
        for(int j=1;j<size;j++){
            
            subtotal=subtotal+arr[j];
            if(subtotal<0){
                subtotal=0;
            }
        }
  return subtotal;

}

int main(){
    int arr[]={2,3,-8,7,-1,2,3};
    cout<<MaximumSubArray(arr,7);
    return 0;
}

/*           // if(subtotal<arr[j-1]+arr[j]){
            //     subtotal=arr[j-1]+arr[j];
            // }
            // else if(arr[j]<0){

            // }*/
/*In this problem statement we have to find the maximum consecutive 1,s in a Binary Array
Input: arr[]={0,1,1,0,1,0}
Output:2
Input: arr[]={1,1,1,1}
output:4
Input:arr[]={0,0,0}
output:0;
Input:arr[]={1,0,1,1,1,1,0,1,1}
Output:4
*/

#include <iostream>
using namespace std;
//ARRAYS
int CalculateMaximum1Consecutive(int *arr,int size){
    int total=0;
    int ctotal=0; 
    for(int i=0;i<size;i++){
        if(arr[i]==1){
            ctotal=ctotal+1;
        }
        else{
            ctotal=0;
        }
        if(ctotal>total){
            total=ctotal;
        }
    }
    return total;
}

int main(){
    int arr[]={1,0,1,1,1,1,0,1,1};
    cout<<CalculateMaximum1Consecutive(arr,9);

    return 0;
}
#include <iostream>
using namespace std;
//ARRAY
bool sorted(int *arr,int size){
    bool flag =true;

    for(int i=1;i<size;i++){


      if(arr[i]<arr[i-1]){
            flag=false;
        }
        
        
    }
    return flag;

}

int main (){
    //Check if the array is sorted or not 
    /*1 test Case*/
    int arr[3]={8,12,15};
    cout<<sorted(arr,3);
    cout<<"\n\n";
    // /*2 test Case*/
    int arr2[4]={8,10,10,12};
    cout<<sorted(arr2,4);
    cout<<"\n\n";
    // /*3 test Case*/
    int arr3[]={100};
        cout<<sorted(arr3,1);
    cout<<"\n\n";
    /*4 test Case*/
    int arr4[]={100,20,200};
    cout<<sorted(arr4,3);
    cout<<"\n\n";
    return 0;
}
#include<iostream>
using namespace std;
//Quick Sort
void swapp(int* a,int* b){
   int temp=*a;
   *a=*b;
   *b=temp;
}

// int partition(int arr[],int l,int r){
// int pivot=arr[r];
// int i=l-1;
// for(int j=l;j<r;j++){
//     if(arr[j]<pivot){
//         i++;
//        swapp(&arr[i],&arr[j]); 
//     }
// }
// swapp(&arr[i+1],&arr[r]);
// return i+1;
// }

int partition(int arr[],int s,int e){
int pivot=arr[e];
int i=0;
for(int j=0;j<e;j++){
    if(arr[j]<pivot){
        swapp(&arr[i],&arr[j]);
        i++;
    }
}
swapp(&arr[i],&arr[e]);
return i;
}

void Quicksort(int arr[],int s,int e){
 if(s<e){
int pi=partition(arr,s,e);
   Quicksort(arr,s,pi-1);
   Quicksort(arr,pi+1,e);
 }
}

int main(){
    // int arr[]={5,9,-7,3,-1,4,6,2};
    int arr[]={6,3,9,5,2,8,7};
    int size=sizeof(arr)/sizeof(arr[0]);
    Quicksort(arr,0,size-1);
    
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
#include<iostream>
using namespace std;
void Merge(int oarr[],int s,int mid,int e){
    int l1=mid-s+1;
    int l2=e-mid;
    int arr[l1];int brr[l2];
    for(int i=0;i<l1;i++){
        arr[i]=oarr[s+i];
    }
      for(int i=0;i<l2;i++){
        brr[i]=oarr[mid+1+i];
    }
    int i=0;int j=0;int k=s;
    while(i<l1 && j<l2){
        if(arr[i]<brr[j]){
            oarr[k]=arr[i];
            k++;i++;
        }
        else{
            oarr[k]=brr[j];
            k++;j++;
        }
        
    }
    while(i<l1){
        oarr[k]=arr[i];
        k++;i++;  
    }
    while(j<l2){
       oarr[k]=brr[j];
        k++;j++;  
    }
}

void Mergesort(int oarr[],int s,int e){
    if(s<e){
        int mid=(s+e)/2;
        Mergesort(oarr,s,mid);
        Mergesort(oarr,mid+1,e);
        Merge(oarr,s,mid,e);
    }
}

int main(){
    int oarr[]={6,3,9,5,2,8,7,1}; //orginal array
    int n=sizeof(oarr)/sizeof(oarr[0]);
    Mergesort(oarr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<oarr[i]<<" ";
    }

    return 0;
}
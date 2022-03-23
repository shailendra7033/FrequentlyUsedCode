#include<bits/stdc++.h>
using namespace std;

void Insert(int arr[],int n){
    int temp=arr[n];
    int i=n;
    while((temp>arr[i/2]) && i>1){
        arr[i]=arr[i/2];
        i=i/2;
    }
    arr[i]=temp;
    return;
}

void Delete(int arr[],int n){
    int x=arr[1];
    int i=1,j=2*i;
    arr[i]=arr[n];
    while(j<=(n-1) ){
        if(arr[j+1]>arr[j]){
            j=j+1;
        }
        
        if(arr[i]<arr[j]){
            swap(arr[i],arr[j]);
            i=j;
            j=2*i;
        }else{
            break;
        }
    }
    arr[n]=x;

    
    return;
}




int main(){
    int arr1[]={2,5,89,23,56,13,58};
    int n=7;
    int heap[n+1],size=0;
    for(int i=0;i<n;i++){
       size++;
        heap[i+1]=arr1[i];
        if(i>0)
         Insert(heap,size);
    }
    for(int i=1;i<=size;i++){
        cout<<heap[i]<<" ";
    }
    cout<<"\n";
    
    while(size>=1){
    Delete(heap,size);
    size--;
    } 

    for(int i=1;i<=n;i++){
        cout<<heap[i]<<" ";
    }
    cout<<"\n";
    
    
    return 0;
}
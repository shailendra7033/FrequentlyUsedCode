#include<stdio.h>

int main(){
     int arr[]={3,78, 8,6,39,45};

    // insertion sort 
    int n=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[minIndex]>arr[j]){
                minIndex=j;
            }
        }

        if(minIndex!=i){
            int temp=arr[minIndex];
            arr[minIndex]=arr[i];
            arr[i]=temp;
        }
    }


    for(int i=0;i<n;i++){
        printf(" %d ",arr[i]);  
    }
    return 0;
}
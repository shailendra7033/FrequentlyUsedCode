#include<stdio.h>
#define MAX 10

void merge(int arr[],int low,int mid, int high){
        int index=low;
        int temp[MAX];
        int i,j,k;
        i=low,j=mid+1,k=high;
        while(i<=mid && j<=high){
            if(arr[i]<=arr[j]){
                temp[index]=arr[i];
                index++,i++;
            }else{
                temp[index]=arr[j];
                index++,j++;
            }
        }
        while(i<=mid){
            temp[index]=arr[i];
            index++,i++;
        }
          while(j<=high){
            temp[index]=arr[j];
            index++,j++;
        }

        for(int i=low;i<=high;i++){
            arr[i]=temp[i];
            // printf("%d ",temp[i]);
            
        }
        return ;
}

void mergeSort(int arr[],int l,int h){
 

    if(l<h){
           int m=(h+l)/2;
           mergeSort(arr,l,m);
           mergeSort(arr,m+1,h);
           printf("\n");
           merge(arr,l,m,h);
    }
    return;
}





int main(){
     int arr[]={3,81, 78,61,39,45};

    // insertion sort 
    int n=sizeof(arr)/sizeof(arr[0]);
    //   for(int i=0;i<n;i++){
    //     printf(" %d ",arr[i]);
    // }
    mergeSort(arr,0,5);
    printf("\n");
    for(int i=0;i<n;i++){
        printf(" %d ",arr[i]);
    }
    return 0;
}


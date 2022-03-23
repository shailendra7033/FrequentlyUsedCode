#include<stdio.h>

int main(){
    
    int arr[]={45,39,25,23,12};

    // insertion sort 
    int n=sizeof(arr)/sizeof(arr[0]);
    int flag=0;

    for(int i=0;i<n-1;i++){
// in each pass we find max element and place it to last
       
        for(int j=0;j<n-i-1;j++){
            // make temporary variable for wapping
           
            if(arr[j]>arr[j+1]){
                // int temp=arr[j];
                // arr[j]=arr[j+1];
                // arr[j+1]=temp;
                arr[j]=arr[j]^arr[j+1];
                arr[j+1]=arr[j]^arr[j+1];
                arr[j]=arr[j]^arr[j+1];
                flag++;

            }
           
        }
         if(flag==0){
             printf("broken");
              break;
                }

    }

    for(int i=0;i<n;i++){
        printf(" %d ",arr[i]);
    }
    // printf(" %d %d",flag,check);

    return 0;
}
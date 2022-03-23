#include<stdio.h>

int main(){
    
    int arr[]={3,78, 8,6,39,45};

    // insertion sort 
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++){
        // this loop to iterate through whole list
        int temp=arr[i];

        for(int j=i-1;j>=0;j--){
            // this will make two part of array sorted and unsorted
            // take element and place to proper place
                if(temp<arr[j]){
                    arr[j+1]=arr[j];
                    arr[j]=temp;
                }else{
                  
                    break;
                }
        }
    }//end of outer loop

    for(int i=0;i<n;i++){
        printf(" %d ",arr[i]);
    }
    return 0;
}
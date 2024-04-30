#include <stdio.h>    
     
main()    
{       
    int i; 
    int arr[] = {25, 11, 7, 75, 56};      
        
    int length = sizeof(arr)/sizeof(arr[0]);    
        
    int min = arr[0];    
           
    for (i=0; i<length; i++) 
	{        
       if(arr[i] < min)    
           min = arr[i];    
    }      
    printf("Smallest element present in given array= %d\n", min);    
}
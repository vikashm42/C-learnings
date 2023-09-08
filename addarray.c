# include <stdio.h>
void main (){
    int arr1[2][2],arr2[2][2],res[2][2];
    printf ("enter the first array");
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            
            scanf ("%d",&arr1[i][j]);
        }

    }printf ("\n");
    printf ("enter the second array");
    for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            
            scanf ("%d",&arr2[i][j]);
        }}


     for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            res[i][j]=arr1[i][j]+arr2[i][j];
            
            
        }
     }
         for (int i=0;i<2;i++){
        for (int j=0;j<2;j++){
            printf ("%d ",res[i][j]);
        
        }
    }
        
    
   
   

}
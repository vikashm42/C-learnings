# include <stdio.h>
void main (){
    int r,c;
    
    printf ("enter the no of students ");
    scanf ("%d",&r);
    printf ("enter the no. of columns ");
    scanf ("%d",&c);
    int arr[r][c];
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            
            scanf ("%d",&arr[i][j]);
        }

    }
     for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            
            printf("%d ",arr[i][j]);
        }printf ("\n");
        
    }
   
   
}
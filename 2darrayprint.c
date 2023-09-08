# include <stdio.h>
void main (){
    int arr[2][3];
    arr[0][0]=15;
    arr[0][1]=16;
    arr[0][2]=17;
    arr[1][0]=14;
    arr[1][1]=13;
    arr[1][2]=18;
    for (int i=0;i<=2;i++){
        for (int j=0;j<=3;j++){
            printf ("%d ",arr[i][j]);
        
        }printf ("\n");
    }
}
# include <stdio.h>
int main (){
    int i,j,temp,n,number [30],min,index;
    printf ("Enter the n");
    scanf ("%d",&n);
    printf("enter the nos.");
    for (i=0;i<n;++i){
        scanf ("%d",&number[i]);

    }
    for (i=0;i<n-1;++i){
        min=number[i];
        index=i;
        for (j=i+1;j<n;++j){
            if (min>number[j]){
                min=number[j];
                index=j;
            }
        }
        temp =number[i];
        number[i]=number [index];
        number [index]=temp;
    }
    printf ("the numbers arrange in descending order is \n");
    for (i=0;i<n;++i){
        printf ("%d",number [i]);
    }
    return 0;
}
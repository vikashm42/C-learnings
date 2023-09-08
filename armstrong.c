# include <stdio.h>
void main(){
    int n,r,sum=0,temp;
    printf ("enter the no.");
    scanf ("%d",&n);
    temp=n;
    while (n>0){
        r=n%10;
        r=r*r*r;
        sum=sum+r;
        n=n/10;
    }
    if (sum==temp)printf ("the given no. is armstrong no.");
    else printf ("the given no. is not armstrong no.");
    printf("%p",&sum);
    
}
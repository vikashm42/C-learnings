# include <stdio.h>
void jod();

void jod (){ int a,b,add;
    printf (" the address is %x",&a);
    printf("enter the first no.");
    scanf("%d",&a);
    printf("enter the second no.");
    scanf("%d",&b);
    printf ("the addition of two no. %d",add=a+b);
    

}
int main ()
{
   jod();
    return 0;


}
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int i,a[100],n;

    printf("enter a number of values to store in array :  ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("enter the %dth value : ",i);
        scanf("%d",&a[i]);
        
    }
     printf("\nyou entered values is :");

    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
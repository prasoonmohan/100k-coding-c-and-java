#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int array[100],temp,i,j,limit;

    printf("enter the limit : ");
    scanf("%d",&limit);

    printf("enter the values of array :");

    for(i=0;i<limit;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<limit;i++)
    {
        for(j=i+1;j<limit;j++)
        {
            if(array[i]<array[j])
            {
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    printf("ARRAY IN DESCENDING ORDER :");
     for(i=0;i<limit;i++)
    {
        printf("%d\t",array[i]);
    }
}

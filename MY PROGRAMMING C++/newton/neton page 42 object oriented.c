//neton page 42 object oriented
#include<stdio.h>
int GetSortedArray(int a[])
{
    int i,j,temp;
    for (i=0; i<5; i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

//*****************************
    for(i=0; i<5; i++)
    {
        printf("%d  ",a[i]);
    }
}
int GetLargestValue(int a[])
{
    int i,getLarge;
    getLarge=0;
    for(i=0; i<5; i++)
    {
        if(a[i]>getLarge)
            getLarge=a[i];
    }
    return (getLarge);
}
//********************************** main function
int main()
{
    int i,a[5];
    printf("enter five integer(press ENTER after each value):\n");
    for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n\n your entered integer's are:\n");
    for (i=0; i<5; i++)
    {
        printf("%d\n",a[i]);
    }

    printf("\n\n after sorting :\n");
    GetSortedArray(a);
    printf("\n\nthe Largest value is:\n%d",GetLargestValue(a));
}


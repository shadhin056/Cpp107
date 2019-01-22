//newton book c++
#include<stdio.h>
/* Function to sort the arry*/
void GetSortedArray(int a[])
{
    int i,j,temp;
    for (i=0; i<5; i++)
        for (j=i+1; j<5; j++)
        {
            if(a[i]>a[j])
            {
                temp =a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    /*Print the sorted array*/
    for (i=0; i<5; i++)
    {
        printf("%d",a[i]);
    }
    /*Function to get the largest value*/
    int GetLargestValue (int a[])
    {
        int i,getLarge ;
        getLarge =a[0];
    for (i=0; i<5; i++)
        {
            if (a[i]>getLarge )
            {
                getLarge=a[i];
            }
        }
        return(getLarge);
    }
    void main(void)
    {
        int i,a[5];
        printf("enter five integer (press enter after each value ):\n");
        for (i=0; i<5; i++)
            scanf("%d",&a[i]);
        printf("\n\n your entered integer's are=\n");
        for (i=0; i<5; i++)
        {
            printf("%d",a[i]);
            printf("\n\n after sorting :\n");
            GetSortedArray(a);
            printf("\n\n the large value is \n %d",GetLargestValue(a));
        }
    }}



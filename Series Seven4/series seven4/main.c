
#include <stdio.h>

int main()
{
    int arr[10],i,j,z;
    printf("\n enter ten numbers:\n ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(arr[j]<arr[i])
            {
                z=arr[i];
                arr[i]=arr[j];
                arr[j]=z;
            }
        }
    }
    for(i=0;i<10;i++)
    {
        printf(" %d ",arr[i]);

        return 0;
    }
}
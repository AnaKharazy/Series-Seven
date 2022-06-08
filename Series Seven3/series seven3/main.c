
#include <stdio.h>
int main()
{
    double arrfirst[]={-10.5, -1.8, 3.5, 6.3, 7.2};
    double arrsecond[]={-1.8, 3.1, 6.3};
    int temp=0;

    int length=sizeof(arrfirst)/sizeof (arrfirst[0]);
    int length2=sizeof(arrsecond)/sizeof(arrsecond[0]);

    printf("elements of original first array:\n");
    for (int i = 0; i <length ; i++)
    {
        printf("%2.1lf\t",arrfirst[i]);
    }
    printf("\n elements of original second array:\n");
    for (int i = 0; i <length2 ; i++) {
        printf("%2.1lf\t", arrsecond[i]);
    }
    double ResultArr[]={-10.5, 3.5, 7.2, 3.1, 6.3, -1.8};
    int lengthRes=sizeof(ResultArr)/sizeof(ResultArr[0]);
    for (int i = 0; i <lengthRes ; i++)
    {
        for (int j = i+1; j < lengthRes; j++) {
            if(ResultArr[i]>ResultArr[j]){
                temp=ResultArr[i];
                ResultArr[i]=ResultArr[j];
                ResultArr[j]=temp;
            }
        }

    }
    printf("\n elements of Result array:\n");
    for (int i = 0; i <lengthRes ; i++) {
        printf("%2.1lf\t", ResultArr[i]);
    }
    printf("\n");
    return 0;
}
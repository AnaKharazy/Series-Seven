#include <stdio.h>

int main()
{
	int arr[6][6],arr2[6][6],i,j;
	arr[0][0]=arr[0][0]=arr2[0][0]=arr2[0][0]=0;
	arr[0][1]=arr[1][0]=arr2[0][1]=arr2[1][0]=6;
	arr[0][2]=arr[2][0]=arr2[0][2]=arr2[2][0]=7;
	arr[0][3]=arr[3][0]=arr2[0][3]=arr2[3][0]=8;
	arr[0][4]=arr[4][0]=arr2[0][4]=arr2[4][0]=9;
	arr[0][5]=arr[5][0]=arr2[0][5]=arr2[5][0]=10;
	int i2=1,j2;
	for(i=1;i<6;i++)
	{
		j2=1;
		for(j=1;j<6;j++)
		{
			arr2[i2][j2]=arr[0][j]*arr[i][0];
			j2++;
		}
		i2++;
	}
	for(i=0;i<6;i++)
	{
		for(j=0;j<6;j++)
		{
			printf(" %d ",arr2[i][j]);
		}
		printf("\n");
	}

}
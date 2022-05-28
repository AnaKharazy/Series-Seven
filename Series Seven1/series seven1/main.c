
#include <stdio.h>

int main()
{
	 int n1[23],ns1,sum=0;
    char c,i=0;
    printf("\n enter the twelve digit barcode : ");
    for(i=0;(c=getchar())!='\n';i++)
    {
	    n1[i]=c-'0';
	    ns1++;
    }
    for(i=-4;i<=16;)
    {
    	i+=4;
    	sum+=n1[i];
	}
	sum*=3;
	printf("result of the game 1: %d\n",sum);
	for(i=-2;i<=18;)
    {
    	i+=4;
    	sum+=n1[i];
	}
	printf("result of the game 2: %d\n",sum);
	int r=sum%10;
	int check;
	if(r==0)
		check=0;
	else
		check=r-10;

	if(check==n1[22])
		printf("approved");
		else
			printf("not approved");




}
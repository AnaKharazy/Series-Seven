
#include <stdio.h>

int main()
{
    printf("Precinct\tCondidate A\tCondidate B\tCondidate C\tCondidate D\n");
    printf("---------------------------------------------------------------------------------\n");
    printf("1\t\t  192\t\t48\t\t206\t\t37\n");
    printf("2\t\t  147\t\t90\t\t312\t\t21\n");
    printf("3\t\t  186\t\t12\t\t121\t\t38\n");
    printf("4\t\t  114\t\t21\t\t408\t\t39\n");
    printf("5\t\t  267\t\t13\t\t382\t\t29\n");

    int candidateA=192+147+186+114+267;
    int candidateB=48+90+12+21+13;
    int candidateC=206+312+121+408+382;
    int candidateD=37+21+38+39+29;
    int total=candidateA+candidateB+candidateC+candidateD;
    float candidateA2=(float)candidateA/total;
    candidateA2*=100;
    float candidateB2=(float)candidateB/total;
    candidateB2*=100;
    float candidateC2=(float)candidateC/total;
    candidateC2*=100;
    float candidateD2=(float)candidateD/total;
    candidateD2*=100;
    printf("candidate A: %d ,%f%% total arraye  \n",candidateA,candidateA2);
    printf("candidate B: %d ,%f%% total arraye  \n",candidateB,candidateB2);
    printf("candidate C: %d ,%f%% total arraye  \n",candidateC,candidateC2);
    printf("candidate D: %d ,%f%% total arraye  \n",candidateD,candidateD2);
    int T=0;
    if(candidateA2>=50)
    {
        printf("winning candidateA \n");
        T=1;
    }
    else if(candidateB2>=50)
    {
        printf("winning candidateB \n");
        T=1;
    }
    else if(candidateC2>=50)
    {
        printf("winning candidateC \n");
        T=1;
    }
    else if(candidateD2>=50)
    {
        printf("winning candidateD \n");
        T=1;
    }
    float max1,max2;
    if(T==0)
    {
        if(candidateA2>candidateB2 &&candidateA2>candidateC2 && candidateA2>candidateD2)
            max1=candidateA2;
        else if(candidateB2>candidateA2 && candidateB2>candidateC2 && candidateB2>candidateD2)
            max1=candidateB2;
        else if(candidateC2>candidateA2 && candidateC2>candidateB2 && candidateC2>candidateD2)
            max1=candidateC2;
        else if(candidateD2>candidateA2 && candidateD2>candidateB2 && candidateD2>candidateC2 )
            max1=candidateD2;

        if(max1==candidateA2)
        {
            if( candidateB2>candidateC2 && candidateB2>candidateD2)
                max2=candidateB2;
            else if( candidateC2>candidateB2 && candidateC2>candidateD2)
                max2=candidateC2;
            else if(candidateD2>candidateB2 && candidateD2>candidateC2 )
                max2=candidateD2;
        }
        else if(max2==candidateB2)
        {
            if( candidateA2>candidateC2 && candidateA2>candidateD2)
                max2=candidateA2;
            else if( candidateC2>candidateA2 && candidateC2>candidateD2)
                max2=candidateC2;
            else if(candidateD2>candidateA2 && candidateD2>candidateC2 )
                max2=candidateD2;
        }
        else if(max2==candidateC2)
        {
            if( candidateA2>candidateB2 && candidateA2>candidateD2)
                max2=candidateA2;
            else if( candidateB2>candidateA2 && candidateB2>candidateD2)
                max2=candidateB2;
            else if(candidateD2>candidateA2 && candidateD2>candidateB2 )
                max2=candidateD2;
        }
        else if(max2==candidateD2)
        {
            if( candidateA2>candidateB2 && candidateA2>candidateD2)
                max2=candidateA2;
            else if( candidateB2>candidateA2 && candidateB2>candidateC2)
                max2=candidateB2;
            else if(candidateC2>candidateA2 && candidateC2>candidateB2 )
                max2=candidateC2;
        }
        printf("top two candidates : %f , %f",max1,max2);

        return 0;
    }





}
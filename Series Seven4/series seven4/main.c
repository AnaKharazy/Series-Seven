#include <stdio.h>

int main()
{

    int age,weight;

    printf("\n enter your age: ");
    scanf("%d",&age);
    printf("\n enter your weight: ");
    scanf("%d",&weight);

    if((age == 20)&&(weight == 60))
    {
        printf("Exercise 2 hours a day - mountaineering once a week - volleyball or basketball twice a week");
    }else if((age == 20)&&(weight == 80))
    {
        printf("Exercise 4 hours a day - Mountaineering twice a week - Tennis a week 3 hours - Pool twice a week");
    }else if((age == 30)&&(weight == 60))
    {
        printf("Exercise 1 hour and a half a day - Mountaineering once a week - Pool twice a week - Light diet");
    }else if ((age == 30)&&(weight == 80))
    {
        printf("Exercise 1 hour and a half a day - Mountaineering once a week - Pool twice a week - Heavy diet");
    }else if((age == 40)&&(weight == 60))
    {
        printf("Exercise 1 hour a day - Mountaineering twice a month - Pool three times a week - Walking twice a week");
    }else if((age == 40)&&(weight == 80))
    {
        printf("Exercise 1 hour a day - Mountaineering three times a month - Pool three times a week - Walking every day");
    }else if((age == 50)&&((weight == 60)||(weight == 80)))
    {
        printf("Exercise 1 hour a day - Exercise 1 hour every day - Pool twice a week - Walk every day - Balanced diet");
    }else
    {
        printf("Exercise 1 hour a day - Exercise every day - Pool twice a week - Mountaineering once a week - Walking every day - Balanced diet");
    }



    return 0;
}
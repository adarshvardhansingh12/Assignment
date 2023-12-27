#include <stdio.h>

int main() {
    int hours,min,sec;
    int h1,min1,sec1;
    int h2,min2,sec2;
    printf("Use format hourse,minutes,seconds\n");
    printf("enter time1:");
    scanf("%d%d%d",&h1,&min1,&sec1);
    printf("enter time2:");
    scanf("%d%d%d",&h2,&min2,&sec2);

    int totalseconds1= h1*3600 +min1*60 +sec1;
    int totalseconds2= h2*3600 +min2*60 +sec2;
    sec=(totalseconds1 -totalseconds2);

    hours =sec/3600;
    min =(sec%3600)/60;
    sec =sec%60;
     if (sec < 0) {
        hours=-hours;
        min =-min;
        sec =-sec;
    }

    printf("The Time Difference %d:%d:%d",hours,min,sec);

    return 0;
}

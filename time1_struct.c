#include <stdio.h>
struct Time {
    int hours;
    int minutes;
    int seconds;
};    
struct Time addTime(struct Time t1, struct Time t2) // Function to add two times{ 
{
    struct Time result; 
    result.seconds = t1.seconds + t2.seconds;
    result.minutes = t1.minutes + t2.minutes + (result.seconds / 60);
    result.hours = t1.hours + t2.hours + (result.minutes / 60);
    result.seconds %= 60;
    result.minutes %= 60;
    return result;
}
int main() {
    struct Time time1, time2, sum;
    printf("Enter first time (hh:mm:ss): ");
    scanf("%d:%d:%d", &time1.hours, &time1.minutes, &time1.seconds);
    printf("Enter second time (hh:mm:ss): ");
    scanf("%d:%d:%d", &time2.hours, &time2.minutes, &time2.seconds);
    sum = addTime(time1, time2);
    printf("Sum of times = %02d:%02d:%02d\n", sum.hours, sum.minutes, sum.seconds);
    return 0;
}
// wap a c program to enter number from user of 5 digit and display all digits in reverse order without loop
// #include <stdio.h>
// int main() {
// int num;
// printf("please enter the 5 digits no:");
// scanf("%d",&num);
// int dig1=num%10;
// num=num/10;
// int dig2=num%10;
// num=num/10;
// int dig3=num%10;
// num=num/10;
// int dig4=num%10;
// num=num/10;
// int dig5=num%10;
// printf("the the no in reverse order is %d,%d,%d,%d,%d",dig1,dig2,dig3,dig4,dig5);
// return 0;
// }

// #include <stdio.h>
// int main() {
//     int num, digits;
//     printf("Enter a number (up to 5 digits):");
//     scanf("%d", &num);
//     digits = (num > 0) * (num < 10) * 1 +
//              (num >= 10) * (num < 100) * 2 +
//              (num >= 100) * (num < 1000) * 3 +
//              (num >= 1000) * (num < 10000) * 4 +
//              (num >= 10000) * (num < 100000) * 5;
//     printf("The number has %d digits.\n", digits);
//     return 0;
// }

// #include <stdio.h>
// #include <math.h>

// int main() {
//     int n, digits;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     n = abs(n); 
//     digits = (n == 0) ? 1 : (int)(log10(n) + 1); 
//     printf("The number of digits present in the number: %d\n", digits); 
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int c, f;
//     for (c = 0; c > -50; c--) {
//         f = (9 * c) / 5 + 32; 
//         if (c == f) {
//             break;
//         }
//     }
//     printf("The temperature where the value of Celsius and Fahrenheit becomes equal is %d\n", c);
//     return 0;
// }

// #include <stdio.h>
// int main(){
//     int a,m,s=0;
//     printf("Enter a number: ");
//     scanf("%d", &a);
//     for (int i = 0; i < a; i++)
//     {
//         m=a%10;
//         s=s+m;
//         a=a/10; 
//     }
//     printf("The sum of digits is %d",s);
// }

// #include <stdio.h>
// int main() {
//     int num, sum = 0;
//     printf("Enter a five-digit number: ");
//     scanf("%d", &num);
//     int dig1 = num / 10000;
//     int dig2 = (num / 1000) % 10;
//     int dig3 = (num / 100) % 10;
//     int dig4 = (num / 10) % 10;
//     int dig5 = num % 10;
//     sum = dig1 + dig2 + dig3 + dig4 + dig5;
//     printf("The digits are: %d, %d, %d, %d, %d\n", dig1, dig2, dig3, dig4, dig5);
//     printf("The sum of the digits is: %d\n", sum);
//     return 0;
// }

// Write a C program to perform swapping of two integers without using a third variable.
//  #include <stdio.h>
//     int main() {
//         int a, b;
//         printf("Enter two numbers: ");
//         scanf("%d %d", &a, &b);
//         printf("Before swapping: a = %d, b = %d\n", a, b);
//         a = a + b;
//         b = a - b;
//         a = a - b;
//         printf("After swapping: a = %d, b = %d\n", a, b);
//         return 0;
//     }

// #include<stdio.h>
// int main()
// {
//     int a,b,c,d,e,avg,per;
//     printf("Enter the marks of 5 subjects");
//     scanf("%d",&a);
//     scanf("%d",&b);
//     scanf("%d",&c);
//     scanf("%d",&d);
//     scanf("%d",&e);
//     avg=(a+b+c+d+e)/5;
//     per=(a+b+c+d+e)/10;
//     printf("The average is %d\n", avg);
//     printf("The percentage is %d", per);
// }

#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter a paisa");
    scanf("%d",&a);
    b=a%100;
    c=a/100;
    printf("%d paisa is equivalent to %d rupees and %d paisa\n", a, c, b);
    return 0;
}


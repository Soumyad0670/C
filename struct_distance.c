#include<stdio.h>
#include<math.h>
struct distance {
    int x1, x2;
};
int main() {
    struct distance d1, d2;
    printf("Enter the distances in km: ");
    scanf("%d %d", &d1.x1, &d2.x2);
    printf("Distance 1: %d km\n", d1.x1);
    printf("Distance 2: %d km\n", d2.x2);
    printf("Total distance: %d km\n", d1.x1 + d2.x2);
    return 0;
}
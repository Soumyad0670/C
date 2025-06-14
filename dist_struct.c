#include <stdio.h>
struct Distance {
    int kilometers;
    int meters;
};
struct Distance addDistances(struct Distance d1, struct Distance d2) {
    struct Distance result;
    result.meters = d1.meters + d2.meters;
    result.kilometers = d1.kilometers + d2.kilometers;
    if (result.meters >= 1000) {
        result.kilometers += result.meters / 1000;
        result.meters = result.meters % 1000;
    }
    return result;
}
int main() {
    struct Distance dist1, dist2, sum;
    printf("Enter first distance:\n");
    printf("Kilometers: ");
    scanf("%d", &dist1.kilometers);
    printf("Meters: ");
    scanf("%d", &dist1.meters);
    printf("\nEnter second distance:\n");
    printf("Kilometers: ");
    scanf("%d", &dist2.kilometers);
    printf("Meters: ");
    scanf("%d", &dist2.meters);
    sum = addDistances(dist1, dist2);
    printf("\nTotal Distance:\n");
    printf("%d kilometers %d meters\n", sum.kilometers, sum.meters);
    return 0;
}
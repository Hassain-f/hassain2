#include <stdio.h>
struct Point {
    int x;
    int y;
};
int main() {
    struct Point p1, p2;
    printf("Enter the x and y coordinates of the first point: ");
    scanf("%d %d", &p1.x, &p1.y);
    printf("Enter the x and y coordinates of the second point: ");
    scanf("%d %d", &p2.x, &p2.y);
    if (p1.x == p2.x && p1.y == p2.y) {
        printf("The two points are equal.\n");
    } else {
        printf("The two points are not equal.\n");
    }
    return 0;
}


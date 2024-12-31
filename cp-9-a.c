#include <stdio.h>

#include <math.h>

#define PI 3.14
int main() {
float radius, area;
 printf("radius: ");
 scanf("%f", &radius);
 area = PI * pow(radius, 2);
 printf("Area of the circle: %.2f square units\n", area);
 return 0;
}

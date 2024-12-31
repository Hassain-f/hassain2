#include <stdio.h>

enum Fruit {

 APPLE,
 BANANA,
 CHERRY
};
void printFruit(enum Fruit fruit) {
 switch(fruit) {
 case APPLE:
 printf("The fruit is Apple\n");
 break;
 case BANANA:
 printf("The fruit is Banana\n");
 break;
 case CHERRY:
 printf("The fruit is Cherry\n");
 break;
 default:
 printf("Unknown fruit\n");
 }
}
int main() {
 enum Fruit myFruit = BANANA;
 printFruit(myFruit);
 return 0;
}


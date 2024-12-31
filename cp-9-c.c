
#include <stdio.h>

enum direction {

 NORTH,
 EAST,
 SOUTH,
 WEST
};
int main()
{
 enum direction heading = NORTH;
 if (heading == NORTH)
 printf("You are heading North\n");
 else if (heading == EAST)
 printf("You are heading East\n");
 else if (heading == SOUTH)
 printf("You are heading South\n");
 else if (heading == WEST)
 printf("You are heading West\n");
 return 0;
}




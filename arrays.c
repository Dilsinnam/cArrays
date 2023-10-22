#include <stdio.h>
#include <stdlib.h>

int main() {
  int favNumbers[] = {15, 29, 06,
                      27, 20, 23}; /*to make an array, you do [] = {}*/
  int unknownNumbers[5]; /*array with unkown values, the 5 sets the amount of
                            values the array can hold*/
  unknownNumbers[0] = 27;
  favNumbers[3] = 62722; /*changing the value of index 3 in the array*/
  printf("%d\n", unknownNumbers[0]);
  printf("%d", favNumbers[3]); /*to access the array, call the array name and
                                  then use [] with the number you want to call.
                                  index allways starts at 0*/
  return 0;
}
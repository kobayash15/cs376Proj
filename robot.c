/*
 * robot.c
 *
 * A really great file that contains the supporting functions for
 * main() in the ~/robots example source for Software Engineering.
 *
 * @author Tanya L. Crenshaw
 * @author Nerissa Lemon
 * @author Ken Kobayashi
 * @since August 2013
 *
 */

#include "robot.h"

/**
 * robPrintMessage
 *
 * This function prints the message, "I really* love robots!"
 *
 * @param num the number of times the message should print the word
 * "really"
 *
 * @returns none 
 */
void robPrintMessage(int num)
{
  int i = 0;

  printf("Nerissa and Ken ");

  for(i; i < num; i++)
    {
      printf("really ");
    }

  printf("loves robots!\n");

  return;
}

/**
 * robPrintAscii
 *
 */
void robPrintAscii(void)
{
  int j;
 
 for( j = 0; j < 3; j++){
    int a;    
    for(a = 0; a < j; a++){
      printf("\t");
    }
    printf("    i_i    \n");
    for(a = 0; a < j; a++){
      printf("\t");
    }
    printf("   [>_d]   \n");
    for(a = 0; a < j; a++){
      printf("\t");
    }
    printf("  /|___|\\  \n");
    for(a = 0; a < j; a++){
      printf("\t");
    }
    printf("   d   b   \n"); 
  }

}

 


#include <stdio.h>
#include <string.h>

int TBD()
{
   printf("All those moments will be lost in time, like tears in rain.\n");
   printf("Time to die.\n");
   return 0;
}

int f(int x, int y, char* s)
{
   char buffer[6];
   strcpy(buffer, s);
   printf("Is the buffer long enough to hold %s?\n", s);
   printf("It would be an awful shame if something happened to my return address.\n");
   return x + y;
}

int main(int argc, char*argv[])
{
   int x = 0b1010101010;
   int y = 0b0101010101;
   f(x, y, argv[1]);
   printf("Not quite right.\n");
   return 0;
}
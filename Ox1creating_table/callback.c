#include "callback.h"

int callback(void *NotUsed, int number_of_arg, char **argv, char **azColName) 
{
   int i;
   for(i = 0; i<number_of_arg; i++) {
      printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
   }
   printf("\n");
   return 0;
}
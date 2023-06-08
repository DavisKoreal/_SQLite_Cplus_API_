#include "database_routines.h"
#include <stdio.h>
#include <string.h>
#include <sqlite3.h> 


int main(int argc, char* argv[]) 
{

   char* databasename = "test.db";

   /*opening database */
   sqlite3 *db = open_database(databasename);


   /* Create SQL statement */
   char sql[3000];
   int queryisokay = 0;
      do {

               printf("Please enter query: \n");
               fgets(sql, sizeof(sql), stdin);
               printf("The entered sql is: ");
               puts (sql);
               printf("Is this query okay? (1 for yes, 0 for no) \n");
               scanf("%d", &queryisokay);

         } while(!queryisokay);

   /* Execute SQL statement */
   querry_database(db, &sql[0]);

   /*closing database */
   close_database(db);
   return (0);
}

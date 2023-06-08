#include "querry_database.h"

void querry_database(sqlite3 *database, char *query)
{
   char * zErrMsg = 0;
   int rc;
   rc = sqlite3_exec(database, query, callback, 0, &zErrMsg);


   if( rc != SQLITE_OK )
      {
         fprintf(stderr, "SQL error: %s\n", zErrMsg);
         sqlite3_free(zErrMsg);
      } 
   else 
      {
         printf("The database has been queried succefully with all your queries \n");
      }
}
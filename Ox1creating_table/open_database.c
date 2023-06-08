#include "open_database.h"
/* 
@open_database : returns a pointer to the database
               : takes in database name as a parameter
*/

sqlite3* open_database(char database_name[])
{
   sqlite3 *db; 
   char *zErrMsg = 0;
   int rc;

   rc = sqlite3_open(database_name, &db);

   if( rc ) 
   {
      printf("Can't open database: %s\n", sqlite3_errmsg(db));
      return(0);
   }

   printf("Opened database successfully\n");
   return db;
}
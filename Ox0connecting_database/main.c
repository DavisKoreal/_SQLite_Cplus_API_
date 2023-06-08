// https://www.tutorialspoint.com/sqlite/sqlite_c_cpp.htm


#include "database_routines.h"

int main(int argc, char* argv[]) 
{
   char* databasename = "test.db";
   sqlite3 *db = open_database(databasename);
   sqlite3_close(db);
   return 0;
}
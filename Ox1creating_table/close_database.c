#include "close_database.h"

void close_database(sqlite3 *db)
{
   sqlite3_close(db);
}
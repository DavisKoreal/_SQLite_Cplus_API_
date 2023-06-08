#ifndef CLOSE_DATABASE_H
#define CLOSE_DATABASE_H

#include <stdio.h>
#include <string.h>
#include <sqlite3.h> 

void close_database(sqlite3 *database_name);

#endif // CLOSE_DATABASE.H
#ifndef OPEN_DATABASE_H
#define OPEN_DATABASE_H

#include <stdio.h>
#include <string.h>
#include <sqlite3.h> 

sqlite3 *open_database(char *database_name);

#endif // OPEN_DATABASE.H
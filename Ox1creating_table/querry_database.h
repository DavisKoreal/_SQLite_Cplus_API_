#ifndef QUERRY_DATABASE_H
#define QUERRY_DATABASE_H

#include <stdio.h>
#include <stdlib.h>
#include <sqlite3.h> 
#include "callback.h"

void querry_database(sqlite3 *database, char *query);

#endif


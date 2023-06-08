This is a repo that tracks the creation of a C++ API for calling SQLite databases

@connecting_database is a simple program that connects a c/c++ program to a database. Creates one if it is not available.

@creating_table is a subrepo that has a function for executing user inputted querries into a user defined database

@close_database: closes connection to database, takes pointer to database as a sole parameter
@open_database: opens a connection to a user defined database, takes name of database/path and a pointer
@querry_database: takes in pointer to database and querry and executes the querry, or rather, this function querries the database with a user defiend querry.
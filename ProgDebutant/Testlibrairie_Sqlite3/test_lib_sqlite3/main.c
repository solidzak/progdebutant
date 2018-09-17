#include <stdio.h>
#include <stdlib.h>
#include <sqlite3.h>

static int callback(void *NotUsed, int argc, char **argv, char **azColName) {
   int i;
   for(i = 0; i<argc; i++) {
      printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
   }
   printf("\n");
   return 0;
}
typedef int (*sqlite3_callback)(
   void*,    /* Data provided in the 4th argument of sqlite3_exec() */
   int,      /* The number of columns in row */
   char**,   /* An array of strings representing fields in the row */
   char**    /* An array of strings representing column names */
);
int main(int argc, char* argv[]) {
   sqlite3 *db;
   char *zErrMsg = 0;
   int rc;
   char *sql_creat;
   char *sql_insert;
   char *sql_select;

   /* Open database */
   rc = sqlite3_open("test_lib_sqlite3.db", &db);

   if( rc ) {
      fprintf(stderr, "Can't open database: %s\n", sqlite3_errmsg(db));
      return(0);
   } else {
      fprintf(stdout, "Opened database successfully\n");
   }

   /* Create SQL statement */
   sql_creat = "CREATE TABLE Contacts("  \
         "ID INTEGER  PRIMARY KEY AUTOINCREMENT," \
         "NOM           TEXT    NOT NULL," \
         "PRENOM       TEXT     NOT NULL," \
         "EMAIL        CHAR(50)," \
         "TEL         INT );";

   /* Create SQL statement */
    sql_insert = "INSERT INTO Contacts (NOM,PRENOM,EMAIL,TEL) "  \
            "VALUES ('Paul','tsubasa', 'paul@California.com', 0123654897 ); " \
            "INSERT INTO Contacts (NOM,PRENOM,EMAIL,TEL) "  \
            "VALUES ('Allen','ishizaki', 'allen@Texas.com', 015554878954872 ); "     \
            "INSERT INTO Contacts (NOM,PRENOM,EMAIL,TEL)" \
            "VALUES ('Teddy','jun', 'teddy@Norway.nrg', 2595687652 );" \
            "INSERT INTO Contacts (NOM,PRENOM,EMAIL,TEL)" \
            "VALUES ('Mark','nihon', 'Rich-Mond@pauvremond.pauvre ', 6554566841);";
    /* Create SQL statement */
    sql_select = "SELECT * from Contacts";


   /* Execute SQL statement */
   rc = sqlite3_exec(db,sql_select,callback, 0, &zErrMsg);

   if( rc != SQLITE_OK ){
   fprintf(stderr, "SQL error: %s\n", zErrMsg);
      sqlite3_free(zErrMsg);
   } else
   {
      fprintf(stdout, "Operation successfully done\n");
   }

//   if( rc != SQLITE_OK ){
//   fprintf(stderr, "SQL error: %s\n", zErrMsg);
//      sqlite3_free(zErrMsg);
//   } else
//   {
//      fprintf(stdout, "Table inserted successfully\n");
//   }

//   if( rc != SQLITE_OK ){
//   fprintf(stderr, "SQL error: %s\n", zErrMsg);
//      sqlite3_free(zErrMsg);
//   } else
//   {
//      fprintf(stdout, "Table selected successfully\n");
//   }
   sqlite3_close(db);
   return 0;
}

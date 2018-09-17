#include <stdio.h>
#include <stdlib.h>
#include <sqlite3.h>
#include<string.h>

int main()
{
    sqlite3 *db;        // database connection
    int rc;             // return code
    char *errmsg;
    sqlite3_stmt *stmt; // pointer to an error string

    /*
     * open SQLite database file test.db
     * use ":memory:" to use an in-memory database
     */
    rc = sqlite3_open("Database_contactv2", &db);
    if (rc != SQLITE_OK) {
        printf("ERROR opening SQLite DB in memory: %s\n", sqlite3_errmsg(db));
        goto out;
    }
    printf("opened SQLite handle successfully.\n");

    //char *sql_insert;
    //const char **ptr;
    //sql_insert = "INSERT INTO Contact (Nom,Prenom,Email,Tel) "  \
            "VALUES ('Paul','tsubasa', 'paul@California.com', '0123654897'); " \
            "INSERT INTO Contact (Nom,Prenom,Email,Tel) "  \
            "VALUES ('Allen','ishizaki', 'allen@Texas.com', '015554878954872' ); "     \
            "INSERT INTO Contact (Nom,Prenom,Email,Tel)" \
            "VALUES ('Teddy','jun', 'teddy@Norway.nrg', '2595687652' );" \
            "INSERT INTO Contact (Nom,Prenom,Email,Tel)" \
            "VALUES ('Mark','nihon', 'Rich-Mond@pauvremond.pauvre ', '6554566841');";


    sqlite3_prepare_v2(db, "CREATE TABLE Contact (Id INTEGER  PRIMARY KEY AUTOINCREMENT, Prenom TEXT, Nom TEXT, Email TEXT, Tel TEXT);", -1, &stmt,NULL);
    rc = sqlite3_step(stmt);
//    sqlite3_prepare_v2(db,sql_insert,strlen(sql_insert), &stmt,ptr);
//    rc = sqlite3_step(stmt);
    sqlite3_prepare_v2(db, "INSERT INTO  Contact (Prenom , Nom , Email , Tel ) VALUES ('jean joresseier','delarue','bidulechouette@chouette.com','0102010301028');", -1, &stmt, NULL);
    rc = sqlite3_step(stmt);
    sqlite3_prepare_v2(db, "INSERT INTO Contact (Prenom , Nom , Email , Tel ) VALUES ('jean joresseier','jai faim','j@chouette.com','0102010301028');", -1, &stmt, NULL);
    rc = sqlite3_step(stmt);
    sqlite3_prepare_v2(db, "INSERT INTO Contact (Prenom , Nom , Email , Tel ) VALUES ('gerrard','restos','gerer@chouette.com','1651651651');", -1, &stmt, NULL);
    rc = sqlite3_step(stmt);
    sqlite3_prepare_v2(db, "INSERT INTO Contact (Prenom , Nom , Email , Tel ) VALUES ('carrieros','dinass','erereqs@chouette.com','949846516');", -1, &stmt, NULL);
    rc = sqlite3_step(stmt);

        sqlite3_prepare_v2(db, "SELECT * FROM Contact;", -1, &stmt, NULL);

        //sqlite3_bind_int(stmt, 1, 16);


        while ( (rc = sqlite3_step(stmt)) == SQLITE_ROW)
        {
            printf("ID = %i | Prenom = %s | Nom = %s | Email = %s | Tel = %s\n", sqlite3_column_int(stmt, 0), sqlite3_column_text(stmt, 1),sqlite3_column_text(stmt,2),sqlite3_column_text(stmt,3),sqlite3_column_text(stmt,4));  /* 3 */
        }

    if (rc != SQLITE_DONE) {
        printf("ERROR inserting data: %s\n", sqlite3_errmsg(db));
        goto out;
    }

    sqlite3_finalize(stmt);

out:
    /*
     * close SQLite database
     */
    sqlite3_close(db);
    printf("database closed.\n");
}

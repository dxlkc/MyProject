#include "class.h"

int class_idIsExists(int id)
{
    MYSQL *res;
    MYSQL_ROW row;
    char class_query[100];

    sprintf(class_query,"select id from class where id=%d",id);
    mysql_real_query(&mysql,class_query,strlen(class_query));
    res = mysql_store_result(&mysql);
	if(row = mysql_fetch_row(&res))
    {
        return 1;
    }
    return 0;
}

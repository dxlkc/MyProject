#include "stu.h"

int stu_idIsExists(int id)
{
    MYSQL *res;
    MYSQL_ROW row;
    char stu_query[100];

    sprintf(stu_query,"select id from student where id=%d",id);
    mysql_real_query(&mysql,stu_query,strlen(stu_query));
    res = mysql_store_result(&mysql);
	if(row = mysql_fetch_row(res))
    {
        return 1;
    }
    return 0;
}

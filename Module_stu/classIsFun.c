#include "stu.h"

int classIsFun(int class_id)
{
    MYSQL *res;
    MYSQL_ROW row;
    char class_query[100];
    int now_chose;
    int limit;

    //取得now_chose字段的值
    sprintf(class_query,"select now_chose from class where id=%d",class_id);
    mysql_real_query(&mysql,class_query,strlen(class_query));
    res = mysql_store_result(&mysql);
	row = mysql_fetch_row(res);
    now_chose = atoi(row[0]);

    //取得chose_limit字段的值
    sprintf(class_query,"select chose_limit from class where id=%d",class_id);
    mysql_real_query(&mysql,class_query,strlen(class_query));
    res = mysql_store_result(&mysql);
	row = mysql_fetch_row(res);
    limit = atoi(row[0]);

    if(limit < now_chose+1)
    {
        return 1;
    }
    return 0;
}

#include "class.h"

void class_find_info(int id)
{
    MYSQL_RES *res;
    MYSQL_ROW row;

    char class_query[100],desc_query[100];
    int t,i;

    //课程信息 sql
    sprintf(class_query,"select * from class where id=%d",id);
    t = mysql_real_query(&mysql,class_query,strlen(class_query));
    if(t)
    {
        printf("failed to query:%s\n",mysql_error(&mysql));
    }
    //查看课程信息
    printf("\nclass information :\n");
    printf("id         class_name      type      class_time    credit    now_chose    chose_limit\n");
    res = mysql_store_result(&mysql);
    while(row = mysql_fetch_row(res))
    {
        for(i = 0; i<mysql_num_fields(res); i++)
        {
            printf("%-10s   ",row[i]);
        }
    }
    printf("\n\n");
}

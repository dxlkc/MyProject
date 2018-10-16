#include "class.h"

void class_delete_info(int id)
{
    char class_query[100];
    char chose_query[100];
    int f;
    //先删chose_class表对应的数据
    sprintf(chose_query,"delete from chose_class where class_id=%d",id);
    f = mysql_real_query(&mysql,chose_query,strlen(chose_query));
    if(f)
    {
        printf("failed to query:%s\n",mysql_error(&mysql));
    }

    sprintf(class_query,"delete from class where id=%d",id);
    f = mysql_real_query(&mysql,class_query,strlen(class_query));
    if(f)
    {
        printf("failed to query:%s\n",mysql_error(&mysql));
    }
    else
    {
        printf("\ndelete success!\n\n");
    }
}

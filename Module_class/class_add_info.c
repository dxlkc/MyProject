#include "class.h"

void class_add_info(int id,char name[20],char type[20],int time,double credit,int now_chose,int chose_limit)
{
    char class_query[100];
    int f;

    sprintf(class_query,"insert into class value (%d,'%s','%s',%d,%.1lf,%d,%d)",id,name,type,time,credit,now_chose,chose_limit);
    f = mysql_real_query(&mysql,class_query,strlen(class_query));
    if(f)
    {
        printf("failed to query:%s\n",mysql_error(&mysql));
    }
    else
    {
        printf("\nadd success!\n\n");
    }
}

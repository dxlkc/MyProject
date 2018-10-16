#include "stu.h"

/*删除完整学生信息*/
int stu_delete_info(int id)
{
    int f,t;                    //判断sql语句是否成功执行
    char stu_query[100];        //存放对student表的操作
    char chose_query[100];      //存放对chose_class表的操作

    sprintf(stu_query,"delete from student where id=%d",id);              // delete from student where id=
    sprintf(chose_query,"delete from chose_class where stu_id=%d",id);        //delete from chose_class where id=

    t=mysql_real_query(&mysql,chose_query,strlen(chose_query));        //mysql中使用触发器同时修改class中的信息
    if(t)
    {
        printf("failed to query:%s\n",mysql_error(&mysql));
    }
    else
    {
        f=mysql_real_query(&mysql,stu_query,strlen(stu_query));
        if(f)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
}

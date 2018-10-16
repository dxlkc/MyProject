#include "stu.h"

void stu_find_info(int id)
{
    MYSQL_RES *res;
    MYSQL_ROW row;
    char select_head[50] = "select * from";
    char stu_query[120];        //存放对student表的操作
    char class_query[120];      //存放对class表的操作
    int t,i;

    //对student表的操作
    strcpy(stu_query,select_head);
    sprintf(stu_query,"%s student where id=%d",stu_query,id);         //select * from student where id=
    t = mysql_real_query(&mysql,stu_query,strlen(stu_query));
    if(t)
    {
        printf("failed to query:%s\n",mysql_error(&mysql));
    }

    //查student表信息
	res = mysql_store_result(&mysql);
	row = mysql_fetch_row(res);
	if(NULL == row)
    {
        printf("\nThere is no such student!\n\n");
        return;
    }
    printf("\nid  name  total_credit :");
    for(i = 0; i<mysql_num_fields(res); i++)
    {
        printf("%s  ",row[i]);
    }
    printf("\n");

    //对class表的操作
    sprintf(class_query,"select class_name from chose_class,class where chose_class.stu_id=%d and chose_class.class_id=class.id",id);        //select class_name from chose_class,class where chose_class.stu_id=123 and chose_class.class_id=class.id
    t = mysql_real_query(&mysql,class_query,strlen(class_query));
    if(t)
    {
        printf("failed to query:%s\n",mysql_error(&mysql));
    }

    //查学生选的课
    res = mysql_store_result(&mysql);
    printf("\nElective information : ");
    while(row = mysql_fetch_row(res))
    {
        for(i = 0; i<mysql_num_fields(res); i++)
        {
            printf("%s  ",row[i]);
        }
    }
    printf("\n\n");
}

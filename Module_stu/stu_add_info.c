#include "stu.h"

/*增加学生信息*/
void stu_add_info(int id, char name[20], int class_id)
{
    int f,t;
    char stu_query[100];        //存放对student表的操作
    char chose_query[100];      //存放对chose_class表的操作

    sprintf(stu_query,"insert into student(id,name) value (%d,'%s')",id,name);          //insert into student(id,name) value (1613902016,'lkc');
    t=mysql_real_query(&mysql,stu_query,strlen(stu_query));

    if(classIsFun(class_id))
    {
        printf("\nCan't add this class , the number of elective courses has reached the upper limit !\n\n");
        return;
    }

    sprintf(chose_query,"insert into chose_class(stu_id,class_id) value (%d,%d)",id,class_id);       //insert into chose_class(stu_id,class_id) value (1613902016,1);
    f=mysql_real_query(&mysql,chose_query,strlen(chose_query));
    if(f)
    {
        printf("failed to query:%s\n",mysql_error(&mysql));
    }
    else
    {
        printf("\nadd success!\n\n");
    }
}

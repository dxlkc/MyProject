#include "stu.h"

/*ɾ������ѧ����Ϣ*/
int stu_delete_info(int id)
{
    int f,t;                    //�ж�sql����Ƿ�ɹ�ִ��
    char stu_query[100];        //��Ŷ�student��Ĳ���
    char chose_query[100];      //��Ŷ�chose_class��Ĳ���

    sprintf(stu_query,"delete from student where id=%d",id);              // delete from student where id=
    sprintf(chose_query,"delete from chose_class where stu_id=%d",id);        //delete from chose_class where id=

    t=mysql_real_query(&mysql,chose_query,strlen(chose_query));        //mysql��ʹ�ô�����ͬʱ�޸�class�е���Ϣ
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

#include "stu.h"

void stu_delete_select()
{
    char chose_query[100];
    int num_class;
    int id;

    printf("please input student's id :");
    scanf("%d",&id);
    printf("please input the number of classes :");
    scanf("%d",&num_class);

    int i;
    for(i=0; i<num_class; i++)
    {
        int class_id;

        printf("please input class id :");
        scanf("%d",&class_id);

        sprintf(chose_query,"delete from chose_class where stu_id=%d and class_id=%d",id,class_id);    // delete from chose_class where stu_id=id and class_id=class_id
        int f=mysql_real_query(&mysql,chose_query,strlen(chose_query));
        if(f)
        {
            printf("failed to query:%s\n",mysql_error(&mysql));
        }
        else
        {
            printf("\ndelete success!\n\n");
        }
    }

	char log[100];
	sprintf(log,"date >> ../log/mylog.log");
	system(log);
	sprintf(log,"echo 'alter stu ID:%d  :  delete %d select class information' >> ../log/mylog.log",id,id);
	system(log);
}

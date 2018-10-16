#include "stu.h"

 void stu_add_select()
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

        //判断课程人数是否已满  若满则continue
        if(classIsFun(class_id))
        {
            printf("\nCan't add this class , the number of elective courses has reached the upper limit !\n\n");
            continue;
        }

        sprintf(chose_query,"insert ignore into chose_class value (%d,%d)",id,class_id);                       //insert into chose_class value()
        int f=mysql_real_query(&mysql,chose_query,strlen(chose_query));
        if(f)
        {
            printf("failed to query:%s\n",mysql_error(&mysql));
        }
        else
        {
            printf("\nadd success!\n\n");
        }
    }

	char log[100];
	sprintf(log,"date >> ../log/mylog.log");
	system(log);
	sprintf(log,"echo 'alter stu ID:%d  :  add select class' >> ../log/mylog.log",id);
	system(log);
 }

#include "stu.h"

void stu_add()
{
    int id;            //学号
    int num_class;      //选课数量
    char name[20];     //姓名
	

    printf("please input the id :");
    scanf("%d",&id);

    if(stu_idIsExists(id))
    {
        printf("\nThis ID already exists !\n\n");
        return;
    }

    printf("please input name :");
    scanf("%s",name);
    printf("please input the number of classes :");
    scanf("%d",&num_class);

    int i;
    for(i=0; i<num_class; i++)
    {
        int class_id;

        printf("please input class id :");
        scanf("%d",&class_id);

        stu_add_info(id,name,class_id);
    }

	char log[100];
	sprintf(log,"date >> ../log/mylog.log");
	system(log);
	sprintf(log,"echo 'alter stu ID:%d  :  add %d information' >> ../log/mylog.log",id,id);
	system(log);
}

#include "stu.h"

void stu_delete()
{
    int id;
    printf("\nplease input student's id : ");
    scanf("%d",&id);
    if(stu_delete_info(id))
    {
        printf("delete success!\n\n");
    }
    else
    {
        printf("delete failed!\n\n");
    }

	char log[100];
	sprintf(log,"date >> ../log/mylog.log");
	system(log);
	sprintf(log,"echo 'alter stu ID:%d  :  delete %d information' >> ../log/mylog.log",id,id);
	system(log);
}

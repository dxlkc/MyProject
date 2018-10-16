#include "stu.h"

void stu_find()
{
    int id;
    printf("Please input the id of the student you need to find :");
    scanf("%d",&id);

    stu_find_info(id);

    char log[100];
    sprintf(log,"date >> ../log/mylog.log");
    system(log);
    sprintf(log,"echo 'find stu ID:%d  :  find %d information' >> ../log/mylog.log",id,id);
    system(log);
}

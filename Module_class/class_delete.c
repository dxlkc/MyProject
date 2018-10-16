#include "class.h"

void class_delete()
{
    int id;

    printf("please input class id :");
    scanf("%d",&id);

    class_delete_info(id);

    char log[100];
    sprintf(log,"date >> ../log/mylog.log");
    system(log);
    sprintf(log,"echo 'alter class ID:%d  :  delete %d information' >> ../log/mylog.log",id,id);
    system(log);
}

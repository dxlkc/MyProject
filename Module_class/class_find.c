#include "class.h"

void class_find()
{
    int id;

    printf("please input class id :");
    scanf("%d",&id);

    class_find_info(id);

    char log[100];
    sprintf(log,"date >> ../log/mylog.log");
    system(log);
    sprintf(log,"echo 'find class ID:%d  :  find %d information' >> ../log/mylog.log",id,id);
    system(log);
}

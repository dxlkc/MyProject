#include "class.h"

void class_add()
{
    int id,class_time,now_chose,chose_limit;
    char class_name[20],type[20];
    double credit;

    printf("please input class id :");
    scanf("%d",&id);

    /*if(class_idIsExists(id))
    {
        printf("\nThis ID already exists !\n\n");
        return;
    }*/

    printf("please input class name :");
    scanf("%s",class_name);
    printf("please input class type(required/elective) :");
    scanf("%s",type);
    printf("please input class class_time :");
    scanf("%d",&class_time);
    printf("please input class credit :");
    scanf("%lf",&credit);
    printf("please input class now_chose :");
    scanf("%d",&now_chose);
    printf("please input class chose_limit :");
    scanf("%d",&chose_limit);

    class_add_info(id,class_name,type,class_time,credit,now_chose,chose_limit);

    char log[100];
    sprintf(log,"date >> ../log/mylog.log");
    system(log);
    sprintf(log,"echo 'alter class ID:%d  :  add %d information' >> ../log/mylog.log",id,id);
    system(log);
}

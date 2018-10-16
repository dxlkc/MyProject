#include "class.h"

void class_alter_info(int id)
{
    char class_query[100]="update class set ";
    char field[20];
    char value[20];
    char tmp[12];
    int f;
    sprintf(tmp,"%d",id);

    printf("\nplease input the field that need modification : ");
    scanf("%s",field);
    printf("\nplease input new value of the field : ");
    scanf("%s",value);

    strcat(class_query,"id=");                // update class set id=id,field=value where id=id
    strcat(class_query,tmp);
    strcat(class_query,",");
    strcat(class_query,field);
    strcat(class_query,"=");
    strcat(class_query,value);
    strcat(class_query," where id=");
    strcat(class_query,tmp);

    f = mysql_real_query(&mysql,class_query,strlen(class_query));
    if(f)
    {
        printf("failed to query:%s\n",mysql_error(&mysql));
    }
    else
    {
        printf("\nalter success!\n\n");
    }

    char log[100];
    sprintf(log,"date >> ../log/mylog.log");
    system(log);
    sprintf(log,"echo 'alter class ID:%d  :  change field:%s information' >> ../log/mylog.log",id,value);
    system(log);
}

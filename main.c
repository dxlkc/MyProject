#include "class.h"
#include "stu.h"

/*连接到数据库*/
void connection(const char* host, const char* user, const char* password, const char* database)
{
	mysql_init(&mysql);
	if(mysql_real_connect(&mysql,host,user,password,database,0,NULL,0))
    {
        printf("Connection success!\n");
    }
    else
    {
        printf("Connection failed!\n");
        printf("Insert error %d: %s\n", mysql_errno(&mysql), mysql_error(&mysql));
        exit(1);
    }
}

int main()
{
	connection("localhost","root","123","test");

	while(1)
	{
		printf("------Please select system------\n");
		printf("   1.student system\n");
		printf("   2.class system\n");
		printf("   3.quit\n\n");
		int id;
		printf("please input the number : ");
		scanf("%d",&id);

		switch(id)
		{
			case 1: 
				stu_system();
				break;
			case 2:
				class_system();
				break;
			case 3:
				exit(1);
		}
	}
	return 0;
}

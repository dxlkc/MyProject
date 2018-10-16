#include "stu.h"

void stu_alter()
{
    while(1)
    {
        int n;             //用户输入的序号

        alter_menu();

        printf("\n\nplease input the number : ");
        scanf("%d",&n);

        switch(n)
        {
            case 1:                //增加选课
                stu_add_select();
                break;
            case 2:                //删除某一选课
                stu_delete_select();
                break;
            case 3:
                return;
        }
    }
}

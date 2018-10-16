#include "stu.h"

void stu_system()
{
    while(1)
    {
        int n;             //用户输入的序号

        stu_menu();

        printf("\n\nplease input the number : ");
        scanf("%d",&n);

        switch(n)
        {
            case 1:
                stu_add();
                break;
            case 2:
                stu_alter();
                break;
            case 3:
                stu_delete();
                break;
            case 4:
                stu_find();
                break;
            case 5:
                return;
        }
    }
}

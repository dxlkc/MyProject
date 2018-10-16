#include "class.h"

void class_system()
{
    while(1)
    {
        int n;             //选择序号

        class_menu();

        printf("\n\nplease input the number : ");
        scanf("%d",&n);

        switch(n)
        {
            case 1:
                class_add();
                break;
            case 2:
                class_alter();
                break;
            case 3:
                class_delete();
                break;
            case 4:
                class_find();
                break;
            case 5:
                return;
        }
    }
}

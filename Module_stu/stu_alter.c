#include "stu.h"

void stu_alter()
{
    while(1)
    {
        int n;             //�û���������

        alter_menu();

        printf("\n\nplease input the number : ");
        scanf("%d",&n);

        switch(n)
        {
            case 1:                //����ѡ��
                stu_add_select();
                break;
            case 2:                //ɾ��ĳһѡ��
                stu_delete_select();
                break;
            case 3:
                return;
        }
    }
}

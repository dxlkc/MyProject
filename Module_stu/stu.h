#ifndef STU_H_INCLUDED
#define STU_H_INCLUDED

#include "pub.h"

void stu_system();
void stu_menu();
void stu_add();
void stu_delete();
void stu_find();
void stu_menu();
void stu_alter();
int stu_delete_info(int id);
void stu_add_info(int id, char name[20], int class_id);
void stu_find_info(int id);
void alter_menu();
void stu_add_select();
int classIsFun(int class_id);
int stu_idIsExists(int id);

#endif // STU_H_INCLUDED

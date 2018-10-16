#!/bin/bash 

log=../../mylog.log

#统计用户修改学生和课程信息的次数
stu_count=0
for info in `cat $log | grep "alter stu" | awk '{print $1}'`
do
	stu_count=$[stu_count+1]
done

class_count=0
for info in `cat $log | grep "alter class" | awk '{print $1}'`
do
	class_count=$[class_count+1]
done

echo "alter student times : $stu_count"
echo "alter class times : $class_count"


echo 
#给定学号，查找是否存在对该学号信息的修改记录
read -p "please input student's id that need to find : " stu_id

count=`cat $log | grep "alter stu ID:$stu_id" | wc -l`

if [ $count -ge 1 ];then
	echo "exist!"
	cat $log | grep "alter stu ID:$stu_id"
else
	echo "nothing!"
fi


echo
#给定课程号，查找是否存在对该课程信息的修改记录
read -p "please input class's id that need to find : " class_id

count=`cat $log | grep "alter class ID:$class_id" | wc -l`

if [ $count -ge 1 ];then
	echo "exist!"
	cat $log | grep "alter class ID:$class_id"
else
	echo "nothing!"
fi



#define _CRT_SECURE_NO_WARNINGS 1
/*
set_difference 算法 求两个 set 集合的差集
注意:两个集合必须是有序序列
@param beg1 容器 1 开始迭代器
@param end1 容器 1 结束迭代器
@param beg2 容器 2 开始迭代器
@param end2 容器 2 结束迭代器
@param dest 目标容器开始迭代器
@return 目标容器的最后一个元素的迭代器地址
*/
//set_difference(iterator beg1, iterator end1, iterator beg2, iterator end2,
	//iterator dest)
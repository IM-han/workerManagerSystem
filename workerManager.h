#pragma once
#include<iostream>
#include<fstream>
using namespace std;

#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

//宏常量
#define FILENAME "empFile.txt"


//管理类
//类声明
class WorkerManager {
public:
	//构造函数
	WorkerManager();

	//析构函数
	~WorkerManager();

	//展示菜单
	void show_Menu();

	//退出系统成员函数
	void exitSystem();

	//记录文件中人数个数
	int m_EmpNum;

	//员工数组的指针
	Worker** m_EmpArray;

	//增加职工
	void Add_Emp();

	//保存到文本
	void save();

	//标志文件是否为空
	bool m_FileIsEmpty;

	//统计人数
	int get_EmpNum();

	//初始化员工
	void init_Emp();

	//显示职工
	void show_Emp();

	//删除职工
	void del_Emp();

	//判断职工是否存在
	int isExist(int id);

	//修改职工
	void mod_Emp();

	//查找职工
	void find_Emp();

	//排序
	void sort_Emp();

	//清空文件
	void clean_Emp();
};

//

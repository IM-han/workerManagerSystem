#pragma once
#include<iostream>
#include<fstream>
using namespace std;

#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

//�곣��
#define FILENAME "empFile.txt"


//������
//������
class WorkerManager {
public:
	//���캯��
	WorkerManager();

	//��������
	~WorkerManager();

	//չʾ�˵�
	void show_Menu();

	//�˳�ϵͳ��Ա����
	void exitSystem();

	//��¼�ļ�����������
	int m_EmpNum;

	//Ա�������ָ��
	Worker** m_EmpArray;

	//����ְ��
	void Add_Emp();

	//���浽�ı�
	void save();

	//��־�ļ��Ƿ�Ϊ��
	bool m_FileIsEmpty;

	//ͳ������
	int get_EmpNum();

	//��ʼ��Ա��
	void init_Emp();

	//��ʾְ��
	void show_Emp();

	//ɾ��ְ��
	void del_Emp();

	//�ж�ְ���Ƿ����
	int isExist(int id);

	//�޸�ְ��
	void mod_Emp();

	//����ְ��
	void find_Emp();

	//����
	void sort_Emp();

	//����ļ�
	void clean_Emp();
};

//

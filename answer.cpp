//main�ļ�
//ʵ�ֺ����ļ�
//Ϊ ȫѡ��Ԫ��˹��ȥ�������Է������ �ļ���
//2018-09-13

#include"linearEqu.h"                                 //�����ඨ��ͷ�ļ�
#include<iostream>
using namespace std;

int main()                                             //������
{
	double a[] = {                                     //����ϵ�о���
		0.2368, 0.2471, 0.2568, 1.2671,
		0.1968, 0.2071, 1.2168, 0.2271,
		0.1581, 1.1675, 0.1768, 0.1871,
		1.1161, 0.1254, 0.1397, 0.1490 };

	double b[] = { 1.8471, 1.7471, 1.6471, 1.5471 };   //�����Ҷ���

	LinearEqu equ(4);                                  //����һ����Ԫ���������
	equ.setLinearEqu(a, b);                             //���÷�����
	equ.printLinearEqu();
	if (equ.solve())                                   //����solve������ⷽ��

		equ.printSolution();                           //������̽�
	else
		cout << "Fail" << endl;
	int names = 0;
	cin >> names;

	return 0;


}

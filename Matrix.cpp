//Matrix.cpp
//Matrix���к�����ʵ��
//Ϊ ȫѡ��Ԫ��˹��ȥ�������Է������ �ļ���
//2018-09-13

#include"matrix.h"   //������Ķ���ͷ�ļ�
#include<iostream>
using namespace std;

void Matrix::setMatrix(const double* values){     //���þ���
	for (int i = 0; i < size*size; i++)
		elements[i] = values[i];                  //�����Ա����ֵ
}

Matrix::Matrix(int size/* =2*/) :size(size){      //����Matrix�Ĺ��캯��
	elements = new double[size*size];             //��̬�����ڴ�
}

Matrix::~Matrix(){
	delete[] elements;
}

void Matrix::printMatrix() const{               //��ӡ�����Ԫ��

	cout << "The Matrix is : " << endl;          //�����ʾ��Ϣ
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)          //�������
		cout << element(i, j) << "	";          //����matrix��ĳ�Ա����element
		
		cout << endl;                           //ÿ�������������
	}	
}

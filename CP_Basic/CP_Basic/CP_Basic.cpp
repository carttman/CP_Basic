#include <iostream>
#define NUMBER 100


int main() {


	int Number1; //��������
	Number1 = 10;// �ʱⰪ ����

	int Number2 = 10; //���� ���� �� �ʱ�ȭ
	int Number3 = 1, Number4 = 2;
	Number3 = 5;

	//�ɺ��� ���(Constant) �����Ұ����ϰ� ����� 
	const int Number5 = 10;

	//������ Ÿ�� - ���� ������ Ÿ�� - ������,�Ǽ���
	// ������ Ÿ��(int:integer)
	int Num1 = 10;
	short Num2 = 10;
	long Num3 = 10;


	//�Ǽ��� Ÿ��(float)
	float Num10 = 10.4544f;
	double Num11 = 1.234;

	//���ڵ����� : ����(1��), ���ڿ�(2�� �̻�)
	// char : character
	// char Ÿ�� ���� ǥ�� = '' ���
	// ���ڿ� :""���


	char Letter = 'a';


	//bool Ÿ�� ������
	//��/���� ���� : True/False, Tes/No, On/off
	bool Condition = true;

	//auto ���� Ű����
	auto AutoNum = 10;

	cout << Number1 << std::endl;
}
#include<iostream>

using namespace std;
int main()
{
	//array �迭
	//int Korean[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	//Korean[0] = 2;
	//int english = 0;
	//int mathmatics = 0;
	
	int Sum = 0;

	//memory = ���� == ��������
	//1-100���� ���� ���ϼ���
	// for() �迭 Ž��(0 -100 <)
//for() ���� ���ϰų� ���ų� 1 - 100 <=
	for (int i = 1; i <= 100; ++i )
	{
		//cout << Sum[n] << endl;
		Sum = Sum + i;
	}
	cout << Sum << endl;
	//������� �� ����غ�����

	return 0;

}
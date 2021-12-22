#include<iostream>

using namespace std;
int main()
{
	//array 배열
	//int Korean[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	//Korean[0] = 2;
	//int english = 0;
	//int mathmatics = 0;
	
	int Korean[100] = { 0, };
	for (int i = 0; i < 100; ++i)
	{
		Korean[i] = i + 1;
	}
	
	for (int i = 0; i < 100; ++i)
	{
		cout << Korean[i] = << ",";
	}

//주석을 달았습니다


	//1- 100
	//1-100 짝수
	//1-100 홀수
	//1-100 3의 배수
	//if 안쓰고






	int Sum = 0;

	//-1+2-3+4-5......+100 
	//memory = 변수 == 변수선언
	//1-100까지 합을 구하세요
	// for() 배열 탐색(0 -100 <)
	//for() 숫자 더하거나 뺴거나 1 - 100 <=
	for (int i = 1; i <= 100; ++i )
	{
		//cout << Sum[n] << endl;
		Sum = Sum + i;
	}
	cout << Sum << endl;
	//순서대로 다 출력해보세요

	return 0;

}
#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
nazad:
	int N;
	cout << "�������� �������" << endl;
	cin >> N;
	if (N == 1)
	{/*1.	�������� ������� f(int& h, int& m, int& s, int sec), ������� ��������� ���������� ������,
	 ��������� � ������ ���, � ���������� ��� ����� ���������� (����, ������ � �������)*/
		int sec;
		cout << "������� ���������� ��������� ������ � ������ ���" << endl;
		cin >> sec;
		int h = sec / 3600;
		int m = (sec % 3600) / 60;
		int s = (sec % 3600) % 60;
		if (sec > 3599)
		{
			cout << "����: " << h << " ������: " << m << " ������: " << s << endl;
		}
		else if ((sec > 59) && (sec < 3600))
		{
			cout << "������: " << m << " ������: " << s << endl;
		}
		else if (sec < 60)
		{
			cout << "������: " << s << endl;
		}
	}
	else if (N == 2)
	{
		/*2.	�������� ������� int f(int x), ������� ��������� ����� �������� (�� ������ ���� ������) � ���������� ����� � �������� �������� ����.
		��������, ����������� ����� 7631, ������������ ����� 1367*/
		int x;
		cout << "������� ����� x" << endl;
		cin >> x;
		int q = x / 10000;
		int w = ((x / 1000) % 10) * 10;
		int e = ((x / 100) % 10) * 100;
		int r = ((x / 10) % 10) * 1000;
		int t = (x % 10) * 10000;
		int obrat = q + w + e + r + t;
		if ((x > 0) && (x < 100000))
		{
			cout << "����� � �������� ��������: " << obrat << endl;
		}
	}
	else if (N == 3)
	{
		/*3.	��������� � ����� ��� �����, ������� ��������� �������� ����� ������� � ������ ������.
		��������, ������ �� ��������� ����������� ����� ����� �������� �����������: 12321, 55555, 45554 � 11611.
		��������������: ��� �������� �� ������.
		�������� ������� bool f(int N), ������� ����������, �������� �� ����������� ����� ����� N �����������*/

		int x;
		cout << "������� ����������� �����:" << endl;
		cin >> x;
		int q = x / 10000;
		int w = ((x / 1000) % 10);
		int r = ((x / 10) % 10);
		int t = (x % 10);
		if ((x>9999) && (x<100000) && (q == t) && (w == r))
		{
			cout << "����� �������� �����������" << endl;
		}
		else if ((x < 9999) || (x > 100000))
		{
			cout << "����� �� �����������" << endl;
		}
		else
		{
			cout << "����� �� �������� �����������" << endl;
		}
	}
	else if (N == 4)
	{
		/*4.	�������, ��� ����� ����� �������� ����������� ������, ���� ��� �����������, ������� 1 (�� �� ���� �����) � ����� ���� ��� �����.
		��������, 6 � ����������� �����, ��� ��� 6=1+2+3. �������� ������� bool f(int n), ������� ����������, �������� �� �� �������� n ����������� ������. ����������� ��� ������� � ���������, ������� ���������� � �������� ��� ����������� ����� � ��������� �� 1 �� 1000.*/
		int p = 0;
		int j;
		int x;
		int i;
		for (j = 6; j <= 1000; j++)
		{
		
			for (i = 1; i < j; i++)
			{
				if (j%i == 0)
					p += i;
			}
			if (p == j)
				cout << "�����" << j << " �����������" << endl;
			p = 0;
		}
	}
	else if (N == 5)
	{
		/*5.	�������� ���������, ������� � ������� ������� rand() ������ ������ � �������� �� 2 �� 5.
		� ���� ��������� ����������� ����� ����� ��� ��������� 2, ������ ��� ��������� 3, � �.�. ����������� �������� switch.*/
		srand(time(NULL));
		int x = rand() % 4 + 2;
		cout << "������" << x << endl;
		switch (x)
		{
		case 2:
			cout << "����" << endl;
			break;
		case 3:
			cout << "�����" << endl;
			break;
		case 4:
			cout << "������" << endl;
			break;
		case 5:
			cout << "�������" << endl;
		default:
			break;
		}

	}
	else if (N == 6)
	{
		/*����� �� ���� ������� � ����� ����� 15 �����, ����� �� 10 ������� ����� 125 �����, ����� �� 60 ������� ����� 440 �����.
		�������� ��������� ��������� n �������. ����������, ������� ������� ������� ���� �� ������ ����������, ����� ��������� ���������� ���������� ������� ���� �� ������ n,
		� ����� ��������� ������������� ������� � ����������. ������� ������: ���������� ������� n. �������� ������ � ��� ����� �����, ������ ������������ ���������� ������� �� 1,
		�� 10, �� 60 �������. ��������, ��� ����� 129 ��������� ������ ������� 0 1 2 (2 ������ �� 60 ������� � 1 ����� �� 10 �������).*/
		int n;
		cout << "����������� ����������� ��������" << endl;
		cin >> n;
		int st = n / 60;
		int sh = ((n % 60) / 10);
		int od = ((n % 60) % 10);
		int obsh = st * 440 + sh * 125 + od * 15;
		cout << "������ �� 60 �������:" << st << endl << "������ �� 10 �������:" << sh << endl << "��������� ������:" << od << endl << "���� ���������:" << obsh << " �����" << endl;
	}
	else if (N == 7)
	{
		/*7.	������ ���������� ������ ��� ������� ��������� �������: 1 ������� - 15 �����, 5 ������� - 70 �����, 10 ������� - 125 �����, 20 ������� - 230 �����, 60 ������� - 440 �����.
		���� ��� ������-�� ������� n ���������� ��������� �������� ������������ ������� ���������� ���������, ���������� ������� �� ���������� �������, ������� ���� ������� ����� �������.*/
		int n;
		cout << "����������� ����������� ��������" << endl;
		cin >> n;
		unsigned int st = n / 60;
		unsigned int sh = ((n % 60) / 20);
		unsigned int de = (((n % 60) % 20) / 10);
		unsigned int py = ((((n % 60) % 20) % 10) / 5);
		unsigned int od = ((((n % 60) % 20) % 10) % 5);
		unsigned long long int obsh = st * 440 + sh * 230 + de * 125 + py * 70 + od * 15;
		cout << "������ �� 60 �������:" << st << endl;
		cout << "������ �� 20 �������:" << sh << endl;
		cout << "������ �� 10 �������:" << de << endl;
		cout << "������ �� 5 �������:" << py << endl;
		cout << "��������� ������:" << od << endl;
		cout << "���� ���������:" << obsh << " �����" << endl;
	}
	goto nazad;
	system("cls");
}
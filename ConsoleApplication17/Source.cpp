#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <time.h>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(0));
	int zadanie;
	do
	{
		cout << "������� ����� �������: ";
		cin >> zadanie;
		switch (zadanie)
		{
		case 1:
		{
			system("cls");
			cout << "������� 1." << endl;
			cout << "��� ������������� ���������� ������ 10x10. ����� ����� ���������  ������ ������." << endl;
			cout << "�������:" << endl;
			int a[10][10], sum;
			for (int i = 0; i < 10; i++)
			{
				for (int j = 0; j < 10; j++)
				{
					a[i][j] = 10 + rand() % 90;
					cout << a[i][j] << " ";
				}
				cout << endl;
			}
			for (int i = 0; i < 10; i++)
			{
				sum = 0;
				for (int j = 0; j < 10; j++)
				{
					sum += a[i][j];
				}
				cout << "����� �� " << i << " ������ = " << sum << endl;
			}
			break;
		}
		case 2:
		{
			system("cls");
			cout << "������� 2." << endl;
			cout << "��� ������������� ���������� ������ 4x4. ����� ������ � ���������� ������ ���������" << endl;
			cout << "�������:" << endl;
			int a[4][4], sum, minsum = 10000, isum = 0;
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 4; j++)
				{
					a[i][j] = 10 + rand() % 90;
					cout << a[i][j] << " ";
				}
				cout << endl;
			}
			for (int i = 0; i < 4; i++)
			{
				sum = 0;
				for (int j = 0; j < 4; j++)
				{
					sum += a[i][j];
				}
				cout << "����� �� " << i << " ������ = " << sum << endl;
				if (sum < minsum)
				{
					minsum = sum;
					isum = i;
				}
			}
			cout << "���������� ����� = " << minsum << " - � " << isum << " ������." << endl;
			break;
		}
		case 3:
		{
			system("cls");
			cout << "������� 3." << endl;
			cout << "���� ������������� �������  6x8. ����� ������������ ������������� ��������� ������� �������." << endl;
			cout << "�������:" << endl;
			int a[6][8], proizv = 1;
			for (int i = 0; i < 6; i++)
			{
				for (int j = 0; j < 8; j++)
				{
					a[i][j] = -20 + rand() % 40;
					cout << a[i][j] << " ";
				}
				cout << endl;
			}
			for (int i = 0; i < 6; i++)
			{
				if (a[i][0] > 0)
					proizv *= a[i][0];
			}
			cout << "������������ ������������� ��������� ������� ������� = " << proizv << endl;
			break;
		}
		case 4:
		{
			system("cls");
			cout << "������� 4." << endl; //�� ���� ������ ����� �����
			cout << "��������� ���������, ������� ��������� ���������� ������� ������� n ������������ ������� 1, 2, 3, .. ., n2, ��������� �� � ��� '�� �������' �� ������� �������." << endl;
			cout << "�������:" << endl;
			int const n = 5;
			int A[n][n];
			int i = 1, j, k, p = n / 2;
			for (k = 1; k <= p; k++)
			{
				for (j = k - 1; j < n - k + 1; j++)
					A[k - 1][j] = i++;
				for (j = k; j < n - k + 1; j++)
					A[j][n - k] = i++;
				for (j = n - k - 1; j >= k - 1; --j)
					A[n - k][j] = i++;
				for (j = n - k - 1; j >= k; j--)
					A[j][k - 1] = i++;
			}
			if (n % 2 == 1)
				A[p][p] = n*n;
			for (i = 0; i < n; i++)
			{
				for (j = 0; j < n; j++)
				{
					if (A[i][j] < 10)
						cout << "0" << A[i][j] << " ";
					else
						cout << A[i][j] << " ";
				}
				cout << endl;
			}
			break;
		}
		case 5:
		{
			system("cls");
			cout << "������� 5." << endl;
			cout << "��� ���������� ������������� ������ A(M,N). ���������  ���������� ������ B �� ������� ����� ����� �������." << endl;
			cout << "�������:" << endl;
			int A[20][3] = { { 0 },{ 0 } }, B[] = { 0 };
			for (int i = 0; i < 20; i++)
			{
				B[i] = i;
				cout << B[i] << " ";
			}
			cout << endl;
			break;
		}
		default:
			cout << "�������� ����� �������." << endl;
			break;
		}
	} while (zadanie > 0);
}
#include<iostream>
using namespace std;

void menu()
{
	setlocale(LC_ALL, " Rus");
	cout << "����: \n";

	cout << "�������� ����� ���������, ������� �� ������ �� ���������" << endl;

	cout << "1 - ������� �������� ����������� �� ���������� �������������� ����� n" << endl;

	cout << "2 - ������� ������������� ���������� " << endl;

	cout << "3 - ��������� ������� ������������� � ��������� �����  (������� ����� ����� ������, ���� ������ ���������� ���� ������� \"0\")" << endl;


}

void exit()
{
	for (int i = 0; i < 10; i++)
	{
		cout << endl;
	}

}
void task1()
{
	setlocale(LC_ALL, "Rus");

	int maxnumber, count1 = -1;

	cout << "������� ������������ ����� � ������������: ";

	cin >> maxnumber;

	for (int i = 0; i <= (maxnumber + 1); i++)
	{
		for (int g = 0; g <= i; g++)
		{


			count1++;
			if (count1 == i)
			{
				if (i > 0)

				{
					cout << endl;
				}
			}
			else {
				cout << g;
			}
		}
		count1 = -1;


	}




}


void task22()// ���������� ���������� �����
{
	setlocale(LC_ALL, "Rus");

	int n;

	cout << "������� ����� ������������� n<100: ";

	cin >> n;

	if (n < 100)
	{
		double previos = 1;

		for (int k = 0; k <= n; k++)

		{
			cout << previos << " ";
			double x = (n - k);
			double y = k + 1;
			double z = x / y;
			previos *= z;

		}
		cout << endl;
	}
	else
	{
		cout << "�� ����� ������������ ������� n" << endl;
	}




}

void task3()
{
	setlocale(LC_ALL, "Rus");

	double number, count = 0, summ_number = 0;
	cout << "������� ����� � �������, ��� ������� �� �������� ��������������� \n";

	cin >> number;

	while (number != 0)
	{
		summ_number += number;
		count++;
		cin >> number;

	}

	cout << double(summ_number / count) << endl;


}

int main()
{
	setlocale(LC_ALL, "Rus");

	while (true)
	{
		menu();

		int number_of_case;
		cin >> number_of_case;

		if (number_of_case != 1 && number_of_case != 2 && number_of_case != 3)
		{
			cout << "�� ����� �� ��������� ������ ���������";

		}
		else
		{
			switch (number_of_case)
			{
			case 1:
				task1();
				exit();
				break;
			case 2:
				task22();
				exit();
				break;
			case 3:
				task3();
				exit();
				break;
			default:

				break;
			}



		}


	}


}
#include <iostream>

using namespace std;

main()
{
	setlocale( LC_ALL,"Russian" );
	int sum, date1, date2;
	cout << "������� ����� ������ (����������� ����� 10���): " << endl;
	cin >> sum;
	if (sum > 0 && sum < 10000 )
		{
			cout << endl << "�� ����� �������� �����, ����������� ����� ������ 10 000. ���������� ������� ���������� �����" << endl;
			cin >> sum;
		}
	if (sum >= 10000 && sum <= 100000)
		{
			cout << endl << "������� ���� ������ (�� ����� 365 ����):" << endl;
			cin >> date1;
			if (date1 > 365)
			{
				cout << "������� ���� ������, �� ����� 365 ����" << endl;
				cin >> date1;
			}
			if (date1 >= 0 && date1 <= 30)
			{
				sum = sum - sum/10;
				cout << "���� ����� ����� " << date1 <<" ����: " << sum;
			}
			if (date1 >= 31 && date1 <= 120)
			{
				sum = sum + (sum/100)*2;
				cout << "���� ����� ����� " << date1 <<" ����: " << sum;
			}
			if (date1 >= 121 && date1 <= 240)
			{
				sum = sum + (sum/100)*6;
				cout << "���� ����� ����� " << date1 <<" ����: " << sum;
			}
			if (date1 >= 241 && date1 <= 365)
			{
				sum = sum + (sum/100)*12;
				cout << "���� ����� ����� " << date1 <<" ����: " << sum;
			}
		}
	if (sum >= 100000)
		{
			cout << endl << "������� ���� ������ (�� ����� 365 ����):" << endl;
			cin >> date2;
			if (date2 > 365)
			{
				cout << "������� ���� ������, �� ����� 365 ����" << endl;
				cin >> date1;
			}
			if (date2 >= 0 && date2 <= 30)
			{
				sum = sum - sum/10;
				cout << "���� ����� ����� " << date2 <<" ����: " << sum;
			}
			if (date2 >= 31 && date2 <= 120)
			{
				sum = sum + (sum/100)*3;
				cout << "���� ����� ����� " << date2 <<" ����: " << sum;
			}
			if (date2 >= 121 && date2 <= 240)
			{
				sum = sum + (sum/100)*8;
				cout << "���� ����� ����� " << date2 <<" ����: " << sum;
			}
			if (date2 >= 241 && date2 <= 365)
			{
				sum = sum + (sum/100)*15;
				cout << "���� ����� ����� " << date2 <<" ����: " << sum;
			}
		}
	return 0;
}
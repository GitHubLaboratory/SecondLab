#include <iostream>

using namespace std;

main()
{
	setlocale( LC_ALL,"Russian" );
	int sum, date1, date2;
	cout << "Введите сумму вклада (минимальная сумма 10тыс): " << endl;
	cin >> sum;
	if (sum > 0 && sum < 10000 )
		{
			cout << endl << "Вы ввели неверную сумму, минимальная сумма взноса 10 000. Пожалуйста введите корректную сумму" << endl;
			cin >> sum;
		}
	if (sum >= 10000 && sum <= 100000)
		{
			cout << endl << "Введите срок вклада (не более 365 дней):" << endl;
			cin >> date1;
			if (date1 > 365)
			{
				cout << "Введите срок вклада, не более 365 дней" << endl;
				cin >> date1;
			}
			if (date1 >= 0 && date1 <= 30)
			{
				sum = sum - sum/10;
				cout << "Ваша сумма через " << date1 <<" дней: " << sum;
			}
			if (date1 >= 31 && date1 <= 120)
			{
				sum = sum + (sum/100)*2;
				cout << "Ваша сумма через " << date1 <<" дней: " << sum;
			}
			if (date1 >= 121 && date1 <= 240)
			{
				sum = sum + (sum/100)*6;
				cout << "Ваша сумма через " << date1 <<" дней: " << sum;
			}
			if (date1 >= 241 && date1 <= 365)
			{
				sum = sum + (sum/100)*12;
				cout << "Ваша сумма через " << date1 <<" дней: " << sum;
			}
		}
	if (sum >= 100000)
		{
			cout << endl << "Введите срок вклада (не более 365 дней):" << endl;
			cin >> date2;
			if (date2 > 365)
			{
				cout << "Введите срок вклада, не более 365 дней" << endl;
				cin >> date1;
			}
			if (date2 >= 0 && date2 <= 30)
			{
				sum = sum - sum/10;
				cout << "Ваша сумма через " << date2 <<" дней: " << sum;
			}
			if (date2 >= 31 && date2 <= 120)
			{
				sum = sum + (sum/100)*3;
				cout << "Ваша сумма через " << date2 <<" дней: " << sum;
			}
			if (date2 >= 121 && date2 <= 240)
			{
				sum = sum + (sum/100)*8;
				cout << "Ваша сумма через " << date2 <<" дней: " << sum;
			}
			if (date2 >= 241 && date2 <= 365)
			{
				sum = sum + (sum/100)*15;
				cout << "Ваша сумма через " << date2 <<" дней: " << sum;
			}
		}
	return 0;
}
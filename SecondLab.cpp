#include <iostream>

using namespace std;

int main()
{
	int sum, date1, date2;
	cout << "Vvedite summu vklada (minimal'naya summa 10 tys): " << endl;
	cin >> sum;
	if (sum > 0 && sum < 10000 )
		{
			cout << endl << "Vy vveli nevernuyu summu, minimal'naya summa vznosa 10 000. Pozhaluysta vvedite korrektnuyu summu" << endl;
			cin >> sum;
		}
	if (sum >= 10000 && sum <= 100000)
		{
			cout << endl << "Vvedite srok vklada (ne boleye 365 dney):" << endl;
			cin >> date1;
			if (date1 > 365)
			{
				cout << "Vvedite srok vklada, ne boleye 365 dney" << endl;
				cin >> date1;
			}
			if (date1 >= 0 && date1 <= 30)
			{
				sum = sum - sum/10;
				cout << "Vasha summa cherez " << date1 <<" dney: " << sum;
			}
			if (date1 >= 31 && date1 <= 120)
			{
				sum = sum + (sum/100)*2;
				cout << "Vasha summa cherez " << date1 <<" dney: " << sum;
			}
			if (date1 >= 121 && date1 <= 240)
			{
				sum = sum + (sum/100)*6;
				cout << "Vasha summa cherez " << date1 <<" dney: " << sum;
			}
			if (date1 >= 241 && date1 <= 365)
			{
				sum = sum + (sum/100)*12;
				cout << "Vasha summa cherez " << date1 <<" dney: " << sum;
			}
		}
	if (sum >= 100000)
		{
			cout << endl << "Vvedite srok vklada (ne boleye 365 dney):" << endl;
			cin >> date2;
			if (date2 > 365)
			{
				cout << "Vvedite srok vklada, ne boleye 365 dney" << endl;
				cin >> date1;
			}
			if (date2 >= 0 && date2 <= 30)
			{
				sum = sum - sum/10;
				cout << "Vasha summa cherez " << date2 <<" dney: " << sum;
			}
			if (date2 >= 31 && date2 <= 120)
			{
				sum = sum + (sum/100)*3;
				cout << "Vasha summa cherez " << date2 <<" dney: " << sum;
			}
			if (date2 >= 121 && date2 <= 240)
			{
				sum = sum + (sum/100)*8;
				cout << "Vasha summa cherez " << date2 <<" dney: " << sum;
			}
			if (date2 >= 241 && date2 <= 365)
			{
				sum = sum + (sum/100)*15;
				cout << "Vasha summa cherez " << date2 <<" dney: " << sum;
			}
		}
	return 0;
}
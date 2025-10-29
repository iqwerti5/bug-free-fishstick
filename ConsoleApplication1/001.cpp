#include <iostream>

int main()
{
	setlocale(LC_ALL, "RU");
	
	short num;
	
	std::cin >> num;
	
	switch (num) 
	{
	case 5: std::cout << "Вы прошли проверку!";
		break;
		
		switch (num)
		{
		case 1: std::cout << "Вы не прошли проверку!";
			break;
		}
		
		switch (num)
		{
		case 2: std::cout << "вы не прошли проверку!";
			break;
		}
		switch (num)
		{
		case 4: std::cout << "вы не прошли проверку!";
			break;
		}
		switch (num)
		{
		case 6: std::cout << "вы не прошли проверку!";
			break;
		}
		switch (num)
		{
		case 7: std::cout << "вы не прошли проверку!";
			break;
		}
		switch (num)
		{
		case 8: std::cout << "вы не прошли проверку!";
			break;
		}
		switch (num)
		{
		case 9: std::cout << "вы не прошли проверку!";
			break;
		}
		switch (num)
		{
		case 10: std::cout << "вы не прошли проверку!";
			break;
		}
	}
	return 0;
}
#include <iostream>

using namespace std;

class Calculator
{
public:
	double Calculate(char oper, double x, double y)
	{
		switch (oper)
		{
			case '+':
				return x + y;
			case '-':
				return x - y;
			case '*':
				return x * y;
			case '/':
				return x / y;
		}
	}
};

int main()
{
	char oper = '+';
	double x = 0.0;
	double y = 0.0;
	double result = 0.0;

	cout << "Simple calculator: add (+), subtract (-), multiply (*) or divide (/)." << endl;

	while (true)
	{
		cout << "Operation type: ";
		cin >> oper;
		if (oper == '+' || oper == '-' || oper == '*' || oper == '/')
		{
			break;
		}
		else
		{
			cout << "Please provide only +, -, * or /" << endl;
			continue;
		}
	}

	cout << "Enter 1st number: ";
	cin >> x;

	while (true)
	{
		cout << "Enter 2nd number: ";
		cin >> y;
		if (y == 0 && oper == '/')
		{
			cout << "You cannot divide by 0" << endl;
			continue;
		}
		else
		{
			break;
		}
	}

	Calculator calc;
	result = calc.Calculate(oper, x, y);
	cout << "Result: " << result << endl;
}
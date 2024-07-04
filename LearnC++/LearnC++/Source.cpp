#include "Header.h"
#include <iostream>
#include <windows.h>
#include <string>


//Prevents std:: prefix before cout and cin, and endl
using namespace std;


int OperatorChoice()
{
	string UserInput;

	cout << "Please Pick an operator!" << endl;
	cout << " * For Multiplication.\n / For Divison.\n + For Addition.\n - For subtraction.";
	cin >> UserInput;
	cout << UserInput << endl;

	if (UserInput == "*")
	{
		cout << "Running Multiplaction program...";
		StillChoosing = false;
		Operator = '*';
	}
	else if (UserInput == "/")
	{
		cout << "Running Divison program...";
		StillChoosing = false;
		Operator = '/';
	}
	else if (UserInput == "+")
	{
		cout << "Running Addition program...";
		StillChoosing = false;
		Operator = '+';
	}

	else if (UserInput == "-")
	{
		cout << "Running Subtraction program...";
		StillChoosing = false;
		Operator = '-';
	}
	else
	{
		cout << "INVALID INPUT PLEASE TRY AGAIN";
		StillChoosing = true;
	}
	return 0;

}






int main() 
{
	



	string choice;
	while (UsingCalculator)
	{

		cout << "Welcome to my calculator!" << endl;




		cout << "Would You Like To Make A Calculation?" << endl;
		cin >> choice;
		if (choice == "yes" || "YES")
		{
			StillChoosing = true;


			while (StillChoosing)
			{
				OperatorChoice();
			}

			cout << "Enter First Value: " << endl;

			cin >> FirstValue;

			cout << "Enter Second Value: ";

			cin >> SecondValue;

			if (Operator == '*')
			{
				CalculatedResult = FirstValue * SecondValue;
			}
			else if (Operator == '/')
			{
				CalculatedResult = FirstValue / SecondValue;
			}
			else if (Operator == '-')
			{
				CalculatedResult = FirstValue - SecondValue;
			}
			else if (Operator == '+')
			{
				CalculatedResult = FirstValue + SecondValue;
			}

			cout << "The anwser to your sum is: " << CalculatedResult << endl;
			cout << "Thank you for using my calculator, would you like to use calculate again?" << endl;
			string restartCalc;
			cin >> restartCalc;

			if (restartCalc == "yes" || "YES")
			{
				UsingCalculator == true;
			}
			else if (restartCalc == "no" || "NO")
				UsingCalculator == false;

			else
			{
				cout << "INVALID USER INPUT!" << endl;
			}
				




		}
	}

	
	
	
	

	
}

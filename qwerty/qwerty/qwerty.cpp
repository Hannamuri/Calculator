/*Калькулятор,который складывает, умножает, делит, вычитает.
Хорошая вещь.*/
// Version 2.3

#include <iostream>
#include <cmath>
using namespace std;

float a, b, c, result; //числа, ответ, действие
char task, els, mode, operation;

float theAbsoluteValueOfNumber(float a) {
	return fabs(a);
}

float add(float a, float b) {		//функция сложения
	return a + b;
}

float dev(float a, float b) {		//функция деления
	return a / b;
}

float mult(float a, float b) {		//функция умножения
	return a * b;
}

float sub(float a, float b) {		//функция вычитания
	return a - b;
}

void selectMode() {													//функция выбора режима
	cout << "Select mode. Common mode - !, Advanced - $: ";
	cin >> mode;
}

int main()
{
selectCorrectMode:
	selectMode();
	if (mode == '!')
	{
	start:
		cout << "\nEnter the first num: ";				//Назначаем первое число.
		cin >> a;

		cout << "Enter the second num: ";				//И второе тоже.
		cin >> b;

		cout << "What we will doing? (+, -, /, *): ";			//И третье..
		cin >> task;

		if (task == '+') {
			result = add(a, b);
		}

		else if (task == '-') {
			result = sub(a, b);
		}

		else if (task == '*') {
			result = mult(a, b);
		}

		else if (task == '/') {
			result = dev(a, b);
		}

		else {
			cout << "Oh, shit! It is error!" << endl;
			goto start;
		}
		cout << "\nThe result is: " << result;

	isAnythingElse:

		cout << "\nIs anything else? y/n: ";
		cin >> els;

		if (els == 'y') {
			goto start;
		}

		else if (els == 'n') {
			cout << "\nGoodbye!";
			return 0;
		}

		else {
			cout << "Do this correctly!";
			goto isAnythingElse;
		}
	}
	else if (mode == '$') {
		cout << "Select operation(now only Absolute Value Of Number). Absolute Value Of Number - +:  ";
		cin >> operation;
		
		if (operation == '+') {
			cout << "Enter numbers to search the absolute value of a number: ";
			cin >> a;
			cout << "The result is:  " << theAbsoluteValueOfNumber(a);
		}
		else {
			return 0;
		}
	}
	else {
		cout << "\nSelect correct error! " << endl;
		goto selectCorrectMode;
	}
}

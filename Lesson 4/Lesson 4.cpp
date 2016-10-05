// Lesson 4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void swap(int *a, int *b);
void evens(int* arr);

int main() {

	int a = 100;

	cout << "Value in memory location a is " << a << "\n";

	cout << "Address of (the reference to) memory location a is " << &a << "\n";

	int *b = &a;

	cout << "Value in memory location pointed to by b is " << *b << "\n";


	cout << "Value in memory location b is " << b << "\n";
	cout << b << " should be the same as the memory location for a: " << &a << "\n";
	cout << "b is actually at memory location " << &b << endl;

	int** c;

	c = &b;
	cout << "c is now pointing to what b points to: " << **c << endl;

	cout << "c points to: " << *c << endl;

	cout << "c actually holds the value: " << c << endl;
	cout << c << " is the same value as b's memory location: " << &b << endl;
	cout << "c is actually at memory location " << &c << endl;

	cout << "c is eventually retrieving what is in memory location " << **&c << endl;
	cout << "the value of a is in memory location " << &a << endl;

	//-----------Exercises-----------
	cout << endl << endl;
	float floater = 100;
	float *flot = &floater;
	cout << "Value in flot (flot)		: " << flot << endl;
	cout << "Value at flot (*flot)		: " << *flot << endl;
	cout << "Value at flot+3 (*flot+3)	: " << *(flot + 3) << endl;
	// Q2: It will be a jibberish value based on the last byte of the float and the next three bytes of data in memory.

	cout << endl;
	int swap1 = 1;
	int swap2 = 2;
	int *swapper1 = &swap1;
	int *swapper2 = &swap2;
	cout << "Swap1 = " << *swapper1 << endl;
	cout << "Swap2 = " << *swapper2 << endl;
	swap(swapper1, swapper2);
	cout << "Swap1 = " << *swapper1 << endl;
	cout << "Swap2 = " << *swapper2 << endl;

	cout << endl;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int *arrP = arr;
	evens(arrP);

	int x;
	cout << endl << "Type in a number to finish" << "\n";
	cin >> x;

	return 0;
}

// Q1: Because a memory address is a whole number, there is no such thing as memory address 100.5 only 100 and 101.

void swap(int* a, int* b) {
	int temp = *b;
	*b = *a;
	*a = temp;
}

void evens(int* arr) {
	for (int i = 1; i < 10; i = i + 2) // Arrays are zero indexed. Advance by 2s.
		cout << arr[i] << ' ';
	cout << endl;
}
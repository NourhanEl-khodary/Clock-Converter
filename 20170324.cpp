// Ass. 1 individual V1.0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Author: Nourhan Ihab
//Title: Clock Converter
//Version: 1.0
//Date: 8/10/2018

#include "pch.h"
#include <iostream>

using namespace std;

int const Size = 6;

void am(char hour[]);
void pm(char hour[]);

int main()
{
	char hour[Size];
	for (int i = 0; i < Size; i++) {
		cin >> hour[i];
	}
	
	for (int i = Size; i > 0; i--) {
		if (hour[i] == 'a') {
			am(hour);
			break;
		}
		else if (hour[i] == 'p'){
			pm(hour);
			break;
		}
	}
	return 0;
}


void am(char hour[]) {

	char convhour[4];

	if ((hour[0] == '1') && (hour[1] == '2')) {
		convhour[0] = '0';
		convhour[1] = '0';
		convhour[2] = hour[3];
		convhour[3] = hour[4];
	}
	else if (hour[1] == ':') {
		convhour[0] = '0';
		convhour[1] = hour[0];
		convhour[2] = hour[2];
		convhour[3] = hour[3];
	}
	else if (hour[2] == ':'){
		convhour[0] = hour[0];
		convhour[1] = hour[1];
		convhour[2] = hour[3];
		convhour[3] = hour[4];
	}
	
	cout << "Converted Hour: ";

	for (int i = 0; i < 4; i++) {
		cout << convhour[i];
	}
	cout << endl;
}


void pm(char hour[]) {
	char convhour[4];

	if ((hour[0] == '1') && (hour[1] == '2')) {
		convhour[0] = hour[0];
		convhour[1] = hour[1];
		convhour[2] = hour[3];
		convhour[3] = hour[4];
	}
	else if (hour[0] == '8' || hour[0] == '9') {
		convhour[0] = '2';
		convhour[1] = hour[0] - 8;
		convhour[2] = hour[2];
		convhour[3] = hour[3];
	}
	else if (hour[2] == ':') {
		convhour[0] = '2';
		convhour[1] = hour[1] + 2;
		convhour[2] = hour[3];
		convhour[3] = hour[4];
	}
	else {
		convhour[0] = '1';
		convhour[1] = hour[0] + 2;
		convhour[2] = hour[2];
		convhour[3] = hour[3];
	}

	cout << "Converted Hour: ";

	for (int i = 0; i < 4; i++) {
		cout << convhour[i];
	}
	cout << endl;
}



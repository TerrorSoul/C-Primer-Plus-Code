#include <stdio.h>
#include "2.h"

static int mode;
static double distance;
static double fuel;

void set_mode(int m) {
	if (m != 0 && m != 1)
	{
		printf_s("Invalid mode specified. Mode ");
		switch (mode)
		{
		case 0:
			printf_s("0(metric) used.\n");
			break;
		case 1:
			printf_s("1(US) used.\n");
			break;
		default:
			break;
		}
	}
	else
	{
		mode = m;
	}
}

void get_info() {
	switch (mode)
	{
	case 0:
		printf_s("Enter distance traveled in kilometers: ");
		scanf_s("%lf", &distance);
		printf_s("Enter fuel consumed in liters: ");
		scanf_s("%lf", &fuel);
		break;
	case 1:
		printf_s("Enter distance traveled in miles: ");
		scanf_s("%lf", &distance);
		printf_s("Enter fuel consumed in gallons: ");
		scanf_s("%lf", &fuel);
		break;
	default:
		break;
	}
}

void show_info() {
	printf_s("Fuel consumption is ");
	switch (mode)
	{
	case 0:
		printf_s("%.2f liters per 100 km.\n", 100 / distance * fuel);
		break;
	case 1:
		printf_s("%.1f miles per gallon.\n", distance / fuel);
	default:
		break;
	}
}
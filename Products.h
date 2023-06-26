#pragma once

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <ctime>

using std::string;
using std::exception;
using std::cout;
using std::endl;

class DateFormatException : public exception
{
private:
	string message;

public:
	DateFormatException(const string& message);
	const char* what() const noexcept override;
};

class DateValidationException : public exception
{
private:
	string message;

public:
	DateValidationException(const string& message);

	const char* what() const noexcept override;
};

bool checkDateValidation(int year, int month, int day);

struct Date
{
	int day, month, year;

	Date() : day(1), month(1), year(2023) {};
	Date(int d, int m, int y)
	{
		checkDateValidation(y, m, d);

		this->day = d;
		this->month = m;
		this->year = y;
	}
};

class Product
{
private:
	string name;
	Date date;

public:
	Product();
	Product(string _name, int day, int month, int year);

	string getName() const;
	Date getDate() const;

	string generateString() const;
	bool expired(const int& day, const int& month, const int& year);
};

class Products
{
private:
	Product productList[100];
	int numProducts;

public:
	Products();
	void addProduct(const std::string& productName, const int& day, const int& month, const int& year);

	void writeIntoFile(const string& filename);
	void writeExpiredIntoFile(const string& filename, int day, int month, int year);
};

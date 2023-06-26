#include "Products.h"

using std::runtime_error;
using std::to_string;
using std::ofstream;

// DateFormatException
DateFormatException::DateFormatException(const string& message) : message(message)
{
	this->message = "Date format error: ";
	this->message += message;
}

const char* DateFormatException::what() const noexcept
{
	return message.c_str();
}

// DateValidationException
DateValidationException::DateValidationException(const string& message)
{
	this->message = "Date validation error: ";
	this->message += message;
}

const char* DateValidationException::what() const noexcept
{
	return message.c_str();
}

// Checking date function
bool checkDateValidation(int year, int month, int day) {
	struct std::tm timeInfo = { 0 };
	timeInfo.tm_year = year - 1900;
	timeInfo.tm_mon = month - 1;
	timeInfo.tm_mday = day;
	time_t t = std::mktime(&timeInfo);

	if (t == -1)
		throw DateValidationException("Incorrect data provided.");

	if (year > 2023)
		throw DateValidationException("Year can't be greater than 2023.");
	if (year < 1900)
		throw DateValidationException("Year can't be smaller than 1900.");

	if (month > 12)
		throw DateValidationException("Month can't be greater than 12.");
	if (month < 1)
		throw DateValidationException("Month can't be smaller than 1.");

	if (day < 1)
		throw DateValidationException("Day can't be smaller than 1.");

	int days_in_month;
	if (month == 2) {
		if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
			days_in_month = 29;
		else
			days_in_month = 28;
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11)
		days_in_month = 30;
	else
		days_in_month = 31;

	if (day > days_in_month)
		throw DateValidationException("Incorrect value of days in month.");

	return day <= days_in_month;
}

// Product
Product::Product() : name(""), date() {}
Product::Product(string _name, int day, int month, int year) : date(day, month, year)
{
	if (_name.length() > 56)
		throw runtime_error("Name of the product is too long.");
	if (_name.empty())
		throw runtime_error("Name for the product is not provided");
	name = _name;
}

string Product::getName() const { return name; }
Date Product::getDate() const { return date; }

string Product::generateString() const
{
	string res = name + ", " + to_string(date.day) + "." + to_string(date.month) + "." + to_string(date.year) + "\n";
	return res;
}

bool Product::expired(const int& day, const int& month, const int& year)
{
	checkDateValidation(year, month, day);

	if (date.year < year)
		return true;
	else if (date.year == year)
	{
		if (date.month < month)
			return true;
		else if (date.month == month)
			if (date.day < day)
				return true;
	}

	return false;
}

// Products
Products::Products() : productList{}, numProducts(0) {}

void Products::addProduct(const std::string& productName, const int& day, const int& month, const int& year) {
	if (numProducts < 100) {
		productList[numProducts] = Product(productName, day, month, year);
		numProducts++;
	}
}

void Products::writeIntoFile(const string& filename)
{
	string copyFilename = filename;
	std::string extension = ".txt";

	if (copyFilename.length() >= extension.length())
	{
		std::string endOfStr = copyFilename.substr(copyFilename.length() - extension.length());

		if (endOfStr != extension)
			throw runtime_error("Invalid filename. Only .txt files allowed.");
	}
	else
		throw runtime_error("Invalid filename. Name of file is too short.");

	ofstream file(filename);
	if (!file.is_open())
		throw runtime_error("Can't open file to write.");

	for (int i = 0; i < numProducts; i++)
		file << productList[i].generateString();

	file.close();
}

void Products::writeExpiredIntoFile(const string& filename, int day, int month, int year)
{
	string copyFilename = "copy_" + filename;
	std::string extension = ".txt";

	if (copyFilename.length() >= extension.length())
	{
		std::string endOfStr = copyFilename.substr(copyFilename.length() - extension.length());

		if (endOfStr != extension)
			throw runtime_error("Invalid filename. Only .txt files allowed.");
	}
	else
		throw runtime_error("Invalid filename. Name of file is too short.");

	ofstream file(copyFilename);
	if (!file.is_open())
		throw runtime_error("Can't open file to write.");

	for (int i = 0; i < numProducts; i++)
		if (productList[i].expired(day, month, year))
			file << productList[i].generateString();

	file.close();
}

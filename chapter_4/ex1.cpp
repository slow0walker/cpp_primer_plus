#include<iostream>
#include<string>

int main()
{
	using namespace std;
	string firstName, lastName;
	char grade;
	int age;

	cout << "what is your first name?";
	getline(cin, firstName);

	cout << "what is your last name?";
	cin >> lastName;

	cout << "what letter grade do you deserve?";
	cin >> grade;

	cout << "what is ypur age?";
	cin >> age;

	grade = grade + 1;
	
	cout << "Name: " << lastName << ", " << firstName << endl;
	cout << "Grade: " << grade << endl;
	cout << "Age: " << age << endl;
	return 0;
}
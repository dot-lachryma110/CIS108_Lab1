//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

string in()  //  function for inputting 
{
	string input;
	cin >> input;
	return input;
}


void out(string to_print)
{
	cout << to_print;
}


void nl()
{
	cout << endl;  //endline
}

int main()
{
	string fn, ln;
	int age;
	double confidence;

	out("Enter your first name: ");
	fn = in();
	
	out("Enter your last name: ");
	ln = in();

	out("Enter your age: ");
	age = stoi(in());

	out("Confidence with programming(%): ");
	confidence = stod(in());

	nl();
	out("Hello " + fn + " " + ln + ", nice to meet you!");
	nl();
	out("You might be " + to_string(age) + " in human years, but in dog years you are " + to_string(age * 7));
	nl();
	
	if (confidence < 0.5)
		out("I agree, programmers can't be trusted!");
	else
		out("Writing good code takes hard work!");

	nl();


}



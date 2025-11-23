#include <iostream>

float num1, num2;
char op;
void greetUser ();
double faren2Cel (double temp);
double cel2Faren (double Temp);
double do2Pi (double DP);
double pi2Do (double Pf);
float compute(float a, float b, char op);




int main () {
	greetUser();
	
	double Farenheight, Celcius;
	double Dollars, Peso;
	double result; 


	std::cout << "Arithmetic Operations" << std::endl;
    std::cout << "\nEnter first number: ";
    std::cin >> num1;
	std::cout << "Enter operator (+, -, *, /): ";
	std::cin >> op;
	std::cout << "Enter second number: ";
	std::cin >> num2;
	if (op == '/' && num2 == 0)
        std::cout << "Error: Division by zero!\n";
    else
        std::cout << "Result: " << compute(num1, num2, op) << std::endl;

	std::cout << std::endl;
	std::cout << "~Convert Farenheight to Celcius~" << std::endl;
	
	//F to C
	std::cout << "Input Farenheight: ";
	std::cin >> Farenheight;
	
	result = faren2Cel (Farenheight);
	std::cout << "Your Celcius is: ";
	std::cout << result << std::endl;
	
	//C to F
	std::cout << std::endl;
	std::cout << "~Convert Celcius to Farenheight~" << std::endl;
	std::cout << "Input Celcius: ";
	std::cin >> Celcius;
	
	result = cel2Faren (Celcius);
	std::cout << "Your Farenheight is: ";
	std::cout << result << std::endl;
	
	//Dollar to Peso
	std::cout << std::endl;
	std::cout << "~Convert Dollar to Peso~" << std::endl;
	std::cout << "How much Dollars do you want to convert: ";
	std::cin >> Dollars;
	
	result = do2Pi (Dollars);
	std::cout << "Dollars is converted to Peso: ";
	std::cout << result << std::endl;
	
	//Peso to Dollar
	std::cout << std::endl;
	std::cout << "~Convert Peso to Dollar~" << std::endl;
	std::cout << "How much Peso do you want to convert: ";
	std::cin >> Peso;
	
	result = pi2Do (Peso);
	std::cout << "Peso is converted to Dollar: ";
	std::cout << result << std::endl;
}

float compute(float a, float b, char op) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return (b != 0) ? a / b : 0;
        default: std::cout << "Invalid operator!"; return 0;
    }
}

void greetUser () {
	std::cout << "Functions !!" << std::endl;
}

double faren2Cel(double temp) {
	int C = (temp - 32) * 5/9;
	return C;
}

double cel2Faren (double Temp) {
	int F = (Temp * 9/5) + 32;
	return F;
}

double do2Pi (double DP) {
	int D = (DP * 58.12);
	return D;
}

double pi2Do (double Pf) {
	double O = (Pf / 58.12);
	return O;
}

#include <iostream>

/**
 * This program is a simple caltulator that works in the terminal.
*/


/// @brief This function asks the operator to the user and checks if it is a valid one.
/// @return The Operator
char	getOperator()
{
	char	op;

	// Get the Operator from user
	std::cout << "Enter one of the folowing: +, -, * or /: ";
	std::cin >> op;

	// If the operator is one of the 4 valid ones return it
	if (op == '+' || op == '-' || op == '*' || op == '/')
		return (op);
	
	// If it is not a valid Operator, write not an operator and then call again the function (recursivity).
	std::cout << "Not an operator." << '\n';
	return (getOperator());
}

/// @brief This function makes the mathematical operation based on the operator given to it
/// @param x The first number of the operation
/// @param y The second number of the operation
/// @param op The Mathematical operator
/// @return The result of the operation
double makeOperation(double x, double y, char op)
{
	if (op == '+')
		return (x + y);
	else if (op == '-')
		return (x - y);
	else if (op == '*')
		return (x * y);
	else
		return (x / y);
}

/// @brief Main function
int	main()
{
	//Variable declarations
	double	x;
	double	y;
	char	op;

	// Get the numbers from the user 
	std::cout << "Enter a double: ";
	std::cin >> x;
	std::cout << "enter a double: ";
	std::cin >> y;

	// Get the Operator
	op = getOperator();

	// Make the Operation and print the result 
	std::cout << "The result of the operation = " << makeOperation(x, y, op) << '\n';
	return (0);
}

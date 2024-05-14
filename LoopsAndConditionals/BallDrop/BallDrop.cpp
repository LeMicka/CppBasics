#include <iostream>

/**
 * This program simulates a ball being dropped from a tower and calculates the height of the ball at each seconds
*/

/// @brief Calculates the height fallen
/// @param height Height of the tower
/// @param seconds Time passed in seconds
/// @return The current height of the ball
float remainingMeters(double height, int seconds)
{
	double distanceFallen;
	double gravityConstant = 9.8;

	// Distance fallen formula
	distanceFallen = (gravityConstant * (seconds * seconds)) / 2.0;
	// Return the current height of the ball
	return (height - distanceFallen);	
}


int	main()
{
	double	towerHeight;
	double	ballHeight;
	int	seconds = 0; 

	// Get the height of the tower from user
	std::cout << "What is the height of the tower in meters: ";
	std::cin >> towerHeight;

	// set the ballheight to the towerheight as the ball will start there
	ballHeight = towerHeight;
	
	// While loop, This part of the code will repeat until the ball is on the floor
	while (ballHeight > 0)
	{
		// Calculate the current height of the ball
		ballHeight = remainingMeters(towerHeight, seconds);

		// If the ball is already on the floor, we go to the next iteration of the loop to jump over the remaining lines.
		if (ballHeight < 0)
			continue;
		std::cout << "At " << seconds << " seconds, the ball is at : " << ballHeight << '\n';
		// Increment the seconds, is equal to seconds = seconds + 1
		seconds++;
	}
		std::cout << "At " << seconds << " seconds, the ball is on the floor." << '\n';
		return (0);
}

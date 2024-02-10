//PassingUnderLeagueRacev1.1
//Author: Austin Smith
//GitHub: github.com/ThatSmittyDude
//Email: ThatSmittyDude@outlook.com
//passingunderyellow.com
//Unix Timestamp: 1707520374

#include <iostream>
#include <math.h>

int main(){
    while (true){

//Declare variables as DOUBLE integers
    double lapsEvent, stops, lapTank, lapsRun, gallonsStart, gallonsRemaining, lapsPerGallon, setTankPercent, stintLaps;

//Set up variables to be entered by user
	std::cout << "Timed pracice laps: ";				//Timed practice laps for fuel data
	std::cin >> lapsRun;								

	std::cout << "Gallons remaining: ";					//Gallons remaining in fuel cell after practice laps are completed
	std::cin >> gallonsRemaining;

	std::cout << "How many laps is the event?: ";		//League event laps
	std::cin >> lapsEvent;

	std::cout << "Desired fuel stops: ";				//The desired amount of pit stops for fuel
	std::cin >> stops;

	gallonsStart = 18.7;								//Stock capacity of fuel cell, use 18.7 for Xfinity and Trucks

//Setup the math to calculate laps per gallon, laps per tank, laps per stint, fuel cell capacity adjustment
	lapsPerGallon = lapsRun / (gallonsStart - gallonsRemaining);
	lapTank = gallonsStart * lapsPerGallon;
	stintLaps = lapsEvent / (stops + 1);
	setTankPercent = (float(stintLaps / lapTank) * 100);

//Fancy lines to seperate the input from the output
	std::cout << "=========";

//Print calculated values
	std::cout << "\nLaps per gallon: " << lapsPerGallon << std::endl;
	std::cout << "Fuel stops: " << stops << std::endl;
	std::cout << "Set fuel percentage to: " << setTankPercent << std::endl;

//Prompt to continue or break
	std::cout << "Continue? y/n: ";
	char user;
	std::cin >> user;
	if (user != 'y' && user != 'Y')
	break;
}
}
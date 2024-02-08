#include <iostream>
#include <math.h>

int main(){
    while (true){
    float lapsEvent, stops, lapTank, lapsRun, galStart, galRem, lapGal, setTank, stintLaps;

	
	std::cout << "Timed pracice laps: ";
	std::cin >> lapsRun;

	std::cout << "Gallons remaining: ";
	std::cin >> galRem;

	std::cout << "How many laps is the event?: ";
	std::cin >> lapsEvent;

	std::cout << "Desired fuel stops: ";
	std::cin >> stops;

	galStart = 18.7;

	lapGal = lapsRun / (galStart - galRem);
	lapTank = galStart * lapGal;
	stintLaps = lapsEvent / (stops + 1);
	setTank = (float(stintLaps / lapTank) * 100);

	std::cout << "=========";

	std::cout << "\nLaps per gallon: " << lapGal << std::endl;
	std::cout << "Fuel stops: " << stops << std::endl;
	std::cout << "Set fuel percentage to: " << setTank << std::endl;

	std::cout << "Continue? y/n: ";
	char user;
	std::cin >> user;
	if (user != 'y' && user != 'Y')
	break;
}
}
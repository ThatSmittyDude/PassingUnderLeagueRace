//PassingUnderLeagueRacev1.2
//Author: Austin Smith
//GitHub: github.com/ThatSmittyDude
//Email:ThatSmittyDude@outlook.com
//passingunderyello.com
//Unix Timestamp: 1707659725

#include <iostream>



int main(){
    while (true){
        //Declare variables as DOUBLE integers
        double lapsEvent, stops, lapTank, lapsRun, gallonsStart, gallonsRemaining, lapsPerGallon, setTankPercent, stintLaps;

        //Set up variables to be entered by user
        
        //User must run a series of test laps to determine stock fuel useage, more laps = more accuracy
        std::cout << "How many timed test laps were run?: ";
        std::cin >> lapsRun;

        //User must enter gallons of fuel remaining in tant after test run
        std::cout << "How many gallons remaining after test run?: ";
        std::cin >> gallonsRemaining;

        //User must enter amount of laps the event will be
        std::cout << "How many laps is the event?: ";
        std::cin >> lapsEvent;

        //User must enter how many fuel stops are desired during the event
        std::cout << "How many fuel stops are desired?: ";
        std::cin >> stops;

        //For Trucks and Xfinity cars, fuel tank capacity is 18.7 gallons
        gallonsStart = 18.7;

        //Setup math to calculate laps per gallon, laps per tank, laps per stint, fueltank capacity adjustment
        
        //Calculate laps per gallon
        lapsPerGallon = lapsRun / (gallonsStart - gallonsRemaining);

        //Calculate stock laps per tank
        lapTank = gallonsStart * lapsPerGallon;

        //Calculate laps in one stint
        stintLaps = lapsEvent / (stops + 1);

        //Calculate % of tank capacity thats recomended based on the event 
        setTankPercent = ((stintLaps / lapTank)*100);

        //Fancy lines to seperate the input from the output
        std::cout << "================\n";

        //Print calculated values
        std::cout << "Laps per gallon: " << lapsPerGallon << std::endl;
        std::cout << "Fuel stops: " << stops << std::endl;
        std::cout << "Set fuel capacity to: " << setTankPercent << std::endl;

        //Prompt to continue or break
        std::cout << "Continue? y/n: ";
        char user;
        std::cin >> user;
        if (user != 'y' && user != 'Y');
        break;


    }
}
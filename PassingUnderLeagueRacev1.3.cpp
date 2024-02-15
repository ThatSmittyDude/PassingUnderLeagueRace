//PassingUnderLeagueRacev1.3
//Author: Austin Smith
//Email: ThatSmittyDude@outlook.com
//GitHub: github.com/ThatSmittyDude
//Website: passingunderyellow.com
//Unix Timestamp: 1707949333

#include <iostream>
#include <fstream>

int main() {
    while (true) {
        //Declare variables as DOUBLE integers
        double lapsEvent, stops, lapTank, lapsRun, gallonsStart, gallonsRemaining, lapsPerGallon, setTankPercent, stintLaps;

        //Set up variables to be entered by user
        
        //User must run a series of test laps to determine stock fuel usage, more laps = more accuracy
        std::cout << "How many timed test laps were run?: ";
        std::cin >> lapsRun;

        //User must enter gallons of fuel remaining in tank after test run
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

        //Setup math to calculate laps per gallon, laps per tank, laps per stint, fuel tank capacity adjustment
        
        //Calculate laps per gallon
        lapsPerGallon = lapsRun / (gallonsStart - gallonsRemaining);

        //Calculate stock laps per tank
        lapTank = gallonsStart * lapsPerGallon;

        //Calculate laps in one stint
        stintLaps = lapsEvent / (stops + 1);

        //Calculate % of tank capacity that's recommended based on the event 
        setTankPercent = ((stintLaps / lapTank) * 100);

        // Output calculated values
        std::cout << "================\n";
        std::cout << "Laps per gallon: " << lapsPerGallon << std::endl;
        std::cout << "Fuel stops: " << stops << std::endl;
        std::cout << "Set fuel capacity to: " << setTankPercent << std::endl;

        // Ask if the user wants to continue
        std::cout << "Save data as CSV and continue? y/n: ";
        char user;
        std::cin >> user;
        if (user != 'y' && user != 'Y')
            break;

        // Export data to CSV file
        std::ofstream outputFile("event_data.csv");

        // Write header to the CSV file
        outputFile << "lapsEvent,stops,lapTank,lapsRun,gallonsStart,gallonsRemaining,lapsPerGallon,setTankPercent,stintLaps\n";

        // Write data to the CSV file
        outputFile << lapsEvent << "," << stops << "," << lapTank << "," << lapsRun << "," << gallonsStart << "," << gallonsRemaining << "," << lapsPerGallon << "," << setTankPercent << "," << stintLaps << "\n";

        // Close the file stream
        outputFile.close();

        std::cout << "Data exported to event_data.csv\n";
    }

    return 0;
}
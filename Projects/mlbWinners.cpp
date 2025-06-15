#include <iostream>
#include <fstream> // file handling
using namespace std;
// This code reads data from two files to display a list of World Series-winning teams and allows the user to check how many times a selected team has won.

void loadData(string teams[], string wins[]){ // Load data from teams.txt and winners.txt for reading into their arrays
    ifstream teamFile("teams.txt");
    ifstream winnersFile("winners.txt");

    if (!teamFile || !winnersFile){
        cerr << "Error opening files." << endl;
        return;
    }

    for (int i = 0; i < 29; i++){ 
        getline(teamFile, teams[i]); // Extract the names from teams array into the input file teamFile
    }   
    for (int i = 0; i < 116; i++){
        getline(winnersFile, wins[i]); // Extract the winners from wins array into the input file winnersFile
    }
    teamFile.close();
    winnersFile.close();
}

int winsCounter(string team, string wins[]){
    int counter = 0;
    for (int i = 0; i < 116; i++){
        if (wins[i] == team){ // if an index in wins array is equal to a string team, increment counter
            counter++;
        }
    }
    return counter; // return counter once for loop is complete
}
int main(){
    string teams[29]; // Names of MLB teams
    string wins[116]; // Names of MLB teams to win between 1903 to 2019
    string userInput;
    loadData(teams, wins); // Load data from files into the arrays
    
    cout << "Teams who've won at least 1 World Series: " << endl;
    for (int i = 0; i < 29; i++){
        cout << teams[i] << endl; // increments through each team in teams
    }

    do { // User interaction loop
        cout << "Enter a team name to check (q to quit): ";
        getline(cin, userInput);
        if (userInput != "q"){
            int winsCount = winsCounter(userInput, wins);
            cout << userInput << " won the World Series " << winsCount << " times." << endl;
        }
    } while (userInput != "q");
    cout << "Bye!..." << endl;

    return 0;
}
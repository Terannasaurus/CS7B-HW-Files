//
//  main.cpp
//  Exercise 10
//
//  Created by Teran on 2/7/17.
//  Copyright © 2017 MyApps. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
#include <fstream>
#include <istream>
#include <string>

using namespace std;

/********************************************************************************/

void createVectors(vector <string> & teams, vector <string> & winners) {
    
    string team;
    string winner;
    
    
    ifstream teamsFile;
    ifstream winnersFile;
    
    
    //Open teams file
    teamsFile.open("Teams.txt");
    
    
    //Store data into teams vector
    if(teamsFile.is_open()) {
        
        while(getline(teamsFile, team)) {
            
            teams.push_back(team);
            
        }
        
    }
    
    
    //Close teams file
    teamsFile.close();
    
    
    //Open winners file
    winnersFile.open("WorldSeriesWinners.txt");
    
    
    //Store data into winners vector
    if(winnersFile.is_open()) {
        
        while(getline(winnersFile, winner)) {
            
            winners.push_back(winner);
            
        }
        
    }
    
    
    //Close winners file
    winnersFile.close();
    
}

/********************************************************************************/

int numberOfWins(string str1, vector <string> winners) {
    
    int wins = 0;
    
    
    //Count how many times a team has won based on the winners vector
    for(unsigned i = 0; i < winners.size(); i++) {
        
        if(str1 == winners[i]){
            
            wins++;
            
        }
        
    }
    
    
    return wins;
}

/********************************************************************************/

int main() {
    
    vector <string> teams;
    vector <string> winners;
    
    
    createVectors(teams, winners);
    
    
    string str1;
    
    
    //Output the list of teams
    cout << "Here's a list of the teams:"<< endl;
    for(unsigned i = 0; i < teams.size(); i++) {
        
        cout << teams[i] << endl;
        
    }
    cout << endl;
    
    
    //Tell user to choose a team
    cout << "Choose your team: ";
    getline(cin, str1);
    cout << endl;
    
    
    //Let timesWon be equal to what the function numberOfWins returns
    int timesWon = numberOfWins(str1, winners);
    
    
    //Output number oftimes the team won
    cout << "The " << str1 << " have won " << timesWon << " times" << endl << endl;
    
    
    return 0;
}

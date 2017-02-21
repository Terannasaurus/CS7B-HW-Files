//
//  main.cpp
//  Exercise 8
//
//  Created by Teran on 2/14/17.
//  Copyright © 2017 MyApps. All rights reserved.
//

#include <iostream>
#include <string>


struct MovieData {
    
    std::string title;
    std::string director;
    int year;
    int runningTime;
    int revenue;
    int productionCost;
};


void displayMovieData(MovieData& movie) {
    
    std::string movieTitle = movie.title;
    std::string movieDirector = movie.director;
    int movieYear = movie.year;
    int movieRT = movie.runningTime;
    int movieRevenue = movie.revenue;
    int moviePC = movie.productionCost;
    
    
    std::cout << "Title:                      ";
    std::cout << movieTitle << std::endl;
    std::cout << "Director:                   ";
    std::cout << movieDirector << std::endl;
    std::cout << "Year Released:              ";
    std::cout << movieYear << std::endl;
    std::cout << "Running Time(in minutes):   ";
    std::cout << movieRT << std::endl;
    std::cout << "Film Revenue:               $";
    std::cout << movieRevenue << std::endl;
    std::cout << "Production Cost:            $";
    std::cout << moviePC << std::endl;
    
}


int main() {
    
    MovieData movie1;
    MovieData movie2;
    
    
    /*std::cout << "Title:                      ";
    std::getline(std::cin, movie1.title);
    std::cout << std::endl;
    
    std::cout << "Director:                   ";
    std::getline(std::cin, movie1.director);
    std::cout << std::endl;
    
    
    std::cout << "Year Released:              ";
    std::cin >> movie1.year;
    std::cout << std::endl;
    
    std::cout << "Running Time(in minutes):   ";
    std::cin >> movie1.runningTime;
    std::cout << std::endl;
    
    displayMovieData(movie1);
    std::cout << std::endl;
    */
    
    movie1.title = "The Movie";
    movie1.director = "Pablo Guy";
    movie1.year = 2009;
    movie1.runningTime = 300;
    movie1.revenue = 2380000;
    movie1.productionCost = 1800000;
    
    movie2.title = "The Movie 2";
    movie2.director = "Brandon Teran";
    movie2.year = 1997;
    movie2.runningTime = 160;
    movie2.revenue = 5380000;
    movie2.productionCost = 2800000;
    
    displayMovieData(movie1);
    std::cout << std::endl << std::endl;
    
    displayMovieData(movie2);
    std::cout << std::endl;
    
    /*std::cout << "Title:                      ";
    std::getline(std::cin, movie2.title);
    std::cout << std::endl;
    
    std::cout << "Director:                   ";
    std::getline(std::cin, movie2.director);
    std::cout << std::endl;
    
    
    std::cout << "Year Released:              ";
    std::cin >> movie2.year;
    std::cout << std::endl;
    
    std::cout << "Running Time(in minutes):   ";
    std::cin >> movie2.runningTime;
    std::cout << std::endl;*/
    
    
    //displayMovieData(movie2);
    //std::cout << std::endl << std::endl;
    
    return 0;
}

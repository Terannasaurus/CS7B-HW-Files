//
//  main.cpp
//  Ch 7 Ex 11
//
//  Created by Teran on 3/1/17.
//  Copyright © 2017 MyApps. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

struct MonthlyBudget {
    
    double housing,
    utilities,
    householdExpenses,
    transportation,
    food,
    medical,
    insurance,
    entertainment,
    clothing,
    miscellaneous;
    
};


void displayData(MonthlyBudget c_budget, MonthlyBudget c_spent) {

    
    c_budget.housing = 500.00;
    c_budget.utilities = 150.00;
    c_budget.householdExpenses = 65.00;
    c_budget.transportation = 50.00;
    c_budget.food = 250.00;
    c_budget.medical = 30.00;
    c_budget.insurance = 100.00;
    c_budget.entertainment = 150.00;
    c_budget.clothing = 75.00;
    c_budget.miscellaneous = 50.00;
    
    
    std::cout << "*************************** Your Monthly Budget ***************************"     << std::endl;
    std::cout << "      Housing:                    $"; std::cout << c_budget.housing              << std::endl;
    std::cout << "      Utilities:                  $"; std::cout << c_budget.utilities            << std::endl;
    std::cout << "      Household Expenses:         $"; std::cout << c_budget.householdExpenses    << std::endl;
    std::cout << "      Transportation:             $"; std::cout << c_budget.transportation       << std::endl;
    std::cout << "      Food:                       $"; std::cout << c_budget.food                 << std::endl;
    std::cout << "      Medical:                    $"; std::cout << c_budget.medical              << std::endl;
    std::cout << "      Insurance:                  $"; std::cout << c_budget.insurance            << std::endl;
    std::cout << "      Entertainment:              $"; std::cout << c_budget.entertainment        << std::endl;
    std::cout << "      Clothing:                   $"; std::cout << c_budget.clothing             << std::endl;
    std::cout << "      Miscellaneous:              $"; std::cout << c_budget.miscellaneous        << std::endl;
    std::cout << "***************************************************************************"     << std::endl;
    
    
    std::cout << std::endl;
    
    
    std::cout << "********************* Enter This Month's Expenditures *********************" << std::endl;
    std::cout << "      Housing:                    $"; std::cin >> c_spent.housing;
    std::cout << "      Utilities:                  $"; std::cin >> c_spent.utilities;
    std::cout << "      Household Expenses:         $"; std::cin >> c_spent.householdExpenses;
    std::cout << "      Transportation:             $"; std::cin >> c_spent.transportation;
    std::cout << "      Food:                       $"; std::cin >> c_spent.food;
    std::cout << "      Medical:                    $"; std::cin >> c_spent.medical;
    std::cout << "      Insurance:                  $"; std::cin >> c_spent.insurance;
    std::cout << "      Entertainment:              $"; std::cin >> c_spent.entertainment;
    std::cout << "      Clothing:                   $"; std::cin >> c_spent.clothing;
    std::cout << "      Miscellaneous:              $"; std::cin >> c_spent.miscellaneous;
    std::cout << "***************************************************************************" << std::endl;
    
    
    double t_housing    = c_budget.housing           - c_spent.housing,
    t_utilities         = c_budget.utilities         - c_spent.utilities,
    t_householdExpenses = c_budget.householdExpenses - c_spent.householdExpenses,
    t_transportation    = c_budget.transportation    - c_spent.transportation,
    t_food              = c_budget.food              - c_spent.food,
    t_medical           = c_budget.medical           - c_spent.medical,
    t_insurance         = c_budget.insurance         - c_spent.insurance,
    t_entertainment     = c_budget.entertainment     - c_spent.entertainment,
    t_clothing          = c_budget.clothing          - c_spent.clothing,
    t_miscellaneous     = c_budget.miscellaneous     - c_spent.miscellaneous;
    double total        = t_housing   + t_utilities  + t_householdExpenses + t_transportation +
                          t_food      + t_medical    + t_insurance         + t_entertainment  +
                          t_clothing  + t_miscellaneous;
    
    
    std::cout << std::endl;
    
    
    std::cout << "*************** This Month's Amount of Money Saved Or Spent ***************"  << std::endl;
    std::cout << "      Housing:                    $"; std::cout << t_housing                  << std::endl;
    std::cout << "      Utilities:                  $"; std::cout << t_utilities                << std::endl;
    std::cout << "      Household Expenses:         $"; std::cout << t_householdExpenses        << std::endl;
    std::cout << "      Transportation:             $"; std::cout << t_transportation           << std::endl;
    std::cout << "      Food:                       $"; std::cout << t_food                     << std::endl;
    std::cout << "      Medical:                    $"; std::cout << t_medical                  << std::endl;
    std::cout << "      Insurance:                  $"; std::cout << t_insurance                << std::endl;
    std::cout << "      Entertainment:              $"; std::cout << t_entertainment            << std::endl;
    std::cout << "      Clothing:                   $"; std::cout << t_clothing                 << std::endl;
    std::cout << "      Miscellaneous:              $"; std::cout << t_miscellaneous            << std::endl;
    
    
    if(total < 0) {
        
        std::cout << "      You overspent:              $"; std::cout << total * -1 << std::endl;
        
    } else {
        
        std::cout << "      You saved:                  $"; std::cout << total      << std::endl;
        
    }
    
    std::cout << "***************************************************************************"  << std::endl;
    
    
}


int main() {
    
    MonthlyBudget budget, spent;
    
    displayData(budget, spent);
    
    return 0;
}

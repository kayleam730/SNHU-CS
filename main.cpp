// CS 210 Project Two
// Kaylea Carpenter
// June 8th, 2024

#include <iostream>
#include "Investment.h"

int main()
{
    double initialAmount, monthlyDeposit, annualInterestRate;
    int years;

    std::cout << "***********************************\n";
    std::cout << "********* DATA INPUT **************\n";
    std::cout << "Initial Investment Amount: ";
    std::cin >> initialAmount;
    std::cout << "Monthly Deposit: ";
    std::cin >> monthlyDeposit;
    std::cout << "Annual Interest (%): ";
    std::cin >> annualInterestRate;
    std::cout << "Number of years: ";
    std::cin >> years;

    std::cout << "Press any key to continue...";
    std::cin.ignore();
    std::cin.get(); // Wait for user to press Enter key

    Investment investment(initialAmount, monthlyDeposit, annualInterestRate, years);

    // Calculate and display growth with deposits
    std::cout << "\nYear-end balances and earned interest with monthly deposits:\n";
    std::cout << "Year\tBalance\t\tTotal Interest" << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;
    investment.calculate_growth_with_deposits();

    // Calculate and display growth without deposits
    std::cout << "\nYear-end balances and earned interest without additional deposits:\n";
    std::cout << "Year\tBalance\t\tTotal Interest" << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;
    investment.calculate_growth_without_deposits();

    return 0;
}
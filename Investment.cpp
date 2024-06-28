// CS 210 PROJECT TWO
// Kaylea Carpenter
// June 7th, 2024

#include <iostream>
#include <iomanip>
#include "Investment.h"

// Constructor definition
Investment::Investment(double init_amount, double month_deposit, double annual_rate, int years)
{
    initial_amount = init_amount;
    monthly_deposit = month_deposit;
    annual_interest_rate = annual_rate;
    number_of_years = years;
}

void Investment::calculate_growth_with_deposits()
{
    double balance = initial_amount;
    double total_interest = 0;

    std::cout << "Year\tBalance\t\tTotal Interest" << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;
    for (int year = 1; year <= number_of_years; ++year)
    {
        double yearly_interest = 0;
        for (int month = 1; month <= 12; ++month)
        {
            double monthly_interest = (balance + monthly_deposit) * (annual_interest_rate / 12 / 100);
            yearly_interest += monthly_interest;
            balance += monthly_deposit + monthly_interest;
        }
        total_interest += yearly_interest;
        std::cout << year << "\t$" << std::fixed << std::setprecision(2) << balance << "\t$" << total_interest << std::endl;
    }

    // Calculate and display static report with deposits
    double static_balance_with_deposits = balance;
    double static_interest_with_deposits = total_interest;
    std::cout << "\nYear-end balances and earned interest with additional monthly deposits:\n";
    std::cout << "Year\tBalance\t\tTotal Interest" << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << number_of_years << "\t$" << std::fixed << std::setprecision(2) << static_balance_with_deposits << "\t$" << static_interest_with_deposits << std::endl;
}

void Investment::calculate_growth_without_deposits()
{
    double balance = initial_amount;
    double total_interest = 0;

    std::cout << "Year\tBalance\t\tTotal Interest" << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;
    for (int year = 1; year <= number_of_years; ++year)
    {
        double yearly_interest = 0;
        for (int month = 1; month <= 12; ++month)
        {
            double monthly_interest = balance * (annual_interest_rate / 12 / 100);
            yearly_interest += monthly_interest;
            balance += monthly_interest;
        }
        total_interest += yearly_interest;
        std::cout << year << "\t$" << std::fixed << std::setprecision(2) << balance << "\t$" << total_interest << std::endl;
    }

    // Calculate and display static report without deposits
    double static_balance_without_deposits = balance;
    double static_interest_without_deposits = total_interest;
    std::cout << "\nYear-end balances and earned interest without additional monthly deposits:\n";
    std::cout << "Year\tBalance\t\tTotal Interest" << std::endl;
    std::cout << "-----------------------------------------------" << std::endl;
    std::cout << number_of_years << "\t$" << std::fixed << std::setprecision(2) << static_balance_without_deposits << "\t$" << static_interest_without_deposits << std::endl;
}

// CS 210 - Project Two
// Kaylea Carpenter
// June 8th, 2024

// Investment.h

#ifndef INVESTMENT_H
#define INVESTMENT_H

#include <iostream>
#include <iomanip>

class Investment
{
private:
    double initial_amount;
    double monthly_deposit;
    double annual_interest_rate;
    int number_of_years;

    // Additional variables for static reports
    double balance_without_deposits;
    double interest_without_deposits;
    double balance_with_deposits;
    double interest_with_deposits;

public:
    Investment(double init_amount, double month_deposit, double annual_rate, int years);

    void calculate_growth_with_deposits();
    void calculate_growth_without_deposits();

    void set_initial_amount(double amount);
    void set_monthly_deposit(double deposit);
    void set_annual_interest_rate(double interest);
    void set_number_of_years(int years);

    // Additional functions for static reports
    void calculate_static_reports();
    void display_static_reports();
};

#endif
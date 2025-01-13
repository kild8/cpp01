#include "Harl.hpp"

void Harl::debug()
{
    std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
    std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger!" << std::endl;
}

void Harl::warning()
{
    std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you just started working here last month." << std::endl;
}

void Harl::error()
{
    std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
    void (Harl::*functions[])() = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };

    for (size_t i = 0; i < 4; ++i)
    {
        if (level == levels[i])
        {
            (this->*functions[i])();
            return;
        }
    }
    std::cerr << "Invalid level: " << level << std::endl;
}
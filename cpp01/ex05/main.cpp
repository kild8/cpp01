#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl harl;
    std::string level = argv[1];

    if (level == "DEBUG")
        harl.complain("DEBUG");
    if (level == "INFO")
        harl.complain("INFO");
    if (level == "WARNING")
        harl.complain("WARNING");
    if (level == "ERROR")
        harl.complain("ERROR");
    return 0;
}
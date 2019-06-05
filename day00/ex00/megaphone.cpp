#include <iostream>

std::string str_toupper(std::string inputStr)
{
    for (size_t i = 0; i < inputStr.length(); i++)
    {
        inputStr.at(i) = std::toupper(inputStr.at(i));
    }
    return (inputStr);
}

int main(int argc, char const *argv[])
{
    std::string userInput;

    if (argc >= 2)
    {
        argv++;
        while (*argv)
        {
            userInput = static_cast<std::string>(*argv);
            std::cout << str_toupper(userInput);
            argv++;
        }
        std:: cout << "\n";
    }
    else
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    }
    return 0;
}

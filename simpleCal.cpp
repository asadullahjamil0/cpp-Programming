#include <iostream>

int main()
{
    int choice;
    int num;

    std::cout << "Hello, I am AsadUllah Jamil, Student Id = BC240216012 Welcome to the main menu" << '\n';
do
{
    std::cout<<"Please Select an option to proceed"<<'\n';
    std::cout << "1. Addition" << '\n';
    std::cout << "2. Subtraction" << '\n';
    std::cout << "3. Multiplication" << '\n';
    std::cout << "4. Division" << '\n';
    std::cout << "5. Exit" << '\n';
    std::cout << "Enter Your Choice: ";
    std::cin >> choice;

    switch (choice)
    {
    case 1:
    {
        int sum = 0;
        std::cout << "How many numbers do you want to add? ";
        std::cin >> num;

        for (int nextNum = 0; nextNum < num; nextNum++)
        {
            int add;
            std::cout << "Enter Number " << nextNum + 1 << ": ";
            std::cin >> add;
            sum += add;
        }
        std::cout << "Sum of your numbers is " << sum << '\n';

        break;
    }
    case 2:
    {

        int subt = 1;
        std::cout << "How many numbers do you want to subtract? ";
        std::cin >> num;

        std::cout << "Enter Number 1: ";
        std::cin >> subt;

        for (int nextNum = 1; nextNum < num; nextNum++)
        {
            int input;
            std::cout << "Enter Number " << nextNum + 1 << ": ";
            std::cin >> input;
            subt -= input;
        }
        std::cout << "subtraction of your numbers is " << subt << '\n';

        break;
    }
    case 3:
    {
        int mult = 1;
        std::cout << "How many numbers do you want to multiply?";
        std::cin >> num;

        for (int nextNum = 0; nextNum < num; nextNum++)
        {
            int input;
            std::cout << "Enter Number " << nextNum + 1 << ":";
            std::cin >> input;
            mult *= input;
        }
        std::cout << "Multiplication of your numbers is " << mult << '\n';

        break;
    }
    case 4:
    {
        int divisorCount;
        std::cout << "How many numbers do you want to divide by? ";
        std::cin >> divisorCount;
        std::cout << "Enter Number 1: ";
        std::cin >> num;
        double result;
        result = num;
        for (int nextNum = 1; nextNum < divisorCount; nextNum++)
        {
            float divisor;
            std::cout << "Enter number " << (nextNum + 1) << ": ";
            std::cin >> divisor;
            if (divisor != 0)
            {
                result /= divisor;
            }
            else
            {
                std::cout << "Error! Number cannot be divide by zero!";
            }
        }
        std::cout << "Division of your numbers is " << result << '\n';

        break;
    }
    case 5:
    {

        std::cout << "GoodBye Sir!";
        break;
    }
    default:
        std::cout << "Invalid choice! Please try again by another choice..";
        break;
    }
} while (choice != 5);

    return 0;
}
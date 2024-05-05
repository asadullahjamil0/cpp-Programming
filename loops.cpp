#include <iostream>

// main()
// {
//     char c;
//     int tryNum = 1;
//     do
//     {
//         std::cout << "Please enter your guess by pressing a character between z ";
//         std::cin >> c;
//         if (c == 'z')
//         {
//             std::cout << "Congratulation! You guessed the right answer ";
//            tryNum = 6;
//         }
//         else
//         {
//             tryNum = tryNum + 1;
//         }
//     } while (tryNum <= 5);
//     std::cout<<"Sorry try next time!.";
// }

// main()
// {
//     char c;
//     int tryNum = 1;
//     int maxTries = 5;
//     std::cout << "Please enter alphabet between a to z";
//     std::cin >> c;
//     while ((tryNum <= maxTries) && (c != 'z'))
//     {
//         std::cout << "guess the alphabet between a to z ";
//         std::cin >> c;
//         tryNum = tryNum + 1;
//     }
// }

// for-loop

main()
{
    int counter;
    int number;
    int maxMultipier;

    std::cout << "Please Enter number for table: ";
    std::cin >> number;
    std::cout << "Please Enter the range of your table: ";
    std::cin >> maxMultipier;

    for (counter = 1; counter <= maxMultipier; counter++)
    {
        std::cout << number << "x" << counter << "=" << counter * number << "\n";
    }
}

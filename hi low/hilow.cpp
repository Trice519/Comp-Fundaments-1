#include <iostream>

using namespace std;

int main()
{
   std::cout << "**\n";
   std::cout << "NUMBER GUESSING GAME\n";
   std::cout << "**\n\n";

   int userNumber = -1;

   while (userNumber > 100  userNumber < 1)
   {
       std::cout << "Choose a number between 1 and 100: ";
       std::cin >> userNumber;

       if (userNumber > 100  userNumber < 1)
       {
           std::cout << "The number must be between 1 and 100!\n\n";
       }
   }

   std::cout << '\n';

   int lowRange = 1;
   int highRange = 100;
   int currentGuess = 0;
   int numberOfGuesses = 0;
   char userResponse;

   currentGuess = (lowRange + highRange) / 2;

   while (currentGuess != userNumber)
   {

       std::cout << "Is the number less than " << currentGuess << "? (y/n) ";
       std::cin >> userResponse;

       if (userResponse == 'y')
       {
           highRange = currentGuess;
           currentGuess = (lowRange + highRange) / 2;
           numberOfGuesses += 1;
       }
       else if (userResponse == 'n')
       {
           lowRange = currentGuess + 1;
           currentGuess = (lowRange + highRange) / 2;
           numberOfGuesses += 1;
       }
       else
       {
           std::cout << "Please respond with y or n\n";
       }

       if (numberOfGuesses > 10) break;

   }

   std::cout << '\n';

   if (numberOfGuesses > 8)
   {
       std::cout << "The program entered an infinite loop and will now end\n"
           << "It is likely that a yes or no question was incorrectly answered.\n\n";
   }
   else
   {
       std::cout << "Your number is " << currentGuess << '\n';
       std::cout << "Number of guesses: " << numberOfGuesses << "\n\n";
   }


   return 0;
}
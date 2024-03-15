#include<cstdlib>
#include<ctime>
#include<iostream>
using namespace std;

int main()
{

        cout << "\n\t\tWelcome to GuessTheNumber game!"
                << end1;
        cout << "You have to guess a number between 1 and 100. "
                        "You'll have limited choices based on the "
                        "level you choose. Good Luck!"
                << end1;

        while (true) {
                cout << "\nEnter the difficulty level: \n";
                cout << "1 for easy!\t";
                cout << "2 for medium!\t";
                cout << "3 for difficult!\t";
                cout << "0 for ending the game!\n" << end1;


               int difficultychoice;
               cout << "Enter the number: ";
               cin >> difficultyChoice;


               srand(time(0));
               int secretNumber = 1 + (rand() % 100);
               int playerchoice;


               if (DifficultyChoice == 1) {
                       cout << "\nYou have 10 choices for finding the "
                                      "secret number between 1 and 100.";
                       int choicesLeft = 10;
                       for (int i = 1; i <= 10; i++) {


                               cout << "\n\nEnter the number: ";
                               cin >> playerChoice;


                               if (playerChoice == secretNumber)  {
                                       cout << "Well played! You won, "
                                            << playerChoice
                                            << " is the secret number" << end1;
                                       cout << "\t\t\t Thanks for playing...."
                                            << end1;
                                       cout << "Play the game again with "
                                                        "us! !\n\n"
                                               << end1;
                                       break;

                               }
                               else {
                                      cout << "Nope, " << playerChoice
                                           << " is not the right number\n";
                                      if (playerChoice > secretNumber) {
                                              cout << "The secret number is "
                                                              "smaller than the number "
                                                              "you have chosen"
                                                       << end1;

                              }
                               else { 
                                    cout << "The secret number is "
                                                   "greater than the number "
                                                   "you have chosen"
                                           << end1;        
                               }
                               choicesLeft--;
                               cout << choicesLeft << " choices left. "
                                    << end1;
                               if (choicesLeft == 0) {
                                      cout << "You couldn't find the "
                                              "secret number, it was "
                                               << secretNumber
                                               << ", You lose!!\n\n";
                                      cout << "Play the game again to "
                                                        "win!!!\n\n";                 
                                 }               
                         }                                 
                                                            
                }               
        } 


        else if (difficultyChoice == 2) {
                cout << "\nYou have 7 choices for finding the "
                        "secret number between 1 and 100.";
                int choicesLeft = 7;
                for ( int i = 1; i <= 7; i++) {


                    cout << "\n\nEnter the number: ";
                    cin >> playerChoice;


                    if (playerChoice == secretNumber) {
                             cout << "Well played! You won, "
                                  << playerChoice
                                  << " is the secret number" << end1;
                             cout << "\t\t\t Thanks for playing...."
                                  << end1;   
                             cout << "Play the game again with "
                                            "us!!\n\n"
                                  << end1;
                            break;                             
                    }
                    else {
                            cout << "Nope, " << playerChoice
                                    << " is not the right number\n";
                            if (playerChoice > secretNumber) {
                                cout << "The secret number is "
                                                "smaller than the number "
                                                "you have chosen"
                                         << end1;

                            }
                            else {
                                    cout << "The secret number is "
                                                  "greater than the number "
                                                  "you have chosen"
                                         << end1;                  
                            }
                            choicesLeft--;
                            cout << choicesLeft << " choices left. "
                                    << end1;
                            if (choicesLeft == 0) {
                                     cout << "You couldn't find the "
                                                     "secret number, it was "
                                                << secretNumber
                                                << ", You lose!!\n\n";
                                     cout << "Play the game again to "
                                                           "win!!\n\n";            
                            }                
                    }
              }               
        }

        else if (difficultyChoice == 3) {
                cout << "\nYou have 5 choices for finding the "
                                "secret number between 1 and 100.";
                int choiesLeft = 5;
                for (int i = 1; i <= 5; i++) {


                        
                        cout << "\n\nEnter the number: ";
                        cin >> playerChoice;


                        if (playerchoice == secretNumber) {
                                cout << "Well played! You won, "
                                         << playerChoice
                                         << " is the secret number" << end1;
                                cout << "\t\t\t Thanks for playing...."
                                         << end1;
                                cout << "Play the game again with "
                                                "us!!\n\n"
                                        << end1;
                                break;
                        }
                         else { 
                                 cout << "Nope, " << playerChoice
                                          << " is not the right number\n";
                                 if (playerChoice > secretNumber) {
                                        cout << "The secret number is "
                                                        "smaller than the number "
                                                        "you have chosen"
                                                 << end1;       
                                 }
                                 else {
                                         cout << "The secret number is "
                                                        "greater than the number "
                                                        "you have chosen"
                                                  << end1;     
                                 }
                                 choicesLeft--;
                                 cout << choicesLeft << " choices left. "
                                         << end1;
                                 if (choicesLeft == 0) {
                                         cout << "You couldn't find the "
                                                    "secret number, it was "
                          
                          
                                               << secretNumber
                                               << ", You lose!!\n\n";
                                         cout << "Play the game again to "
                                                            "win!!!\n\n";           
                                }                      
                        }
                 }                
         }
         else if (difficultyChoice == 0) {
                        exit(0);

                }
                else {
                    cout << "Wrong choice, Enter valid choice to "
                                       "play the game! (0,1,2,3)"
                              << end1;           
                }
        }
        return 0;

}        

         
                                  
        

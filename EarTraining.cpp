//+PROF+ADW: Where is the file headers?
#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;

const int noteC4 = 261;
const int noteCsharp4 = 277;
const int noteD4 = 293;
const int noteDsharp4 = 311;
const int noteE4 = 329;
const int noteF4 = 349;
const int noteFsharp4 = 369;
const int noteG4 = 392;
const int noteGsharp4 = 415;
const int noteA4 = 440;
const int noteAsharp4 = 466;
const int noteB4 = 493;
const int noteC5 = 523;
const int noteCsharp5 = 554;
const int noteD5 = 587;
const int noteDsharp5 = 622;
const int noteE5 = 659;
const int noteF5 = 698;
const int noteFsharp5 = 739;
const int noteG5 = 784;
const int noteGsharp5 = 830;
const int noteA5 = 880;
const int noteAsharp5 = 932;
const int noteB5 = 987;

void notes () // Runs the "notes" mode 
{
    srand (time(0));  //+PROF+ADW+: don't put srand here
    int menuselection;
    char answer;
    while (menuselection != 0)
   {
        
        cout << "Select a dificulty level or press 0 to quit the program." << endl;
        cout << "1. Single octave" << endl;
        cout << "2. Double Octave" << endl;
         //+PROF+ADW+: Quit here doesn't really quit but returns to main menu
        cout << "0. Quit" << endl;
        cin >> menuselection;
        if (menuselection == 1 || menuselection == 2)
        {
                switch (menuselection)
                {
                    case 1:
                    {
                        int randomNumber = rand() % 7 + 1;
                        switch (randomNumber) // Plays Note
                            {
                                case 1: Beep(noteC4,3000);
                                break;
                                case 2: Beep(noteD4,3000);
                                break;
                                case 3: Beep(noteE4,3000);
                                break;
                                case 4: Beep(noteF4,3000);
                                break;
                                case 5: Beep(noteG4,3000);
                                break;
                                case 6: Beep(noteA4,3000);
                                break;
                                case 7: Beep(noteB4,3000);
                                break;
                            }
                        cin.get();  //+PROF+ADW+: confusing
                        cout << "Enter your answer: ";  //+PROF+ADW+: You don't tell user how to enter or even 
                                // that you want a note letter in lower case
                        cin >> answer;
                        if (answer == 'c' && randomNumber == 1) cout << "Thats correct!" << endl;
                        else if (answer == 'd' && randomNumber == 2) cout << "Thats correct!" << endl;
                        else if (answer == 'e' && randomNumber == 3) cout << "Thats correct!" << endl;
                        else if (answer == 'f' && randomNumber == 4) cout << "Thats correct!" << endl;
                        else if (answer == 'g' && randomNumber == 5) cout << "Thats correct!" << endl;
                        else if (answer == 'a' && randomNumber == 6) cout << "Thats correct!" << endl;
                        else if (answer == 'b' && randomNumber == 7) cout << "Thats correct!" << endl;
                        else cout << "Sorry thats incorrect!" << endl;
                        break;
                    }
                    case 2:
                    {
                        int octave = rand() % 2 + 1;
                        int randomNumber = rand() % 7 + 1;
                        switch (randomNumber) // Plays Note
                            {
                                case 1: 
                                {
                                    if (octave == 1) Beep(noteC4,1000);
                                    else Beep(noteC5,1000);
                                }
                                break;
                                case 2: 
                                {
                                    if (octave == 1) Beep(noteD4,1000);
                                    else Beep(noteD5,1000);
                                }
                                break;
                                case 3: 
                                {
                                    if (octave == 1) Beep(noteE4,1000);
                                    else Beep(noteE5,1000);
                                }
                                break;
                                case 4: 
                                {
                                    if (octave == 1) Beep(noteF4,1000);
                                    else Beep(noteF5,1000);
                                }
                                break;
                                case 5: 
                                {
                                    if (octave == 1) Beep(noteG4,1000);
                                    else Beep(noteG5,1000);
                                }
                                break;
                                case 6: 
                                {
                                    if (octave == 1) Beep(noteA4,1000);
                                    else Beep(noteA5,1000);
                                }
                                break;
                                case 7: 
                                {
                                    if (octave == 1) Beep(noteB4,1000);
                                    else Beep(noteB5,1000);
                                }
                                break;
                            }
                        cin.get();
                        cout << "Enter your answer: ";
                        cin >> answer;
                        if (answer == 'c' && randomNumber == 1) cout << "Thats correct!" << endl;
                        else if (answer == 'd' && randomNumber == 2) cout << "Thats correct!" << endl;
                        else if (answer == 'e' && randomNumber == 3) cout << "Thats correct!" << endl;
                        else if (answer == 'f' && randomNumber == 4) cout << "Thats correct!" << endl;
                        else if (answer == 'g' && randomNumber == 5) cout << "Thats correct!" << endl;
                        else if (answer == 'a' && randomNumber == 6) cout << "Thats correct!" << endl;
                        else if (answer == 'b' && randomNumber == 7) cout << "Thats correct!" << endl;
                        else cout << "Sorry thats incorrect!" << endl;
                        break;                        
                    }
                }  
        }  
        else if (menuselection != 0)
        {
            cout << "Please choose a valid option" << endl;
            
        }
   }
}

void keys() // Runs the "keys" mode
{
    srand (time(0)); //+PROF+ADW+: do not put srand() in a subfunction - should only be run once
    int menuselection;
    char answer;
    while (menuselection != 0)
   {
        
        cout << "Enter 1 to start or 0 to quit" << endl;
        cout << "1. Start" << endl;
         //+PROF+ADW+: again, the "Quit" is not really quit, but return to main menu
        cout << "0. Quit" << endl;
        cin >> menuselection;
        if (menuselection == 1)
        {
            int randomNumber = rand() % 7 + 1;
            {
                switch (randomNumber) // Plays Note
                    {
                        case 1: // Key of C
                        {
                            Beep(noteC4,750);
                            Beep(noteD4,750);
                            Beep(noteE4,750);
                            Beep(noteF4,750);
                            Beep(noteG4,750);
                            Beep(noteA4,750);
                            Beep(noteB4,750);
                            Beep(noteC5,750);   
                        }
                            break;
                       case 2: // Key of D
                        {
                            Beep(noteD4,750);
                            Beep(noteE4,750);
                            Beep(noteFsharp4,750);
                            Beep(noteG4,750);
                            Beep(noteA4,750);
                            Beep(noteB4,750);
                            Beep(noteCsharp5,750); 
                            Beep(noteD5,750);  
                        }
                             break;
                        case 3: // Key of E
                        {
                            Beep(noteE4,750);
                            Beep(noteFsharp4,750);
                            Beep(noteGsharp4,750);
                            Beep(noteA4,750);
                            Beep(noteB4,750);
                            Beep(noteCsharp5,750);
                            Beep(noteDsharp5,750);
                            Beep(noteE5,750);   
                        }
                            break;
                        case 4: // Key of F
                        {
                            Beep(noteF4,750);
                            Beep(noteG4,750);
                            Beep(noteA4,750);
                            Beep(noteAsharp4,750);
                            Beep(noteC5,750);
                            Beep(noteD5,750);
                            Beep(noteE5,750);  
                            Beep(noteF5,750); 
                        }
                            break;
                        case 5: // Key of G
                        {
                            Beep(noteG4,750);
                            Beep(noteA4,750);
                            Beep(noteB4,750);
                            Beep(noteC5,750);
                            Beep(noteD5,750);
                            Beep(noteE5,750);
                            Beep(noteFsharp5,750);
                            Beep(noteG5,750);  
                        }
                                break;
                        case 6: // Key of A
                        {
                            Beep(noteA4,750);
                            Beep(noteB4,750);
                            Beep(noteCsharp5,750);
                            Beep(noteD5,750);
                            Beep(noteE5,750);
                            Beep(noteFsharp5,750);
                            Beep(noteGsharp5,750);
                            Beep(noteA5,750);   
                            }
                                break;
                        case 7: // Key of B
                        {
                            Beep(noteB4,750);
                            Beep(noteCsharp5,750);
                            Beep(noteDsharp5,750);
                            Beep(noteE5,750);
                            Beep(noteFsharp5,750);
                            Beep(noteGsharp5,750);
                            Beep(noteAsharp5,750);
                            Beep(noteB5,750);   
                        }
                            break;
                    }
                cin.get();
                cout << "Enter your answer: ";
                cin >> answer;
                if (answer == 'c' && randomNumber == 1) cout << "Thats correct!" << endl;
                else if (answer == 'd' && randomNumber == 2) cout << "Thats correct!" << endl;
                else if (answer == 'e' && randomNumber == 3) cout << "Thats correct!" << endl;
                else if (answer == 'f' && randomNumber == 4) cout << "Thats correct!" << endl;
                else if (answer == 'g' && randomNumber == 5) cout << "Thats correct!" << endl;
                else if (answer == 'a' && randomNumber == 6) cout << "Thats correct!" << endl;
                else if (answer == 'b' && randomNumber == 7) cout << "Thats correct!" << endl;
                else cout << "Sorry thats incorrect!" << endl;
            }
        }  
        else if (menuselection != 0)
        {
            cout << "Please choose a valid option" << endl;
            
        }
   }
}

int main()
{
    int menuselection;
    cout << "Welcome to the Ear Training Program!" << endl;
    while (menuselection != 0)
   {
        cout << "What would you like to practice today?" << endl;
        cout << "1. Notes" << endl;
        cout << "2. Keys" << endl;
        cout << "0. Quit" << endl;
        cin >> menuselection;
        if (menuselection == 1 || menuselection == 2)
        {
            switch (menuselection)
            {
                case 1: notes();
                        break;
                case 2: keys();
                        break;

            }     
        }
        else if (menuselection != 0) cout << "Please choose a valid option" << endl;
   }
    cout << "Thank you for using the Ear Training Program!" << endl;
    return 0;
}
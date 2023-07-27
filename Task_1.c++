#include <iostream>
#include <iomanip> 
#include <ctime>
using namespace std;
char chr;

int main()
{
srand(time(NULL));                                           //the function that generates random numbers
int number=rand()%100+1;                                     //the range of the random numbers
int guess;                                                   //The guess is stored here
int tries=0;                                                 //The number of tries stored here
   char answer;                                                 //The answer to the question is stored here
answer='y';                  

while(answer=='y'||answer=='Y') 
{
    while (tries<=20 && answer=='y'|| answer=='Y')
    {
    cout<<"Enter a number between 1 and 100 "<<endl;          //The user is asked for a guess
    cin>>guess;                                               //The guess is stored here
    tries++;                                                 //Adding a number for every try
    if(guess==0||guess>100)                                  //If statement that produces an error message if user enters a number out of the peramiters
    {
     cout<<"This is not an option try again"<<endl;          //Error message
    }

    if(tries<20)                                            
    cout<<"Tries left: "<<(20-tries)<<endl;                   //Output to let the user know how many guess they have left
    if(number<guess);                                         //if the guess is to high
    cout<<"Too high try again"<<endl;                        //This message prints if guess it to high

    if(number>guess)                                          //if the guess is to low
    cout<<"Too low try again"<<endl;
    break;                          //This message prints if the guess is to low

    if(number==guess)                                          //If the user guesses the number
    {
     cout<<"Congratualtions!! "<<endl;                          //Message printed out if the user guesses correctly
     cout<<"You got the right number in "<<tries<<" tries"<<endl;  //Lets the user know how many guess they used
     answer = 'n';
    }
    if(tries >= 20)                                               //If the user uses all their guesses
    {
    cout << "You've run out of tries!"<<endl;                      //The message that prints when a user is out of guesses
    answer='n';
    }
    if(answer=='n')
    {
     cout<<"Would you like to play again?  Enter Y/N"<<endl;       //asking if play would like to play again
     cin>>answer;                                                  //Store users answer
     if (answer=='N'|| answer=='n')                                //if the user says no
     cout<<"Thanks for playing!"<<endl;                            //This message prints out if they choose not to play again

    else
        number=rand()%100+1;                                        //This starts the game over if they choose to play again
    }

    }
    }

cin>>chr;
    return 0;

}
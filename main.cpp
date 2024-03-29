#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    string easyQuestions[20] = {"Can a kangaroo jump higher than the Burj Khalifa?", "Are british people real?", "Do you have a deadly disease or do you just look like that?", "What is Mr.Rogan's full name?", "Who is the best programmer?", "Why did the tech crew scream with fear?", "Is this fun?", "Why did the phone weigh more than your mother?", "How old is Queen Elizabeth", "Why did the chicken cross the road?", "How tall is Alex Teeples?", "Is 90 * 2416/543 an even or odd number?", "Do you have a good screentime", "How old are you?", "What are the silly numbers on your credit card?", "What is your social security number?", "What's your DOB", "Your mother's maiden name?", "Bank account number?", "Did you answer truthfully :)"};
    int attempts = 0;
    

    cout << "Welcome to Alex's wonderful trivia! Do you want to play? Just kidding! You have to :)" << endl;
    for(int i = 0; i < 20; i++){
    int guess;
    attempts += 1;
    srand(rand() ^ time(0));
    int easyIdx = rand() % 20;
    string eQuestion = easyQuestions[easyIdx];
    cout << "Time for the fun to begin! Now answer these questions: " << eQuestion << endl;
    cin >> guess;
    }


    return 0;
}
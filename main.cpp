#include <iostream>
#include <random>
#include <iomanip>

using namespace std;

int getRandom1To100() {
    static std::random_device rd;
    static std::mt19937 gen(rd());
    static std::uniform_int_distribution<> dist(1, 100);
    return dist(gen);
}

int main(){
    int actualRandom {getRandom1To100()};
    int guess{};
    int count{0};
    do{
        do {
        std::cout << "Guess a random number between 1 and 100" << endl;
        std::cin >> guess;
        } while (guess < 1 || guess > 100);
    // Update the count
    count++;
    
    // Implementing the Hints
    if((actualRandom-guess) >= 10 ){
        cout << "💡Hint: Guess is too low, try again" << endl; 
    }
    if((actualRandom-guess) <= -10 ){
        cout << "💡Hint: Guess is too high, try again" << endl; 
    }
    } while (actualRandom != guess);
    
        cout << "🔥👨‍🎓 Wow...Big congrats, you guessed it right in " << count << " tries " << endl;
        cout << "The random number is: " << actualRandom << endl;
    
    return 0;
    }

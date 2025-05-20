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
    int actualRandom = getRandom1To100();
    std::cout << actualRandom << endl;
    int guessedRandom{};
    std::cout << "Guess a random number between 1 and 100" << endl;
    std::cin >> guessedRandom;
    if(!(guessedRandom) || guessedRandom < 1 || guessedRandom > 100)
        cerr << "Invalid entry, please choose another number" << endl;
        return 1;
    
    // Compare the actual random num and the guessed num
    if(actualRandom != guessedRandom)
        cout << "Oops... you missed it at the " /*<< nth*/ << " try. Guess another number." << endl;
        cout << "🔥👨‍🎓 Wow...Big congrats, you got it right at your " /*<< nth*/ << " try " << endl;
        cout << "The actual random is: " << actualRandom << endl;
    
    return 0;
    }

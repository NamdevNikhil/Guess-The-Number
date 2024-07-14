#include <bits/stdc++.h>
using namespace std;
 
int main(){

    srand(time(0));

    int num = rand() % 1000 + 1;
    int attempts = 0;
    int guess;

    cout << "Welcome to the 'Guess the Number Game' between 1 to 1000" << endl;

    do{
        cout << "Enter your Number : ";
        cin >> guess;
        attempts++;

        if(guess > num) cout << "Too high, Please Try Again!" << endl;
        else if(guess < num) cout << "Too Low, Please Try Again!" << endl;
        else cout << "'Congratulations!' You guessed the number in " << attempts << " attempts" << endl;
    }
    while(guess != num);

    return 0;

}
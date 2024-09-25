#include <iostream>
#include <cstdlib> 

using namespace std;

int main() {
    int randomNumber = rand() % 100 + 1;      
    int guess;
    

    cout << "welcome! to game"<<" "<< endl;
    
    cout<<"_____"<<endl;
    
    cout << "just here you guess the no."<<" " << endl;
    
    cout<<"_____"<<endl;
    

    if(guess != randomNumber)
    {
    
        cout << "Enter your guess: ";
        cin >> guess;
        cout<<guess<<endl;
        int result=0;
        cout<<"correct answer is"<<" ->"<<randomNumber;
        cout<<" "<<endl;

        if (guess > randomNumber) {
        
        cout<<"_____"<<endl;
            cout << "Too high" << endl;
            
            cout<<"_____"<<endl;
            
        } else if (guess < randomNumber) {
            cout << "Too low " << endl;
           
           cout<<"_____"<<endl;
            
        } else {
            cout << "congratulation you win the game" << result<< " attempts." << endl;
        }
    } 
    

    return 0;
}

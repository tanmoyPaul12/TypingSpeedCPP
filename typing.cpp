#include <iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main(){
    srand(time(NULL));
    cout<<"Welcome to typing test"<<endl;
    cout<<"......................"<<endl<<endl;

    cout<<"Enter the given statement:"<<endl;

    string sentences[] = {
    "You get what you work for, not what you wish for.",
    "The quick brown fox jumps over the lazy dog.",
    "practice makes perfect.",
    "Donot watch the clock; do what it does. Keep going.",
    "Where focus goes, energy flows.",
    "Discipline is doing what needs to be done, even when you donot feel like doing it."
    } ;

    int total = sizeof(sentences)/sizeof(sentences[0]);
    int random = rand() % total ; // a random index of sentence we will get
    string sentence = sentences[random];
    cout<<sentence<<endl;

    time_t start = time(NULL);
    string input;
    // cout<<input<<endl;
    getline(cin, input);
    
    time_t end = time(NULL);

    double timeUsed = difftime(end,start);

    int words = 1;
    for (int i = 0; i<input.length(); i++){
        if(input[i]== ' '){
            words++;
        }
    }
                                    // speed in min
    int wpm = (words/timeUsed)*60;
    
    cout<<"Time Required: "<<timeUsed<<" seconds"<<endl;
    cout<<"Speed: "<<wpm<<" WPM"<<endl;
    
    
    
    
    return 0;
}
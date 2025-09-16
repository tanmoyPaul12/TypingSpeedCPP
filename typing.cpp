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
    "Don’t watch the clock; do what it does. Keep going.",
    "Where focus goes, energy flows.",
    "Discipline is doing what needs to be done, even when you don’t feel like doing it."
    } ;

    int total = sizeof(sentences)/sizeof(sentences[0]);
    int random = rand() % total ; // a random index of sentence we will get
    string sentence = sentences[random];
    
    
    
    
    
    
    
    
    return 0;
}
//Dialog of the first example is given below.

/*
Fahsai: Sawadee ka...Can you tell me your name?
?????: Luke Skywalker
Fahsai: Wow!!! Luke Skywalker is a really cool name.
Fahsai: I think you are an Engineering student. What is your student ID?
Luke Skywalker: 590610999
Fahsai: I think you may be GEAR 47. I have a free movie ticket for you.
Fahsai: Let's go to the cinema together!!!
Fahsai: What movie do you want to watch?
Luke Skywalker: Star Wars VII
Fahsai: So....which day are you free to go with me?
Luke Skywalker: Next Monday
Fahsai: Next Monday....that is OK!!! I'm looking forward to watching Star Wars VII with you.
Luke Skywalker: May the Force be with you krub
Fahsai: 555+ see you Next Monday. Bye Bye \(^ ^)/
*/


#include <iostream>
using namespace std;
int main(){
    string name ,movie,N,M,day,D,x;
    int no,gear;


    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout << "?????: ";
    getline(cin,name);
    cout << "Fahsai: Wow!!! "<< name << " is a really cool name.\n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout << name << ": ";
    cin >> no;
    cout << "Fahsai: I think you may be GEAR ";
    gear = no/10000000-12;
    cout << gear << ". I have a free movie ticket for you.\n";
    cout << "Fahsai: Let's go to the cinema together!!!\nFahsai: What movie do you want to watch?\n";
    cout << name <<": ";
    N = name;
    cin.ignore();
    getline(cin,movie);
    // getline(cin,movie);
    cout << "Fahsai: So....which day are you free to go with me?\n";
    cout << N <<": ";
    M = movie;
    // cin.ignore();
    getline(cin,day);
    // getline(cin,day);
    cout << "Fahsai: " <<  day <<"....that is OK!!! I'm looking forward to watching "<< M <<" with you.\n";
    D = day;
    cin.ignore();
    cout << N << ": ";
    getline(cin,x);
    // getline(cin,x);
    cout << "Fahsai: 555+ see you " << day << ". Bye Bye \\(^ ^)/";


}
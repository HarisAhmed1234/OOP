#include <iostream>

using namespace std;

inline double calculateBattingAverage(int runs, int outs) {
    if (outs == 0) {
        return 0; 
    }
    return static_cast<double>(runs) / outs;
}

inline double calculateStrikeRate(int runs, int balls) {
    if (balls == 0) {
        return 0; 
    }
    return (static_cast<double>(runs) / balls) * 100;
}

int main() {
    cout<<"-Haris Ahmed BsAi 23k6005-"<<endl;
    cout<<endl;
    int runs, outs, balls;
    
    cout<< "Enter total runs scored: ";
    cin>>runs;
    cout<<"Enter number of times out: ";
    cin>>outs;

    cout<<"Enter total balls faced: ";
    cin>>balls;

    double battingAverage = calculateBattingAverage(runs, outs);
    
    double strikeRate = calculateStrikeRate(runs, balls);
    
    cout << "Batting Average: " << battingAverage << endl;
    cout << "Strike Rate: " << strikeRate << endl;

    return 0;
}

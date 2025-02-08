#include <ctime>
#include <iostream>
#include <cstdlib>
using namespace std;

void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
bool isWinner(int horseNum, int* horses);

int main(){
    //set up the random num
    srand(time(0));
    //define variables in main
    int horses[5] = {0,0,0,0,0};
    bool keepGoing = true;
    //test advance()
    advance(3, horses);
    cout << "horses: " << horses[3] << endl;
}

void advance(int horseNum, int* horses){
    if (rand() % 2 == 1){
        horses[horseNum]++;
    }
}

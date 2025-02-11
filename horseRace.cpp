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
    //test advance() and printLane()
    //advance(3, horses);
    //printLane(3, horses);
    while (keepGoing){
        for (int i = 0; i < 5; i++){
            advance(i, horses);
	}
	for (int j = 0; j < 5; j++){
	    printLane(j, horses);
	    if (isWinner(j, horses)){
	        keepGoing = false;
		cout << "Horse " << j << " wins" <<endl;
	    }
	}
	cin.get();
    }
}

void advance(int horseNum, int* horses){
    if (rand() % 2 == 1){
	    horses[horseNum]++;
    }
}

void printLane(int horseNum, int* horses){
    char track[15];
    for (int i = 0; i < 15; i++){
        track[i] = '.';
    }
    char horseChar = horseNum + '0';
    track[horses[horseNum]] = horseChar;
    for (int j = 0; j < 15; j++){
        cout << track[j];
    }
    cout << endl;
}

bool isWinner(int horseNum, int* horses){
    if (horses[horseNum] == 14){
        return true;
    }
    else {
        return false;
    }
}


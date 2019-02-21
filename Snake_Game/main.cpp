#include<iostream>

using namespace std;

bool gameOver;

// Game Map
const int width = 20;
const int height = 20;

int score, fruitX, fruitY, x, y;

enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
eDirection dir;

void Setup(){
    gameOver = false;
    dir = STOP;
    x = width / 2;
    y = width / 2;

    fruitX = rand() % width;
    fruitY = rand() % height;

    score = 0;
}

void Draw(){
    system("clear");

    // Top Wall
    for(int i = 0; i < width+2; i++)
        cout<<"#";
    
    cout<<endl;

    // Middle Wall
    for(int i=0; i < height; i++){
        for(int j=0; j < width; j++){
            if (j == 0)
                cout << "#";
            if (i == y && j == x)
                cout << "O";
            else if (i == fruitY && j == fruitX)
                cout << "F";
            else
                cout<<" ";
            
            if(j == width - 1)
                cout<<"#";
        }
        cout<<endl;
    }

    // Bottom Wall;
    for(int i = 0; i < width+2; i++)
        cout<<"#";
    
    cout<<endl;

    gameOver = true;
}

void Input(){

}

void Logic(){

}

int main(){

    Setup();

    while(!gameOver){
        Draw();
        Input();
        Logic();
    }

    return 0;
}
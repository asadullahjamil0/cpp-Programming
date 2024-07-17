#include <iostream>
#include <cstdlib> // Include this for rand() function
#include <ctime>   // Include this for time() function
using namespace std;

bool gameOver;
const int width = 20;
const int height = 20;
int x, y, fruitX, fruitY, score;
enum eDirection
{
    STOP = 0,
    LEFT,
    RIGHT,
    UP,
    DOWN
};
eDirection dir;

void Setup()
{
    gameOver = false;
    dir = STOP;
    x = width / 2;
    y = height / 2;
    // Generate random positions within the game boundaries
    fruitX = rand() % (width - 1) + 1; // Add 1 to avoid spawning on the walls
    fruitY = rand() % (height - 1) + 1; // Add 1 to avoid spawning on the walls
    score = 0;
}

void Draw()
{
    system("cls"); // system clear
    for (int i = 0; i < width + 2; i++)
    {
        cout << "#";
    }
    cout << endl;

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++) // Corrected this line
        {
            if (j == 0)
            {
                cout << "#";
            }
            if (i == y && j == x)
            {
                cout << ""; // Snake's head
            }
            else if (i == fruitY && j == fruitX)
            {
                cout << "F"; // Fruit
            }
            else
            {
                cout << " ";
            }
            if (j == width - 1)
            {
                cout << "#";
            }
        }
        cout << endl;
    }

    for (int i = 0; i < width + 2; i++)
    {
        cout << "#";
    }
    cout << endl;
}
void Input()
{
}
void Logic()
{
}

int main()
{
    srand(time(NULL)); // Seed the random number generator
    Setup();
    while (!gameOver)
    {
        Draw();
        Input();
        Logic();
    }
    return 0;
}

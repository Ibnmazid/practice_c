#include <stdio.h>
#include <conio.h>  // For _kbhit() and _getch()
#include <windows.h> // For Sleep()
#include <stdlib.h>  // For rand()

#define WIDTH 20
#define HEIGHT 20

int gameOver;
int x, y, foodX, foodY, score;
int tailX[100], tailY[100]; // To store tail positions
int tailLength;

// Enum for directions
enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
enum eDirection dir;

// Function to set up the game
void setup() {
    gameOver = 0;
    dir = STOP;
    x = WIDTH / 2;
    y = HEIGHT / 2;
    foodX = rand() % WIDTH;
    foodY = rand() % HEIGHT;
    score = 0;
    tailLength = 0;
}

// Function to draw the board
void draw() {
    system("cls"); // Clear screen

    for (int i = 0; i < WIDTH + 2; i++) printf("#"); // Top border
    printf("\n");

    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            if (j == 0) printf("#"); // Left border

            if (i == y && j == x) printf("O"); // Snake head
            else if (i == foodY && j == foodX) printf("F"); // Food
            else {
                int printTail = 0;
                for (int k = 0; k < tailLength; k++) {
                    if (tailX[k] == j && tailY[k] == i) {
                        printf("o"); // Snake tail
                        printTail = 1;
                    }
                }
                if (!printTail) printf(" "); // Empty space
            }

            if (j == WIDTH - 1) printf("#"); // Right border
        }
        printf("\n");
    }

    for (int i = 0; i < WIDTH + 2; i++) printf("#"); // Bottom border
    printf("\n");

    printf("Score: %d\n", score);
}

// Function to handle input
void input() {
    if (_kbhit()) {
        switch (_getch()) {
            case 'a':
            case 75: dir = LEFT; break; // Left arrow key
            case 'd':
            case 77: dir = RIGHT; break; // Right arrow key
            case 'w':
            case 72: dir = UP; break; // Up arrow key
            case 's':
            case 80: dir = DOWN; break; // Down arrow key
            case 'x': gameOver = 1; break; // Quit game
        }
    }
}

// Function to update the game logic
void logic() {
    int prevX = tailX[0], prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = x;
    tailY[0] = y;

    for (int i = 1; i < tailLength; i++) {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }

    switch (dir) {
        case LEFT:  x--; break;
        case RIGHT: x++; break;
        case UP:    y--; break;
        case DOWN:  y++; break;
        default: break;
    }

    if (x >= WIDTH) x = 0; else if (x < 0) x = WIDTH - 1;
    if (y >= HEIGHT) y = 0; else if (y < 0) y = HEIGHT - 1;

    for (int i = 0; i < tailLength; i++) {
        if (tailX[i] == x && tailY[i] == y) gameOver = 1; // Snake hits itself
    }

    if (x == foodX && y == foodY) { // Snake eats food
        score += 10;
        foodX = rand() % WIDTH;
        foodY = rand() % HEIGHT;
        tailLength++;
    }
}

// Main function
int main() {
    setup();
    while (!gameOver) {
        draw();
        input();
        logic();
        Sleep(100); // Control game speed
    }
    printf("\nGame Over!\n");
    return 0;
}

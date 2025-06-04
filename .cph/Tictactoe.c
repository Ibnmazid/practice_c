#include <stdio.h>

int main() {
    char board[3][3] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    };
    int moves = 0, pos, row, col;
    char player, winner = 0;

    printf("Tic-Tac-Toe Game\n Player 1: 0\nPlayer 2: *\n");

    while (moves < 9 && winner == 0) {
        for (int i = 0; i < 3; i++) {
            printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
            if (i < 2) printf("---+---+---\n");
        }
        player = (moves % 2 == 0) ? '0' : '*';
        printf("Player %d (%c), enter position (1-9): ", (moves % 2) + 1, player);
        scanf("%d", &pos);

        if (pos < 1 || pos > 9) {
            printf("Invalid.\n");
            continue;
        }

        row = (pos - 1) / 3;
        col = (pos - 1) % 3;

        if (board[row][col] == '0' || board[row][col] == '*') {
            printf("Already filled.\n");
            continue;
        }

        board[row][col] = player;
        moves++;

        for (int i = 0; i < 3; i++) {
            if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
                winner = board[i][0];
            if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
                winner = board[0][i];
        }
        if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
            winner = board[0][0];
        if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
            winner = board[0][2];
    }


    for (int i = 0; i < 3; i++) {
        printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
        if (i < 2) printf("---+---+---\n");
    }


    if (winner == '0')
        printf("Player 1 win.\n");
    else if (winner == '*')
        printf("Player 2 win.\n");
    else
        printf("draw!\n");

    return 0;
}

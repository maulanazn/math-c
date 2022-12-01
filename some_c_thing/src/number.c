#include "../include/number.h"

int fib_from_last_number(int n) {
    int last = 1;
    int prev = 0;
    int i;

    for (i = 0; i < n; ++i) {
        int next = prev + last;

        prev = last;
        last = next;

        printf("%d\n", next);
    }

    return last;
}

int fib_from_previous_number(int n) {
    int last = 1;
    int prev = 0;
    int i;

    for (i = 0; i < n; ++i) {
        int next = prev + last;

        prev = last;
        last = next;

        printf("%d\n", next);
}

return prev;
}

int sequence(int n) {
    for (int i = n; i > 0; i--) {
        printf("%d\n", i);
    }
}

int tictactoe() {
    char matrix[3][3];

    void initmatrix(void) {
        int i, j;
        for (i = 0; i < 3; i++) {
            for(j = 0; j < 3; j++)
                matrix[i][j] = ' ';
        }
    }

    void get_player_move(void) {
        int x, y;

        printf("enter coordinate x and y to move!\n");  
        scanf("%d%*c%d", &x, &y);

        --x;
        --y;

        if (matrix[x][y] != ' ') {
            printf("invalid move, try again\n");
            get_player_move();
        } else {
            matrix[x][y] = 'X';
        }
    }

    void get_computer_move(void) {
        int i, j;

        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++)
                if (matrix[i][j] == ' ') break;
            if (matrix[i][j] == ' ') break;
        }

        if (i * j == 9) {
            printf("draw!\n");
            exit(0);
        } 
        else 
            matrix[i][j] = 'O';
    }

    void disp_matrix(void) {
        int t;
        for (t = 0; t < 3; t++) {
            printf(" %c  |  %c  |  %c ", matrix[t][0], matrix[t][1], matrix[t][2]);
            if (t != 2)  printf("\n---|---|---\n");
        }
        printf("\n");
    }

    char check() {
        int i;

        for (i = 0; i < 3; i++) 
            if (matrix[i][0] == matrix[i][1] && matrix[i][0] == matrix[i][2])
                return matrix[i][0];

        for (i = 0; i < 3; i++) 
             if (matrix[0][i] == matrix[1][i] && matrix[0][i] == matrix[2][i])
                return matrix[0][i];

        if (matrix[0][0] == matrix[1][1] && matrix[1][1] == matrix[2][2])
            return matrix[0][0];

        if (matrix[0][2] == matrix[1][1] && matrix[1][1] == matrix[2][0]) 
            return matrix[0][2];

        return ' ';
    }

    int play() {
        char done;

        printf("this is game of tictactoe\n");
        printf("you will play against computer\n");

        done = ' ';
        initmatrix();
        do
        {
            disp_matrix();
            get_player_move();
            done = check();
            if (done != ' ') break;
            get_computer_move();
            done = check();
        } while (done == ' ');
        
        if (done == 'X') printf("You won!\n");
        else printf("i won!\n");
        disp_matrix();

        return 0;
    }


    play();
}

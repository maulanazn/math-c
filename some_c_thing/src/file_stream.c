#include "../include/file_stream.h"

struct foodStage {
    FILE *file;
    char get_char[100];
} fds;

int storefood() {
    struct foodStage *fd;
    fd = &fds;

    fd->file = fopen("/home/maulanazn/DevStack/math-c/data/open.txt", "r");
    if (ferror(fd->file)) {
        printf("errorrrrrrr\n");
        exit(1);
    }

    do
    {
        printf("enter your name\n");
        fd->get_char[100] = getchar();
        strcat(fd->get_char, "\n");
        fputs(fd->get_char, fd->file);
    } while (*fd->get_char != '\n');

    rewind(fd->file);

    while(!feof(fd->file)) {
        fgets(fd->get_char, 100, fd->file);
        printf(fd->get_char);
    }
    
    return 0;
}
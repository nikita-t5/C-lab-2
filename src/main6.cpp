#include"task6.h"

int main()
{
    char line[SIZE] = { 0 };
    printf("enter a line\n");
    fgets(line, SIZE, stdin);
    if (line[strlen(line) - 1] == '\n')
        line[strlen(line) - 1] = '\0';
    printf(clear(line));
    return 0;
}
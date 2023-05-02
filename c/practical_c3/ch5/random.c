#include <stdio.h>

int main()
{

    int height;
    int width;
    char line[100];

    printf("Enter width and height\n");
    fgets(line, sizeof(line),stdin);
    sscanf(line, "%d %d", &width, &height);

    printf("The area is %d",width*height);

    return 0;
}
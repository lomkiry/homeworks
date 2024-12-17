#include <stdio.h>
#define MAXHOUSES 10
#define MAXADRESS 100

struct flat
{
    char address[MAXADRESS];
    int floor;
    int rooms;
    int rent;
};

void setflat(struct flat *p);
void viewflat(struct flat *p);
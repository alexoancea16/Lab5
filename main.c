#include "stive.h"

int main()
{
    Node *p=NULL;
    char x='a',y='b',ch;
    push(&p,x);
    push(&p,y);
    printf("Elemantele din stiva sunt: ");
    ch=pop(&p);
    printf("%c ",ch);
    ch=pop(&p);
    printf("%c ",ch);
    deleteStack(&p);
    return 0;
}

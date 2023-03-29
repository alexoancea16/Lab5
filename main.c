#include "stive.h"
#include "coada.h"
#include <string.h>

int main()
{
    Node *p=NULL;
    Queue *q=NULL;
    char c,sir[]="3*)(4+(5-3)*5+(3+7)";
    int poz=0,i,x[20];
    int n,y;
    for(i=0;i<strlen(sir);i++)
    {
        if(sir[i]=='(')
        {
            push(&p,sir[i]);
            x[poz]=i;
            poz++;
        }
        else
            if(sir[i]==')')
            {
                if(p!=NULL)
                {
                    c=pop(&p);
                    if(c=='(')
                        poz--;
                }
                else
                {
                        x[poz]=i;
                        poz++;
                }
            }
    }
    if(poz==0)
        printf("Totul este corect!");
    else
    {
        printf("Pozitiile proste sunt: ");
        for(i=0;i<poz;i++)
            printf("%d ",x[i]);
    }
    deleteStack(&p);
    q=createQueue();
    printf("Cate elemente? n=");
    scanf("%d",&n);
    printf("Introduceti numerele: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&y);
        enQueue(q,y);
    }
    for(i=0;i<n;i++)
    {
        y=deQueue(q);
        printf("%d ",y);
    }
    return 0;
}

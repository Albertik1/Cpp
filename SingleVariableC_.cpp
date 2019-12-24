#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
struct PolynA{
    int coef;
    int expn;
}p1[150];

struct PolynB{
    int coef;
    int expn;
}p2[150];

struct PolynC{
    int coef;
    int expn;
}p3[250];

int compare(int a, int b){
    if (a < b)
        return -1;
    else if (a > b)
        return 1;
    return 0;
}

void AddPolyn(int endA, int endB, struct PolynA *a, struct PolynB *b){
    int curA=0, curB=0, curC=0, i=0;
    struct PolynC *c;
    c=p3;

    while (curA <= endA || curB <= endB){
        switch(compare(a[curA].expn, b[curB].expn)){
        case -1:
            if (b[curB].coef == 0 && b[curB].expn == 0){

                c[i].coef=a[curA].coef;
                c[i].expn=a[curA].expn;
                curA++;
            }
            else{

                c[i].coef=b[curB].coef;
                c[i].expn=b[curB].expn;
                curB++;
            }
            i++;
            break;
        case 0:

            c[i].coef=a[curA].coef+b[curB].coef;
            c[i].expn=b[curB].expn;
            curA++;
            curB++;
            i++;
            break;
        case 1:
            if (a[curA].coef == 0 && a[curA].expn == 0){

                c[i].coef=b[curB].coef;
                c[i].expn=b[curB].expn;
                curB++;
            }
            else{

                c[i].coef=a[curA].coef;
                c[i].expn=a[curA].expn;
                curA++;
            }
            i++;
            break;
        }
    }

    for(curC=0; curC<i; curC++)
        if (c[curC].coef != 0){
            cout<<c[curC].coef<<" "<<c[curC].expn<<" ";
            c[curC].coef=c[curC].expn=0;
        }
    cout<<"\n";
}

int main(){
    char strA[1000], strB[1000];
    char *delim=" ";
    char *splA, *splB;
    struct PolynA *pa; struct PolynB *pb;
    pa=p1;
    pb=p2;

    while(gets(strA) && strlen(strA)){

        int i=0, j=0;

        splA=strtok(strA, delim);
        while(splA != NULL){
            pa[i].coef=atoi(splA);
            splA=strtok(NULL, delim);
            pa[i].expn=atoi(splA);
            splA=strtok(NULL, delim);
            i++;
        }

        gets(strB);

        splB=strtok(strB, delim);
        while(splB != NULL){
            pb[j].coef=atoi(splB);
            splB=strtok(NULL, delim);
            pb[j].expn=atoi(splB);
            splB=strtok(NULL, delim);
            j++;
        }

        AddPolyn(i-1, j-1, pa, pb);

        int k;
        for (k=0; k<i; k++)
            pa[k].coef=pa[k].expn=0;
        for (k=0; k<j; k++)
            pb[k].coef=pb[k].expn=0;
    }
    return 0;
}

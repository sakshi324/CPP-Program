#include<stdio.h>

struct Demo{
int i;
int j;

};

struct hello{
    int no;
    float f;

    struct Demo dobj;
};

int main(){
    struct hello hobj;

    hobj.no=11;
    hobj.f=12.22;
    hobj.dobj.i=10;
    hobj.dobj.j=23;

    printf("%d",hobj.dobj.i);

    return 0;

}


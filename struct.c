#include<stdio.h>

int main(){
    struct array
    {
        int n;
        int c;
    };
    
    struct decu
    {
        int y ;
        struct array p;
    };
    
    struct array point = {0,2};

    struct decu pt = {0,{7,8}};

    printf("%d", pt.p.c);
    
}
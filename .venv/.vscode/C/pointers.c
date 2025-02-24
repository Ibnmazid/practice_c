#include <stdio.h>

void problem_12_1(void);
void declaring_pointers(void);
void problem_12_2();
void chain_of_pointers(void);
void Three_Level_Pointer(void);

int main(){
    problem_12_1();
    declaring_pointers();
    problem_12_2();
    chain_of_pointers();
    Three_Level_Pointer();
    
}

void problem_12_1(){
    int x;
    char a;
    float p,q;

    x=10;
    a ='A';
    p=6.5,q=7.6;

    printf("%d is stored at adrress:%u \n",x,&x);
    printf("%c is stored at adrress:%u \n",a,&a);
    printf("%.2f is stored at adrress:%u \n",p,&p);
    printf("%.2f is stored at adrress:%u \n\n\n",q,&q);
}

void declaring_pointers(){
    int x=5, *pt=&x , y=*pt;
    //int y, x=5;
    //pt=&x;

    y=*pt;
    printf("adress:%u\n",pt);
    printf("real adress:%u\n",&x);
    printf("value of x:%d",y);
}

void problem_12_2(){
    int x,y, *ptr;
    x=5;
    ptr=&x;
    y=*ptr;

    printf("Value of x is %d \n\n",x);
    printf("%d is stored at addr %u\n",x,&x);
    printf("%d is stored at addr %u\n",*&x,&x);
    printf("%d is stored at addr %u\n",*ptr,ptr);
    printf("%d is stored at addr %u\n",ptr,&ptr);
    printf("%d is stored at addr %u\n",y,&y);

    *ptr=25;
    printf("\n Now x=%d\n",x);
}

void chain_of_pointers(){
    int x = 10;
    int *p = &x;
    int **q = &p;

    printf("Value of x: %d\n", x);
    printf("Value of x using *p: %d\n", *p); 
    printf("Value of x using **q: %d\n", **q); 

    printf("Address of x: %p\n", &x);
    printf("Address of x using p: %p\n", p);
    printf("Address of x using *q: %p\n", *q);

    printf("Address of p: %p\n", &p);
    printf("Address of p using q: %p\n", q);
}
void Three_Level_Pointer(){
        int x = 10;
        int *p = &x;
        int **q = &p;
        int ***r = &q;
    
        printf("Value of x: %d\n", ***r); // 10
}

#include <stdio.h>


static int iterateCalls = 0;



int iterate(int a){
    /*this function is for proof of concept,
     * it does dramatically reduce performance*/
    iterateCalls++;
    return a+1;
}
int add(int a, int b){
    for(int i=0;i<b;i++)
    {
        a++;
        iterateCalls++;
    }
    return a;
}
int multiply(int a, int b){
    int c=a;
    for(int i=1;i<b;i++){
        a = add(a, c);
    }
    return a;
}
int exponent(int a, int b){
    int c=a;
    for(int i=1;i<b;i++){
        a = multiply(a, c);
    }
    return a;
}
int tetrate(int a, long b){
//    needs to be right-associative
    b = exponent(a, b);
//    calculate the total base exponent
    a = exponent(a,b);
//    calculate the total base value
    return a;
}
int main(){
    int d = 2;
    int e = 4;
    int g = e;
    int h;
    int f = add(d,e);
    printf("Hello, %d plus %d is %d\n",d,e,f);
    printf("Iterate calls is at: %d\n", iterateCalls);
    iterateCalls=0;
    f = multiply(d,e);
    printf("Hello again, %d multiplied by %d is %d\n",d,e,f);
    printf("Iterate calls is at: %d\n", iterateCalls);
    iterateCalls=0;
    f = exponent(d,e);
    printf("Hello again, %d to the power of %d is %d\n",d,e,f );
    printf("Iterate calls is at %d\n", iterateCalls);
    iterateCalls=0;

//    this is the fun part



    h = tetrate(d,g);
    printf("Hello again, %d tetrated to %d is %d\n",d,g,h);
    printf("Iterate calls is at %d\n", iterateCalls);

    return 1;
}
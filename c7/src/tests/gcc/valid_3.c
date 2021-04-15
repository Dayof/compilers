#include <stdio.h>

float a;

int f(float a){
    float d = 3.0;
    return a;
}

int main(){
   int b;
   float c;
   c = 2.0;
   b = f(c);
   printf("%d\n", b);
}
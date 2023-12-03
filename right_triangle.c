#include <stdio.h>

int main(int argc, char *argv[])
{
int a = 0; //the first integer
int b = 0; //the second integer
int c = 0; //the third integer
int d = 0; //the largest number
int e = 0; //integer smaller than d
int f = 0; //integer smaller the d
int area = 0;
        scanf("%d %d %d", &a, &b, &c);
if  (a > b) {
        d = a;
        e = b;
} //end if
else {
        d = b;
        e = a;
} //end else
if (c > d) {
        d = c;
        e = a;
        f = b;
} //end if
else {
        f = c;
} //end else
if (d * d == e * e + f * f) {
        area = (e * f) / 2;
} //end if
else {
        area=0;
} //end else
        printf("%d\n", area);
}//end main


#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{
  int a=0;
  int b=0;
  int pw=0;
     printf ("Enter two integers: ");
     scanf ("%d" "%d", &a, &b);
        while(pow(a, pw) <  b){
                pw++;
        }//end while
        if (pow(a, pw)  > b) {
                pw--;
        } // end if
        printf ("%d\n", (int) pow(a, pw));
}



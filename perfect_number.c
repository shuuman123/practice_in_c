#include <stdio.h>
int isPerfect(int n)
{
int sum = 0;
        for (int i = 1; i < n; i++){

        if (n % i == 0){

                sum += i;

                }//end if
        }//end for
        if (sum == n) {

                return 1;

        } else {

                return 0;
        } //end else
}// end isPerfect
int main(int argc, char * argv[])
{
        int a, b, count=0;

                        while(1) {

                        if (scanf("%d %d", &a, &b) == EOF ) {

                                break;
                        }//end if

                        count = 0;

                        for (int i = a; i <= b; i++){

                                if (isPerfect(i)){ //checks whether the number is perfect or not
                                        count++;
                                }//end if
                        }//end while
                        printf("%d\n", count);
                }//end while
}

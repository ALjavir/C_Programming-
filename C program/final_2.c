/////////////////////LEC-------15///////////////////////
// #include<stdio.h>
// void main(){
//     int n;
//     printf("Enter the length of arry: ");
//     scanf("%d", &n);
//     int x[n];
//     for(int i = 0; i<n; i++){
//         scanf("%d", &x[i]);
//     }
//     for(int i = 0; i<n; i++){
//         printf("this is %d and %d\n", i, x[i]);
//     }
    
// }

// #include<stdio.h>
// #include<math.h>
// int main(){
// printf("\n ceil: %f",ceil(3.5));
// printf("\n floor: %f",floor(3.5));
// printf("\n sqrt: %f",sqrt(14));
// printf("\n pow: %f",pow(2,2));
// printf("\n abs: %d",abs(-24));
// return 0;
// }

#include <stdio.h>
#include <math.h>
long int power(int x, int n);
void main()
{
    long int x, n, xpown;
    printf("Enter the values of X and N \n");
    scanf("This %ld %ld", &x, &n);
    xpown = power(x, n);
    printf("X to the power N = %ld\n", xpown);
}
long int power(int x, int n)
{
    if (n == 1)
        return(x);
    else if (n % 2 == 0)
        /*  if n is even */
        return (pow(power(x, n/2), 2));
    else
        /*  if n is odd */
        return (x * power(x, n - 1));
}

// #include<stdio.h>
// #include<math.h>
// void main(){
// //printf("Enter the X and the power\n");
// int x, n;
// scanf("This is x: %d\n", &x);
// scanf("This is n: %d\n", &n);
// }
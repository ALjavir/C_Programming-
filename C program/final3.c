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

// #include <stdio.h>
// #include <math.h>
// long int power(int x, int n);
// void main()
// {
//     long int x, n, xpown;
//     printf("Enter the values of X and N \n");
//     scanf("%ld %ld", &x, &n);
//     xpown = power(x, n);
//     printf("X to the power N = %ld\n", xpown);
// }
// long int power(int x, int n)
// {
//     if (n == 1)
//         return(x);
//     else if (n % 2 == 0)
//         /*  if n is even */
//         return (pow(power(x, n/2), 2));
//     else
//         /*  if n is odd */
//         return (x * power(x, n - 1));
// }

// #include<stdio.h>
// #include<math.h>
// void main(){
// printf("Enter the X and the power\n");
// int x, n;
// scanf("%d\n", &x);
// scanf("%d\n", &n);
// int a = pow(x,n);
// printf("A is: %d", a);
// }

// #include <stdio.h>
// #include <math.h>
// int main() {
//     float x1, y1, x2, y2, dx, dy, distance;
//     printf("Enter the value of x1 and y1 : ");
//     scanf("%f%f", &x1, &y1);
//     printf("Enter the value of x2 and y2: ");
//     scanf("%f%f", &x2, &y2);
//     dx = fabs(x2 - x1);
//     dy = fabs(y2 - y1);
//     distance = sqrt(dx * dx + dy * dy);
//     printf("Distance between two points: %f\n", distance);
//     return 0;
// }

// #include<stdio.h>
// #include<math.h>
// void main(){
// float S2E, Radius, S2CE;
// int D;
// printf("Enter distance of Satellite from earth surface: \n");
// scanf("%f",&S2E);
// printf("Enter the radius of Earth: \n");
// scanf("%f",&Radius);
// S2CE = S2E+Radius;
// D = ceil(S2CE/Radius);
// printf("%d\n",D);

// }

//////////a////////////
// #include <stdio.h>
// int main() {
//     float initial_velocity = 0; // Initial velocity in m/s
//     float acceleration = 4; // Acceleration in m/s^2
//     float time = 3; // Time in seconds
//     float final_velocity = initial_velocity + acceleration * time;
//     float distance_traveled = 0.5 * acceleration * time * time;
//     printf("For the horse:\n");
//     printf("Final velocity: %.2f m/s\n", final_velocity);
//     printf("Distance traveled: %.2f meters\n", distance_traveled);
//     return 0;
// }
/////////b/////////////
// #include <stdio.h>
// #include <math.h>
// int main() {
//     float initial_velocity = 30; // Initial velocity in m/s
//     float acceleration = 5; // Acceleration in m/s^2
//     float distance = 70; // Distance in meters
//     float final_velocity = sqrt(initial_velocity * initial_velocity + 2 * acceleration * distance);
//     printf("For the car:\n");
//     printf("Final velocity: %.2f m/s\n", final_velocity);
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// int main() {
//    int num;
//    FILE *fptr;
//    fptr  = fopen("E:\\class pdf\\C program\\test.txt", "w");
//    if(fptr == NULL) {
//       printf("Error!");   
//       exit(1);             
//    }
//    printf("Enter num: ");
//    scanf("%d", &num);
//    fprintf(fptr, "%d", num);
//    fclose(fptr);
//    return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     char a[100];
//     FILE *fx;
//     fx = fopen("E:\\class pdf\\C program\\test.txt","r");
//     if (fx == NULL){
//     printf("Error");
//     exit(1);
//     }
//     ////////w////////////
//     // printf("Enter the name: ");
//     // scanf("%d", a);
//     // fprintf(fx, "name is: %s", a);
//     // fclose(fx);
//     ////////////R////////
//     // fscanf(fx, "%s", &a);
//     // printf("name is: %s", a);
//     // fclose(fx);
//     return 0;
// }


// #include <stdio.h>
// int max(int a, int b) {
//     if (a > b) {
//         return a;
//     } else {
//         return b;
//     }
// }
// int main() {
//     int num1, num2;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &num1, &num2);
    
//     int maximum = max(num1, num2);
//     printf("The maximum number is: %d\n", maximum);
    
//     return 0;
// }

#include<stdio.h>

int prime(int a){
    char a[] = "Prime"
    char b[] = "not prime" 
    if ((6*a) + 1 == a){
        return a;
    } else {
        return b;
    }
}

void main(){ 
    int a;
    printf("Enter the numbers: ");
    scanf("%d", &a); // Use '&' to get the addresses of n1 and n2

    int m = prime(a);
    printf("number is: %s", m);
    //return 0; // Ensure the main function returns an integer
}
  


 

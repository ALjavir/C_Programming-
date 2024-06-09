//////////////////////////////////////////LEC-----13////////////////////////////////
//Without input
// #include<stdio.h>
// #include<string.h>
// struct p{
//     char n[10];
//     int age;
//     char h[10];
// }p1, p2;
// void main(){
//     strcpy(p1.n, "Tonmoy");
//     p1.age = 20;
//     p1.h, "LA";
//     strcpy(p2.n, "crhisty");
//     p2.age = 30;
//     p2.h, "NY";
//     printf("Name: %s\n", p1.n);
//     printf("Age: %d\n", p1.age);
//     printf("City: %s\n", p1.h);
//     printf("Name: %s\n", p2.n);
//     printf("Age: %d\n", p2.age);
//     printf("City: %s\n", p2.h);
// }    

//Wtih input
// #include<stdio.h>
// #include<string.h>
// struct x{
//     char n[10];
//     int a;
//     char c[10];
// } p1, p2;
// void main(){
//     printf("Enter your name: ");
//     scanf("%s", &p1.n);
//     printf("Enter your age: ");
//     scanf("%d", &p1.a);
//     printf("Enter your city: ");
//     scanf("%s", &p1.c);
//     printf("Name: %s\n",p1.n);
//     printf("Age: %d\n",p1.a);
//     printf("City: %s\n",p1.c);
// }

//using pointer
// #include<stdio.h>
// struct p{
//     int age;
//     float w;
// }p1;
// void main(){
//     struct p *ptr, p1; 
//     ptr = &p1;
//     printf("Enter age: ");
//     scanf("%d", &ptr->age);
//     printf("age is: %d\n", ptr->age);
//     printf("Enter wgith: ");
//     scanf("%f", &ptr->w);
//     printf("W is: %f", ptr->w);
// }

//nested bullshit
// #include<stdio.h>
// struct p1{
//     char y0[10];
//     int n1;
//     struct p2{
//         char y[10];
//         int n2;
//     };
// }x1, x2;
// void main(){
//     printf("For x1.y: ");
//     scanf("%s", &x1.y);
//     printf("For x2.y: ");
//     scanf("%s", &x2.y);
//     printf("This is x1.y: %s\n", x1.y);
//     printf("This is x2.y: %s\n", x2.y);
//     x2.n2 = 818;
//     x1.n1 = 3.33;
//     printf("%d\n", x2.n2);
//     printf("%d\n", x1.n1);
// }









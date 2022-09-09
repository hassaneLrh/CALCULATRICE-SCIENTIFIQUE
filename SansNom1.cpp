#include <stdio.h>
#include <math.h>

// Global variables to hold Results
double k = 0;

// Menu function (to be called in switch)
int menu()
{
    int ch;
printf("---------welcome to our scientific calculator--------- \n");
printf("             1) Simple Calculator\n");
printf("             2) Scientific Calculator\n");
printf("             0) To exit \n");
printf("------------------------------------------------------ \n");!
printf("please choose the number of operation you want \n");
    scanf("%d", &ch);
    return ch;
}

// simple calculator function (to be called in switch)
void SimpleCalculator()
{
    system("cls");
     float x, y, z;
    int operatorNumber;

    printf("----------------welcome to the simple calculator---------------- \n");
    printf("             1) addition           2) Subtraction \n             3) Multiplication     4) Division \n");
    printf("please choose the number of operation you want :) \n");
    scanf("%d", &operatorNumber);
    if ( operatorNumber <1 || operatorNumber >4)
    {
        printf("invalid input please choose between 1 and 4 ");
    }
    else {
        printf("put your X value  \n");
        scanf("%f", &x);
        printf("put your Y value  \n");
        scanf("%f", &y);

        if (operatorNumber == 1){
            z = x + y ;
            printf("%f + %f = %f", x, y, z);
        }
        if (operatorNumber == 2){
            z = x - y ;
            printf("%f - %f = %f", x, y, z);
        }
        if (operatorNumber == 3){
            z = x * y ;
            printf("%f * %f = %f", x, y, z);
        }
        if (operatorNumber == 4){
            z = x / y ;
            printf("%f / %f = %f", x, y, z);
        }
        }


    return 0;
}

// scientific function (to be called in switch)
void ScientificCalculator()
{
int l = 0;
    int numberOfOperation;
    int x, y, z;
    int quotient,Remainder; // for reminder operati
    int fact=1,n;//for Factorial
    double resault;
    double sinX; // for sin
    double cosX; // for cosine
    double tangX;// for tangent
    double logX;// for log
    double e; // for e^x

while(1)
    {
printf("----------------welcome to our scientific calculator---------------- \n");
printf("             1) Remainder           2) Factorial \n             3) Sine                4) Cosine \n");
printf("             5) Tangent             6) log(base e)\n             7) log(base 10)        8) e^x \n");
printf("                        0) Back to main menu \n");
printf("-------------------------------------------------------------------- \n");!
printf("please choose the number of operation you want \n");
scanf("%d", &numberOfOperation);



switch(numberOfOperation) {

case 0:
    system("cls");
    main();
break;

// calculate remainder

case 1:
    printf("put your X value  \n");
        scanf("%d", &x);
    printf("put your Y value  \n");
        scanf("%d", &y);

    quotient = x / y;

    Remainder = (int)x % (int)y;

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d \n", Remainder);
break;

// calculate Factorial

case 2:


    printf("Enter a number to find factorial: ");

    scanf("%d",&n);

    for(x=1;x<=n;x++){

        fact=fact*x;
    }
    printf("Factorial of %d is: %d",n,fact);

break;

//calculate Sin(X)

case 3:

    printf("put your X value  \n");
    scanf("%lf",&sinX);
    resault = sin(sinX);
    printf("sin(%.2lf) = %.2lf\n", sinX, resault);

break;

//calculate Cosine

case 4:

    printf("put your X value  \n");
    scanf("%lf",&cosX);
    resault = cos(cosX);
    printf("cosin(%.2lf) = %.2lf\n", cosX, resault);
break;

//calculate tangent

case 5:
    printf("Enter angle in radians: ");
    scanf("%lf", &tangX);
    resault = tan(tangX);
    printf("\nResult = %lf \n", resault);
break;

//calculate log (base e)

case 6:

    printf("Enter a number: ");
    scanf("%lf", &logX);
    if(logX<=0.0)
    {
    printf("Math Error\n");
    }
    else
    {
    resault = log(logX);
    printf("\nResult = %lf \n", resault);
    }
break;

//calculate log (base 10)

case 7:
    printf("Enter a number: ");
    scanf("%lf", &logX);
    if(logX<=0.0)
    {
    printf("Math Error\n");
    }
    else
    {
    resault = log10(logX);
    printf("\nResult = %lf \n", resault);
    }
break;

//calculate e^x

case 8:
    printf("Enter a number: ");
    scanf("%lf", &e);
    resault = exp(e);
    printf("\nResult = %lf \n", resault);
break;


default:
printf("please choose a valid number");
break;
}

        // Waiting for a button to be pressed
        printf("\nPress any button to choose the operation you want......");
        getch();

        // Clear screen command to clear screen after each menu iteration
        system("cls");

        // To break out of this menu loop
        if(l == 1)
            break;

    }
}



// MAIN
void main()
{

    int l = 0;

    // Main execution loop
    while(1)
    {

        // Switch Menu
        switch(menu())
        {
            case 0:
                printf("-----------------thanks for using our software---------------- \n");
                exit(0);
                break;
            case 1:
                system("cls");
                SimpleCalculator();
                    k = 1;

                    break;

            case 2:
                system("cls");
                ScientificCalculator();
                k = 1;
                break;



            default:
                    printf("\nInvalid Choice !");
        }
        // Waiting for a button to be pressed
        printf("\nPress any button to restart......");
        getch();

        // Clear screen command to clear screen after each menu iteration
        system("cls");

        // To break out of this menu loop
        if(l == 1)
            break;
    }
}


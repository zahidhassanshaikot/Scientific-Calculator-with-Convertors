#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

int a[20][20],m;
int determinant(int f[20][20],int a);

void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void power();
void factorial();
void calculator_operations();
void persentans();
void log_calculation();
void sin_cal();
void cos_cal();
void tan_cal();
void cosec_cal();
void sec_cal();
void cot_cal();
void addition_m();
void multiplication_m();
void determinant_m();
void matrix();
void normal_mode();
void scinetific_mode();
void binary_number();
void decimal_number() ;
void Tax_calculation();
void male_tax();
void female_tax();
int mainmain();


int main()
{
        system("color 2");
        printf("\t\t||\t-- Welcome to our calculator --\t      ||\n");

        printf("\t\t================================================ \n\n\n\n");
        char usearname[80],pass[16];
        int i;

        printf("\n\n\n\n\t\t\t     Enter your User Name:");
        gets(usearname);

        printf("\n\t\t\t     Enter Your password:");
        gets(pass);

    if((strcmp(usearname,"abc")==0)&&(strcmp(pass,"1234")==0)){
        system("cls");
        mainmain();

    }
    else
        printf("\n\t\t\t     Your Username or Password is Wrong....");
        printf("\n\t\t\t     Please Try again....\n");
        printf("\t\t\t     ");
        system("pause");
        system("cls");
        return main();

    return 0;

}


int mainmain()
{
    system("color F9");
    char Calc_oprn;

    printf("\t\t||\t-- Welcome to our calculator --\t      ||\n");

    printf("\t\t================================================ \n\n\n\n");


    printf("\t\t    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n"
           "\t\t    @\t\t\t                  @\n"

           "\t\t    @     * A/a for about                 @\n"
           "\t\t    @     * L/l to Log out                @\n"
           "\t\t    @     * Q/q to quit the program       @\n"
           "\t\t    @\t\t\t                  @\n"
           "\t\t    @     1 Normal mode                   @\n"
           "\t\t    @     2 Scientific mode               @\n"
           "\t\t    @     3 converter                     @\n"
           "\t\t    @\t\t\t                  @\n"
           "\t\t    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");

    while(1)
    {

        printf("\n\n\n\n\n\n\nEnter the calculator Operation you want to do:");

        Calc_oprn=getche();

        switch(Calc_oprn)
        {
            case '1':normal_mode();break;

            case '2':scinetific_mode();break;
            case '3':converter();break;


            case 'L':
            case 'l':system("cls"); main();break;

            case 'a':
            case 'A':system("cls"); printf("\n\n\t\t\tScientific Calculator with Convertors v1.0\n\t\t\tZahid Hassan Shaikot\n\t\t\temail:Zahidhassanshaikot@gmail.com\n\t\t\tphone:01985986986\n\n\t\t\tAbu Hasnat Tareq\n\t\t\temail:tareq677@diu.edu.bd\n\t\t\tphone:01934234577\n\n");

            system("pause");
            system("cls");
            return mainmain();break;


            case 'Q':
            case 'q': exit(0);break;

            default :system("cls");
                      mainmain();
        }
    }
}

void scinetific_mode()
{
    system("cls");
    int X=1;
    char Calc_oprn;

    printf("\t\t ||\t  -- Scientific calculator --         ||\n");

    printf("\t\t =============================================== \n\n");


    printf("\t\t    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n"
           "\t\t    @\t\t\t                  @\n"
           "\t\t    @     * R/r to Return main menu       @\n"
           "\t\t    @     * A/a for about                 @\n"
           "\t\t    @     * L/l to Log out                @\n"
           "\t\t    @     * Q/q to quit the program       @\n"
           "\t\t    @\t\t\t                  @\n"
           "\t\t    @     ^. Power                        @\n"
           "\t\t    @     ?. Modulus                      @\n"
           "\t\t    @     !. Factorial                    @\n"
           "\t\t    @     1. sin(x)                       @\n"
           "\t\t    @     2. cos(x)                       @\n"
           "\t\t    @     3. tan(x)                       @\n"
           "\t\t    @     4. cosec(x)                     @\n"
           "\t\t    @     5. sec(x)                       @\n"
           "\t\t    @     6. cot(x)                       @\n"
           "\t\t    @     7. log(x)                       @\n"
           "\t\t    @     8. Matrix                       @\n"

           "\t\t    @\t\t\t                  @\n"
           "\t\t    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");



    while(X)
    {

        printf("\nEnter the calculator Operation you want to do:");

        Calc_oprn=getche();

        switch(Calc_oprn)
        {

            case '?': modulus();break;

            case '!': factorial();break;

            case '^': power();break;

            case 'r':
            case 'R': system("cls"); mainmain();break;

            case 'L':
            case 'l':system("cls"); main();break;

            case '1': sin_cal();break;
            case '2': cos_cal();break;
            case '3': tan_cal();break;
            case '4': cosec_cal();break;
            case '5': sec_cal();break;
            case '6': cot_cal();break;
            case '7':log_calculation();break;
            case '8':matrix();break;

            case 'a':
            case 'A':system("cls"); printf("\n\n\t\t\tScientific Calculator with Convertors v1.0\n\t\t\tZahid Hassan Shaikot\n\t\t\temail:Zahidhassanshaikot@gmail.com\n\t\t\tphone:01985986986\n\n\t\t\tAbu Hasnat Tareq\n\t\t\temail:tareq677@diu.edu.bd\n\t\t\tphone:01934234577\n\n");

            system("pause");
            system("cls");
            return scinetific_mode();break;


            case 'Q':
            case 'q': exit(0);break;


            default : system("cls");
                      scinetific_mode();
        }
    }
}


void normal_mode()
{
    int X=1;
    system("cls");

    printf("\t\t||\t     -- Normal calculator --\t      ||\n");

    printf("\t\t================================================ \n\n\n");


    printf("\t\t    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n"
           "\t\t    @\t\t\t                  @\n"
           "\t\t    @     * R/r to Return main menu       @\n"
           "\t\t    @     * A/a for about                 @\n"
           "\t\t    @     * L/l to Log out                @\n"
           "\t\t    @     * Q/q to quit the program       @\n"
           "\t\t    @\t\t\t                  @\n"
           "\t\t    @     + Addition                      @\n"
           "\t\t    @     - Subtraction                   @\n"
           "\t\t    @     * Multiplication                @\n"
           "\t\t    @     / Division                      @\n"
           "\t\t    @     %% Percent                       @\n"
           "\t\t    @\t\t\t                  @\n"
           "\t\t    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");


     printf("\t\t \n");
     printf("\t\t \n");
     printf("\t\t \n");
     printf("\t\t \n");
     printf("\t\t\n");

    char Calc_oprn;

    while(X)
    {

        printf("\nEnter the calculator Operation you want to do:");

        Calc_oprn=getche();

        switch(Calc_oprn)
        {
            case '+': addition();break;

            case '-': subtraction();break;

            case '*': multiplication();break;

            case '/': division(); break;


            case '%': persentans();break;

            case 'r':
            case 'R':system("cls"); mainmain();break;


            case 'L':
            case 'l':system("cls"); main();break;

            case 'a':
            case 'A':system("cls"); printf("\n\n\t\t\tScientific Calculator with Convertors v1.0\n\t\t\tZahid Hassan Shaikot\n\t\t\temail:Zahidhassanshaikot@gmail.com\n\t\t\tphone:01985986986\n\n\t\t\tAbu Hasnat Tareq\n\t\t\temail:tareq677@diu.edu.bd\n\t\t\tphone:01934234577\n\n");

            system("pause");
            system("cls");
            return mainmain();break;


            case 'Q':
            case 'q': exit(0);break;

            default : system("cls");
                      return normal_mode();
        }
    }
}

void converter()
{
    system("cls");

    printf("\t\t||\t     -- Converter Mode --\t      ||\n");

    printf("\t\t================================================ \n\n\n");


    printf("\t\t    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n"
           "\t\t    @\t\t\t                  @\n"
           "\t\t    @     * R/r to Return main menu       @\n"
           "\t\t    @     * A/a for about                 @\n"
           "\t\t    @     * L/l to Log out                @\n"
           "\t\t    @     * Q/q to quit the program       @\n"
           "\t\t    @\t\t\t                  @\n"
           "\t\t    @     1. Tax calculation              @\n"
           "\t\t    @     2. Decimal to Binary number     @\n"
           "\t\t    @     3. Binary to Decimal number     @\n"

           "\t\t    @\t\t\t                  @\n"
           "\t\t    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");


     printf("\t\t \n");
     printf("\t\t \n");
     printf("\t\t \n");
     printf("\t\t \n");
     printf("\t\t\n");

    char Calc_oprn;

    while(1)
    {

        printf("\n\n\nEnter the calculator Operation you want to do:");

        Calc_oprn=getche();

        switch(Calc_oprn)
        {
            case '1':Tax_calculation();break;
            case '2':binary_number();break;
            case '3':decimal_number();break;

            case 'r':
            case 'R':system("cls"); mainmain();break;

            case 'a':
            case 'A':system("cls"); printf("\n\n\t\t\tScientific Calculator with Convertors v1.0\n\t\t\tZahid Hassan Shaikot\n\t\t\temail:Zahidhassanshaikot@gmail.com\n\t\t\tphone:01985986986\n\n\t\t\tAbu Hasnat Tareq\n\t\t\temail:tareq677@diu.edu.bd\n\t\t\tphone:01934234577\n\n");

            system("pause");
            system("cls");
            return mainmain();break;


            case 'L':
            case 'l':system("cls"); main();break;


            case 'Q':
            case 'q': exit(0);break;

            default : system("cls");
                      return converter();
        }
    }
}


void addition()
{
    double num1,num2=0,num3,total;
        char ch,x,c;

        printf("\nEnter the 1st num: ");
        scanf("%lf",&num1);

        total=num1+num2;

        do
        {

        printf("\nEnter the other num: ");
        scanf("%lf",&num3);

        total=total+num3;

        printf("\nThe sum is %.2lf\n\n",total);

        printf("Press y for Add with this total \nPress any key for Return Normal mode \n");

        printf ("What do you want to do? (y/any key) : ");

        c=getch();

    }while (c== 'y' || c=='Y');

    system("cls");
    return normal_mode();
}

void subtraction()
{
    char c;
    do
    {
        double a, b;
        printf("\nPlease enter first number  : ");
        scanf("%lf", &a);
        printf("Please enter second number : ");
        scanf("%lf", &b);
        printf("\nThe Subtraction is %.2lf - %.2lf = %.2lf\n", a, b,a-b);

        printf("Press y for try again \nPress any key for Return \n");
        printf ("What do you want to do? (y/any key) : ");
        c=getch();

    }while (c== 'y' || c=='Y');

    system("cls");
    return normal_mode();
}

void multiplication()
{
    char c;
    do
    {
        double n, total=1, k=0, number;

        printf("\nEnter the number of elements you want to multiplication:");
        scanf("%lf",&n);

        printf("\nPlease enter %.0lf numbers one by one: \n",n);
        while(k<n)
        {
            scanf("%lf",&number);
            total=total*number;
            k=k+1;
        }
        printf("multiplication of %.0lf numbers = %.2lf \n",n,total);

        printf("Press y for try again \nPress any key for Return \n");
        printf ("What do you want to do? (y/any key) : ");
        c=getch();

    }while (c== 'y' || c=='Y');

    system("cls");
    return normal_mode();


}

void division()
{
    char c;
    do
    {
        double a, b;
        printf("\nPlease enter first number  : ");
        scanf("%lf", &a);
        printf("Please enter second number : ");
        scanf("%lf", &b);

        printf("\nDivision of entered numbers %.2lf/%.2lf =%.2lf\n",a,b,a/b);

        printf("Press y for try again \nPress any key for Return \n");
        printf ("\nTry again? (y/any key) : ");
        c=getch();

    }while (c== 'y' || c=='Y');

    system("cls");
    return normal_mode();
}

void modulus()
{
    char c;
    do
    {
        int a, b, d=0;
        printf("\nPlease enter first number   : ");
        scanf("%d", &a);
        printf("Please enter second number  : ");
        scanf("%d", &b);
        d=a%b;
        printf("\nModulus of entered numbers = %d\n",d);

        printf("Press y for try again \nPress any key for Return \n");
        printf ("\nTry again? (y/any key) : ");
        c=getch();

    }while (c== 'y' || c=='Y');

    system("cls");
    return scinetific_mode();
}

void power()
{
    char c;
    do
    {
        double a,num, p;

        printf("\nEnter number and power to find the power \nnumber: ");
        scanf("%lf",&a);

        printf("power : ");
        scanf("%lf",&num);

        p=pow(a,num);

        printf("\n%.2lf to the power %.2lf = %.2lf \n",a,num,p);

        printf("Press y for try again \nPress any key for Return \n");
        printf ("\nTry again? (y/any key) : ");
        c=getch();

    }while (c== 'y' || c=='Y');

    system("cls");
    return scinetific_mode();
}

void factorial()
{
    char c;
    do
    {
        int i,fact=1,num;

        printf("\nEnter a number to find factorial : ");
        scanf("%d",&num);

        if (num<0)
        {
            printf("\nPlease enter a positive number to find factorial and try again.\n ");
            printf("\nFactorial can't be found for negative values. It can be only positive or 0  \n");
            return factorial();
        }

        for(i=1;i<=num;i++)
        fact=fact*i;

        printf("\nFactorial of entered number %d is:%d\n",num,fact);

        printf("Press y for try again \nPress any key for Return \n");
        printf ("\nTry again? (y/any key) : ");
        c=getch();

    }while (c== 'y' || c=='Y');

    system("cls");
    return scinetific_mode();
}

void persentans()
{
    char c;
    do
    {
        double x,y,result;
        printf("\n\nEnter the number:: ");
        scanf("%lf", &x);
        printf("\nEnter the persentans: ");
        scanf("%lf", &y);
        result = (x * y) / 100;
        printf("\nResult: %.2lf\n",x-result);

        printf("Press y for try again \nPress any key for Return \n");
        printf ("\nTry again? (y/any key) : ");
        c=getch();

    }while (c== 'y' || c=='Y');

    system("cls");
    return normal_mode();
}

void log_calculation()
{
    char c;
    double a,logaa;
    do
    {
        printf ("\nFind log of:");
        scanf ("%lf",&a);
        logaa= log(a);
        printf ("Log of %.2lf is %.2lf\n",a,logaa);

        printf("Press y for try again \nPress any key for Return \n");
        printf ("\nTry again? (y/any key) : ");
        c=getch();

    }while (c== 'y' || c=='Y');
    system("cls");
    return scinetific_mode();
}

void sin_cal()
{
    char c;
    do
    {
        double x, result ;
        printf("\nEnter angle in degrees: X: ");
        scanf("%lf", &x);
        result = sin(x * 3.14159 / 180);
        printf("\nResult: %.2lf\n", result);

        printf("Press y for try again \nPress any key for Return \n");
        printf ("\nTry again? (y/any key) : ");
        c=getch();

    }while (c== 'y' || c=='Y');

    system("cls");
    return scinetific_mode();
}

void cos_cal()
{
    char c;
    do
    {
        double x,result;
        printf("\nEnter angle in degrees: X: ");
        scanf("%lf", &x);
        result = cos(x * 3.14159 / 180);
        printf("\nResult: %.2lf\n", result);

        printf("Press y for try again \nPress any key for Return \n");
        printf ("\nTry again? (y/any key) : ");
        c=getch();

    }while (c== 'y' || c=='Y');

    system("cls");
    return scinetific_mode();
}

void tan_cal()
{
    char c;
    do
    {
        double x,result;
        printf("\nEnter angle in degrees: X: ");
        scanf("%lf", &x);
        result = tan(x * 3.14159 / 180);
        printf("\nResult: %.2lf\n", result);

        printf("Press y for try again \nPress any key for Return \n");
        printf ("\nTry again? (y/any key) : ");
        c=getch();

    }while (c== 'y' || c=='Y');

    system("cls");
    return scinetific_mode();
}

void cosec_cal()
{
    char c;
    do
    {
        double x,result;
        printf("\nEnter angle in degrees: X: ");
        scanf("%lf", &x);
        result = 1/sin(x * 3.14159 / 180);
        printf("\nResult: %.2lf\n", result);

        printf("Press y for try again \nPress any key for Return \n");
        printf ("\nTry again? (y/any key) : ");
        c=getch();

    }while (c== 'y' || c=='Y');

    system("cls");
    return scinetific_mode();
}

void sec_cal()
{
    char c;
    do
    {
        double x,result;
        printf("\nEnter angle in degrees: X: ");
        scanf("%lf", &x);
        result = 1/cos(x * 3.14159 / 180);
        printf("\nResult: %.2lf\n", result);

        printf("Press y for try again \nPress any key for Return \n");
        printf ("\nTry again? (y/any key) : ");
        c=getch();

    }while (c== 'y' || c=='Y');
    return scinetific_mode();
}

void cot_cal()
{
    char c;
    do
    {
        double x,result;
        printf("\nEnter angle in degrees X: ");
        scanf("%lf", &x);
        result = 1/tan(x * 3.14159 / 180);
        printf("\nResult: %.2lf\n", result);

        printf("Press y for try again \nPress any key for Return \n");
        printf ("\nTry again? (y/any key) : ");
        c=getch();

    }while (c== 'y' || c=='Y');

    //system("pause");
    system("cls");
    return scinetific_mode();
}

void binary_number()
{
    char c;
    do
    {
        long int dN,rem,qu;
        int bN[100],i=1,j;

        printf("\nEnter Any Decimal Number: ");
        scanf("%ld",&dN);

        qu = dN;
        while(qu!=0)
        {
             bN[i++]= qu % 2;
             qu = qu / 2;
        }
        printf("\nEquivalent Binary Number: ",dN);
        for(j = i -1 ;j> 0;j--)
        printf("%d",bN[j]);

        printf("\nPress y for try again \nPress any key for Return \n");
        printf ("\nTry again? (y/any key) : ");
        c=getch();

    }while (c== 'y' || c=='Y');

    system("cls");
    return converter();
 }

 void decimal_number()
 {
    char c;
    do
    {
        long int bN,dN=0,j=1,rem;

        printf("\nEnter Any Binary Number: ");
        scanf("%ld",&bN);

        while(bN!=0){
             rem=bN%10;
            dN=dN+rem*j;
            j=j*2;
            bN=bN/10;
        }

        printf("\nEquivalent Decimal Number: %ld",dN);


        printf("\n\nPress y for try again \nPress any key for Return \n");
        printf ("\nTry again? (y/any key) : ");
        c=getch();

     }while (c== 'y' || c=='Y');

    system("cls");
    return converter();

 }

void Tax_calculation()
 {


 int X=1;
    system("cls");

    printf("\t\t||\t      -- Tax Calculator --            ||\n");

    printf("\t\t================================================ \n\n\n");


    printf("\t\t    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n"
           "\t\t    @\t\t\t                  @\n"
           "\t\t    @     * R/r to Return main menu       @\n"
           "\t\t    @     * A/a for about                 @\n"
           "\t\t    @     * L/l to Log out                @\n"
           "\t\t    @     * Q/q to quit the program       @\n"
           "\t\t    @\t                                  @\n"
           "\t\t    @     1. Male                         @\n"
           "\t\t    @     2. Female                       @\n"

           "\t\t    @\t                                  @\n"
           "\t\t    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");


     printf("\t\t \n");
     printf("\t\t \n");
     printf("\t\t \n");
     printf("\t\t \n");
     printf("\t\t\n");

    char Calc_oprn;

    while(X)
    {

        printf("\n\n\n\nEnter your gender :");

        Calc_oprn=getche();

        switch(Calc_oprn)
        {
            case '1':male_tax();break;
            case '2':female_tax();break;

            case 'r':
            case 'R':system("cls"); mainmain();break;

            case 'a':
            case 'A':system("cls"); printf("\n\n\t\t\tScientific Calculator with Convertors v1.0\n\t\t\tZahid Hassan Shaikot\n\t\t\temail:Zahidhassanshaikot@gmail.com\n\t\t\tphone:01985986986\n\n\t\t\tAbu Hasnat Tareq\n\t\t\temail:tareq677@diu.edu.bd\n\t\t\tphone:01934234577\n\n");

            system("pause");
            system("cls");
            return mainmain();break;


            case 'L':
            case 'l':system("cls"); main();break;


            case 'Q':
            case 'q': exit(0);break;

            default : system("cls");
                      return Tax_calculation();
        }
    }
}

void male_tax()
{

    char c;

    do
    {

            double m,a,b,r,i,j,k,l,n,o,p,entartainmant,medical,house,fund,othars,house_f,medical_f;

            printf ("\nEnter all amount for manthly.if you have no amount give it 0 \nManthly basic sellary: ");
            scanf ("%lf",&m);

            printf("Entertainment: ");
            scanf("%lf",&entartainmant);

            printf("Medical :");
            scanf("%lf",&medical);

            printf("House rant :");
            scanf("%lf",&house);

            printf("Provident fund :");
            scanf("%lf",&fund);

            printf("Other announcement :");
            scanf("%lf",&othars);

            if(house>6000){
                house_f=house-6000;
            }
            else house_f=0;

            if(medical>6000){
                medical_f=medical-6000;
            }
            else medical_f=0;

            a=(m*14)+(entartainmant*12)+(medical_f*12)+(house_f*12)+(othars*12)+(fund*12);

            printf ("\nYour Tex able income :%.2lf\n",a);

            if(a < 220000)
            {
                printf("No Tax");
            }
            else if(a <= 520000)
            {
                r = a - 220000;
                r = r * .10;
                printf("\nYour Tax is: %.2lf", r);

            }
            else if(a <= 920000)
            {
                r = a -220000;
                i = r - 300000;
                i = i * .15;
                j = 300000*.10;

                printf("\nYour Tax is: %.2lf",i+j);

            }
            else if(a <= 1420000)
            {
                r = a -220000;
                i = r - 300000;
                j = i -400000;
                k=300000*.10;
                l=400000*.15;
                j=j * .2;

                printf("\nYour Tax is: %.2lf",k+l+j);

            }
            else if(a <= 4420000)
            {
                r = a -220000;
                i = r - 300000;
                j = i -400000;
                l=j-500000;
                n=300000*.1;
                o=400000*.15;
                p=500000*.20;
                l=l*.25;
                printf("\nYour Tax is: %.2lf",n+o+p+l);
            }

            else if(a > 4420000)
            {
                r = a -220000;
                i = r - 300000;
                j = i -400000;
                l=j-500000;
                b=l-3000000;
                n=300000*.1;
                o=400000*.15;
                p=500000*.20;
                l=3000000*.25;
                b=b*.3;
                printf("\nYour Tax for one year is: %.2lf\n",b+n+o+p+l);
            }
        printf("\nPress y for try again \nPress any key for Return \n");
        printf ("\nTry again? (y/any key) : ");
        c=getch();

    }while (c== 'y' || c=='Y');


    system("cls");
    return converter();


}

void female_tax()
{

    char c;

    do
    {

            double m,a,b,r,i,j,k,l,n,o,p,entartainmant,medical,house,fund,othars,house_f,medical_f;

            printf ("\nEnter all amount for manthly.if you have no amount give it 0 \nManthly basic sellary: ");
            scanf ("%lf",&m);

            printf("Entertainment: ");
            scanf("%lf",&entartainmant);

            printf("Medical :");
            scanf("%lf",&medical);

            printf("House rant :");
            scanf("%lf",&house);

            printf("Provident fund :");
            scanf("%lf",&fund);

            printf("Other announcement :");
            scanf("%lf",&othars);

            if(house>6000){
                house_f=house-6000;
            }
            else house_f=0;

            if(medical>6000){
                medical_f=medical-6000;
            }
            else medical_f=0;

            a=(m*14)+(entartainmant)+(medical_f*12)+(house_f*12)+(othars*12)+(fund*12);

            printf ("\nYour Tex able income :%.2lf\n",a);

            if(a < 275000)
            {
                printf("No Tax");
            }
            else if(a <= 575000)
            {
                r = a - 275000;
                r = r * .10;
                printf("\nYour Tax is: %.2lf", r);

            }
            else if(a <= 975000)
            {
                r = a -275000;
                i = r - 300000;
                i = i * .15;
                j = 300000*.10;

                printf("\nYour Tax is: %.2lf",i+j);

            }
            else if(a <= 1475000)
            {
                r = a -275000;
                i = r - 300000;
                j = i -400000;
                k=300000*.10;
                l=400000*.15;
                j=j * .2;

                printf("\nYour Tax is: %.2lf",k+l+j);

            }
            else if(a <= 4475000)
            {
                r = a -275000;
                i = r - 300000;
                j = i -400000;
                l=j-500000;
                n=300000*.1;
                o=400000*.15;
                p=500000*.20;
                l=l*.25;
                printf("\nYour Tax is: %.2lf",n+o+p+l);
            }

            else if(a > 4475000)
            {
                r = a -275000;
                i = r - 300000;
                j = i -400000;
                l=j-500000;
                b=l-3000000;
                n=300000*.1;
                o=400000*.15;
                p=500000*.20;
                l=3000000*.25;
                b=b*.3;
                printf("\nYour Tax for 1 year is: %.2lf",b+n+o+p+l);
            }
        printf("\nPress y for try again \nPress any key for Return \n");
        printf ("\nTry again? (y/any key) : ");
        c=getch();

    }while (c== 'y' || c=='Y');


    system("cls");
    return converter();

}

void matrix()
{
    system("cls");
    int X=1;
    char Calc_oprn;

    printf("\t\t||\t    -- Matrix calculator --\t      ||\n");

    printf("\t\t================================================ \n\n\n\n");


    printf("\t\t    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n"
           "\t\t    @\t\t\t                  @\n"
           "\t\t    @     * R/r to Return main menu       @\n"
           "\t\t    @     * A/a for about                 @\n"
           "\t\t    @     * L/l to Log out                @\n"
           "\t\t    @     * Q/q to quit the program       @\n"
           "\t\t    @\t\t\t                  @\n"
           "\t\t    @     1 Addition matrix               @\n"
           "\t\t    @     2 Multiplication matrix         @\n"
           "\t\t    @     3 Determinant matrix            @\n"
           "\t\t    @\t\t\t                  @\n"
           "\t\t    @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");

    while(X)
    {

        printf("\n\n\n\n\n\nEnter the calculator Operation you want to do:");

        Calc_oprn=getche();

        switch(Calc_oprn)
        {
            case '1':addition_m();break;

            case '2':multiplication_m();break;
            case '3':determinant_m();break;

            case 'R':
            case 'r':system("cls"); mainmain();break;

            case 'L':
            case 'l':system("cls"); main();break;

            case 'a':
            case 'A':system("cls"); printf("\n\n\t\t\tScientific Calculator with Convertors v1.0\n\t\t\tZahid Hassan Shaikot\n\t\t\temail:Zahidhassanshaikot@gmail.com\n\t\t\tphone:01985986986\n\n\t\t\tAbu Hasnat Tareq\n\t\t\temail:tareq677@diu.edu.bd\n\t\t\tphone:01934234577\n\n");

            system("pause");
            system("cls");
            return matrix();break;


            case 'Q':
            case 'q': exit(0);break;

            default :system("cls");
                      matrix();
        }
    }
}

void addition_m()
{
    char cc;
    do
    {

    int m, n, c, d, first[10][10], second[10][10], sum[10][10];

    printf("\n\nEnter the number of Rows and Columns(1-10) of matrix....\nEnter your Row size :");
    scanf("%d", &m);
    printf("Enter your Column size:");
    scanf("%d", &n);
    printf("\nEnter the elements of first matrix....\n");

    for (c = 0; c < m; c++){
    for (d = 0; d < n; d++){
    printf("A[%d][%d]=",c+1,d+1);
    scanf("%d", &first[c][d]);
      }
      }

    printf("\nEnter the elements of second matrix....\n");

    for ( c = 0 ; c < m ; c++ ){
      for ( d = 0 ; d < n ; d++ ){
            printf("B[%d][%d]=",c+1,d+1);
            scanf("%d", &second[c][d]);
            }
            }

    for ( c = 0 ; c < m ; c++ )
        for ( d = 0 ; d < n ; d++ )
            sum[c][d] = first[c][d] + second[c][d];

    printf("\nSum of entered matrices A+B:-\n\n");

    for ( c = 0 ; c < m ; c++ )
    {
    for ( d = 0 ; d < n ; d++ )
        printf("\t%d", sum[c][d]);

        printf("\n");

    }

        printf("\nPress y for try again \nPress any key for Return \n");
        printf ("\nTry again? (y/any key) : ");
        cc=getch();

    }while (cc== 'y' || cc=='Y');

    system("cls");
    return matrix();
    }

void multiplication_m()
{
    char cc;
    do
    {
    int m, n, p, q, c, d, k, sum = 0;
    int first[10][10], second[10][10], multiply[10][10];

    printf("\n\nEnter the number of rows and columns(1-10) of first matrix....\n");

    printf("Enter your row size:");
    scanf("%d", &m);

    printf("Enter your column size:");
    scanf("%d", &n);

    printf("Enter the elements of first matrix....\n");

    for (c = 0; c < m; c++){
        for (d = 0; d < n; d++){
            printf("A[%d][%d]=",c+1,d+1);
            scanf("%d", &first[c][d]);
      }
      }

    printf("\nEnter the number of rows and columns(1-10) of second matrix....\n");

    printf("Enter your row size:");
    scanf("%d", &p);

    printf("Enter your column size:");
    scanf("%d", &q);

    if (n != p)
    printf("\nMatrices with entered orders can't be multiplied with each other.\n");
    else
    {
    printf("\nEnter the elements of second matrix....\n");

    for (c = 0; c < p; c++){
      for (d = 0; d < q; d++){
        printf("B[%d][%d]=",c+1,d+1);
        scanf("%d", &second[c][d]);
      }
    }

    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++) {
        for (k = 0; k < p; k++) {
          sum = sum + first[c][k]*second[k][d];
        }

        multiply[c][d] = sum;
        sum = 0;
      }
    }

    printf("The Multiplication of entered matrices:-\n\n");

    for (c = 0; c < m; c++) {
      for (d = 0; d < q; d++)
        printf("\t%d\t", multiply[c][d]);

      printf("\n");
    }
    }

        printf("\nPress y for try again \nPress any key for Return \n");
        printf ("\nTry again? (y/any key) : ");
        cc=getch();

    }while (cc== 'y' || cc=='Y');

    system("cls");
    return matrix();
}

void determinant_m()
{
    char c;
    do
    {
    int i,j;
    printf("\nEnter Your matrix size : ");
    scanf("%d",&m);
    printf("\nEnter the elements of matrix\n");
    for(i=1;i<=m;i++)
    {
    for(j=1;j<=m;j++)
    {
    printf("A[%d][%d] = ",i,j);
    scanf("%d",&a[i][j]);
    }
    }
    printf("\n\n---------- Matrix A is --------------\n");
    for(i=1;i<=m;i++)
    {
        printf("\n");
        for(j=1;j<=m;j++)
          {
               printf("\t%d \t",a[i][j]);
          }
     }
    printf("\n \n");
    printf("\nDeterminant of Matrix A is %d \n",determinant(a,m));


    printf("\nPress y for try again \nPress any key for Return \n");
    printf ("\nTry again? (y/any key) : ");
    c=getch();

    }while (c== 'y' || c=='Y');

    system("cls");
    return matrix();

}

int determinant(int f[20][20],int x)
{
    int pr,c[20],d=0,b[20][20],j,p,q,t;
    if(x==2)
    {
    d=0;
    d=(f[1][1]*f[2][2])-(f[1][2]*f[2][1]);
    return(d);
    }
    else
    {
    for(j=1;j<=x;j++)
    {
      int r=1,s=1;
      for(p=1;p<=x;p++)
        {
          for(q=1;q<=x;q++)
            {
              if(p!=1&&q!=j)
              {
                b[r][s]=f[p][q];
                s++;
                if(s>x-1)
                 {
                   r++;
                   s=1;
                  }
               }
             }
         }
     for(t=1,pr=1;t<=(1+j);t++)
     pr=(-1)*pr;
     c[j]=pr*determinant(b,x-1);
     }
     for(j=1,d=0;j<=x;j++)
        {
        d=d+(f[1][j]*c[j]);
        }
    return(d);
   }
}

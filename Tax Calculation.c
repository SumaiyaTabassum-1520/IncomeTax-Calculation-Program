#include<stdio.h>

float maleTaxpayer (float taxableIncome)
{

    float tax;

    if(taxableIncome>300000)
    {
        taxableIncome=(taxableIncome-300000);

        if(taxableIncome<100000)
        {
            tax=(taxableIncome*0.05);
        }
        else
        {
            taxableIncome=(taxableIncome-100000);
            tax=(taxableIncome*0.1)+5000;

            if(taxableIncome<300000)
            {
                tax=(taxableIncome*0.1)+5000;
            }
            else
            {
                taxableIncome=(taxableIncome-300000);
                tax=(taxableIncome*0.15)+(30000+5000);

                if(taxableIncome<400000)
                {
                    tax=(taxableIncome*0.15)+(30000+5000);
                }
                else
                {
                    taxableIncome=(taxableIncome-400000);
                    tax=(taxableIncome*0.2)+(60000+30000+5000);

                    if(taxableIncome<500000)
                    {
                        tax=(taxableIncome*0.2)+(60000+30000+5000);
                    }
                    else
                    {
                        taxableIncome=(taxableIncome-500000);
                        tax=(taxableIncome*0.25)+(100000+60000+30000+5000);
                    }
                }
            }
        }
    }

    else
    {
        tax=0;
    }

    return tax;
}
float femaleTaxpayer (float taxableIncome)
{
    float tax;

    if(taxableIncome>350000)
    {
        taxableIncome=(taxableIncome-350000);

        if(taxableIncome<100000)
        {
            tax=(taxableIncome*0.05);
        }
        else
        {
            taxableIncome=(taxableIncome-100000);
            tax=(taxableIncome*0.1)+5000;

            if(taxableIncome<300000)
            {
                tax=(taxableIncome*0.1)+5000;
            }
            else
            {
                taxableIncome=(taxableIncome-300000);
                tax=(taxableIncome*0.1)+(30000+5000);
            }
        }

    }
    return tax;
}
void taxFunction()
{
    float taxableIncome,tax;
    char ch;
    char name[50];
    printf("\t\t Welcome to income tax calculator.Enter your information\n");
    printf("Enter Name: ");
    scanf("%s",name);
    printf("Enter Gender: ");
    fflush(stdin);
    scanf("%c",&ch);
    printf("Please enter your taxableIncome ");
    scanf("%f",&taxableIncome);
    if(ch=='M' || ch=='m')
    {
        tax=maleTaxpayer(taxableIncome);
        printf("Mr.%s\nyour tax is %0.2f for taxable income of %0.0f\n",name,tax,taxableIncome);
    }
    else if(ch=='F' || ch=='f')
    {
        tax=femaleTaxpayer(taxableIncome);
        printf("Ms.%s\nyour tax is %0.2f for taxable income of %0.0f\n",name,tax,taxableIncome);
    }
    else
    {
        printf("Your input is not correct please try again\n");
    }
    return 0;
}

int main()
{
    taxFunction();
    return 0;
}


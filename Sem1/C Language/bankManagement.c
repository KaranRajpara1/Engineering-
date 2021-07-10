#include<stdio.h>
#include<conio.h>
int TotalAmount=1000,depamount,totaldep=0,withamount,totalwith=0,tranamount,totaltran=0;
int menu()
{
    int x;
    printf("1.Deposite\n2.Withdraw\n3.Transfer money\n4.Check account detail\n5.Exit\n");
    printf("\nEnter choice: ");
    scanf("%d",&x);
    return x;
}
void deposite()
{
    printf("\nEnter amount for deposite: ");
    scanf("%d",&depamount);
    totaldep=totaldep+depamount;
    TotalAmount=TotalAmount+depamount;
}
void withdraw()
{
    printf("\nEnter amount for withdraw: ");
    scanf("%d",&withamount);
    totalwith=totalwith+withamount;
    if(withamount>TotalAmount)
    {
        printf("Your account has less amount than you entered for withdraw\n");
    }
    else
    {
        TotalAmount=TotalAmount-withamount;
    }
}
void transfer()
{
    printf("Enter amount for transfer: ");
    scanf("%d",&tranamount);
    totaltran=totaltran+tranamount;
    if(tranamount>TotalAmount)
    {
        printf("Your account has less amount than you entered for transfer");
    }
    else
    {
       TotalAmount=TotalAmount-tranamount;
    }
}
void detail()
{
    printf("Your account Detail: \n");
    printf("\nTotal amount =  %d",TotalAmount);
    printf("\nTotal Deposited money = %d  ",totaldep);
    printf("\nTotal Withdraw money = %d  ",totalwith);
    printf("\nTotal transfer money = %d  ",totaltran);
}
void main()
{
    int a=menu();

        switch(a)
    {
    case 1:
        deposite();
        break;
   case 2:
        withdraw();
        break;
    case 3:
        transfer();
        break;
    case 4:
        detail();
        break;
    case 5:
        exit(0);
    default:
        printf("\nInvalid choice: ");
        menu();
        break;
    }



}

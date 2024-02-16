#include<stdio.h>
#include<string.h>
int main()
{
long int accnum1,accnum2,phonenum1,phonenum2,accnum3;
int a,pass1,pass2,i,n,b,m,c,amount,pass3,pass4,d,e,o,p,amount2,count=0,count2=0,count3=0,count4=0,j,z,y,x;
char acchname[5][200] = {"VISHAL","RAVI","JITHENDRA","VAMSHI","RANI"};
long int accno[]={22110011064,22110011053,22110011197,22110011863,64136307137};
int password[]={2646,2326,2720,2321,6641};
char gen[8][100]={"Male","Male","Male","Male","Female"};
long int phoneno[]={8522073889,6300685317,9398902820,7569080229,8522073888};
int balance[]={500,700,600,1000,800};
printf("\n                   -----------------------");
printf("\n                         CODE BANK");
printf("\n                   -----------------------");
printf("\n Press\n 1) Balance enquiry\n 2) Money transfer \n ");
scanf("%d",&z);
if(z==1)
{
   printf("Enter account number \n");
   scanf("%ld", &accnum3);
   printf("Enter your password \n");
   scanf("%d",&x);
   int valid = 0;
   for (y=0;y<8;y++){
    if (accno[y]==accnum3 && password[y]==x) {
        printf("Your account balance is %d \n ",balance [y]);
        valid = 1;
        break;
    }
}
if(!valid)
    printf("\n Invalid account number \n");
}
else if(z==2)
{
printf("Press\n 1) Amount transfer through Account number\n 2) Amount transfer using Mobile number \n ");
scanf("%d",&a);
if(a==1)
{
    printf("Enter Account number \n");
    scanf("%ld",&accnum1);
    printf("Enter Password: \n");
    scanf("%d", &pass1);
    for(i=0;i<8;i++)
    {
        if(accno[i]==accnum1 && password[i]==pass1)
        {
            count = 1;
            n=i;
        }
    }
    if(count==1)
    {
            printf("Account number : %ld \n",accnum1);
            printf("Account holder name : %s \n",acchname[n]);
            printf("Gender : %s \n",gen[n]);
            printf("Press\n 1) Account details are correct \n  2) Account details are wrong  \n");
            scanf("%d",&b);
            if(b==1)
                {
                    printf("Enter Account number that you are transferring to \n");
                    scanf("%ld",&accnum2);
                    if(accnum2==accnum1)
                    {
                        printf("Please use different account details to continue \n");
                    }
                    else
                    {
                    for(i=0;i<8;i++) {
                   if(accno[i]==accnum2)
                       {
                           count2 = 1;
                           m=i;
                       }
                    }
                    if(count2==1)
                    {
                           printf("Account number : %ld \n",accnum2);
                           printf("Account holder name : %s \n",acchname[m]);
                           printf("Gender : %s \n",gen[m]);
                           printf("Press\n 1) Account details are correct \n 2)  Account details are wrong \n");
                           scanf("%d",&c);
                           if(c==1)
                           {
                               printf("Enter the amount that is to be transferred \n");
                               scanf("%d",&amount);
                               if(balance[n]>=amount)
                               {
                                   printf("Please hold while the payment is processing…. \n");
                                   printf("Payment of %d rupees is successful \n",amount);
                                   printf("Amount of %d rupees is deducted from your bank account \n The remaining bank balance is %d rupees \n",amount,balance[n]-amount);
                                   printf("Thank you");
                                   }
                                else
                               {
                                   printf("Insufficient balance \n");
                               }
                           }
                            else if(c==2)
                               {
                                   printf("Please retry the payment once again \n");

                               }
                            else
                               {
                                   printf("Enter valid input \n");

                               }

                    }
                    else
                    {
                        printf("Entered details are wrong \n");
                    }
                }
                }
                else if(b==2)
                {
                    printf("Please retry the payment \n");
                }
                else
                {
                    printf("Enter valid input \n");
                }
    }
    else
    {
        printf("Entered details doesnot match \n");
        printf("Please retry the process again");
    }
}


else if(a==2)
{
    printf("Enter Phone number \n");
    scanf("%ld",&phonenum1);
    printf("Enter Password \n");
    scanf("%d",&pass3);
    for(i=0;i<8;i++)
    {
        if(phoneno[i]==phonenum1 && password[i]==pass3)
        {
            count3=1;
            o=i;
        }
    }
    if(count3==1)
    {
            printf("Phone number : %ld \n",phonenum1);
            printf("Account number : %ld \n",accno[o]);
            printf("Account holder name : %s \n",acchname[o]);
            printf("Gender : %s \n",gen[o]);
            printf("Press\n 1) Account details are correct\n 2) if the details are wrong \n");
            scanf("%d",&d);
            if(d==1)
                {
                    printf("Enter Phone number that is linked with bank account that you are transferring to \n");
                    scanf("%ld",&phonenum2);
                    if(phonenum2==phonenum1)
                    {
                        printf("Please use different phone number \n");
                    }
                    else
                    {
                    for(j=0;j<8;j++) {
                        if(phoneno[j]==phonenum2)
                        {
                            count4=1;
                            p=j;
                        }
                    }
                    if(count4==1)
                    {
                            printf("Phone number : %ld \n",phonenum2);
                            printf("Account number : %ld \n",accno[p]);
                            printf("Account holder name : %s \n",acchname[p]);
                            printf("Gender : %s \n",gen[p]);
                            printf("Press\n 1) Account details are correct \n 2) Account details are wrong \n");
                            scanf("%d",&e);
                            if(e==1)
                            {
                                printf("Enter the amount that is to be transferred \n ");
                                scanf("%d",&amount2);
                                if(balance[o]>=amount2)
                                {
                                    printf("Please hold while the payment is processing…. \n");
                                    printf("Payment of %d rupees is successful \n",amount2);
                                    printf("Amount of %d rupees is deducted from your bank account \n  The remaining bank balance is %d rupees \n",amount2,balance[o]-amount2);
                                    printf("Thank you");
                                }
                                else
                                {
                                    printf("Insufficient balance \n");
                                }
                            }
                            else if(e==2)
                              {
                                 printf("Please retry the Payment\n");
                              }
                            else
                              {
                                 printf("Enter valid input\n");
                              }
                    }
                    else
                    {
                       printf("Entered details are wrong\n");
                    }
                }
                }
                else if(d==2)
                {
                    printf("Please retry the payment\n");
                }
                else
                {
                    printf("Enter valid input\n");
                }
    }
    else
    {
        printf("Entered details doesnot match \n");
        printf("Please retry the process again");
    }
}

else
{
    printf("Entered input is invalid\n");
}
}
else
{
   printf("Invalid entry \n Please try again\n");
}
printf("\nThank you for choosing our bank\n");
}

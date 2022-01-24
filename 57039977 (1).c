//code of Total Expenses on codechef
#include<stdio.h>
int main()
{
    int Testcases;//number of testcases
    scanf("%d",&Testcases);
    int quantity,price;//declaration of variables

    while(Testcases--)
    {
        scanf("%d %d",&quantity,&price);
        fflush(stdin);
        
        double Totalexpenses;
        Totalexpenses=quantity*price;
        
        if(quantity>1000)//condition
        {
            Totalexpenses=Totalexpenses-(Totalexpenses*0.1);
        }
        printf("%f\n",Totalexpenses);
    }
    return 0;
}
//Code By Bhumika Nayak
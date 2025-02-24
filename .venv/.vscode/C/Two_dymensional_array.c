#include <stdio.h>
int main(){
    int salesperson,item;
    printf("Enter Number of sales Person: ");
    scanf("%d",&salesperson);

    printf("Number of item: ");
    scanf("%d",&item);
    double saledata[salesperson][item];

    

    for (int i=0;i<salesperson;i++){
        for(int j=0;j<item;j++){
            printf("Sales amount for sales person No. %d  item %d :",i+1,j+1);
            scanf("%lf",& saledata[i][j]);
        }
    }

    //display report
    printf("---------------------\n");
    printf("Sale data:\n");
    printf("----------------------\n");
    double total=0;
    for (int i=0;i<salesperson;i++){
        printf("-----------------\n");
        printf("Sale data for salesperson no %d:\n",i+1);
        printf("----------------------\n");
        total=0.0;

        for(int j=0;j<3;j++){

            printf("\t item %d: $%0.2lf\n",j+1,saledata[i][j]);
            total+=saledata[i][j];
        }
        printf("\t Total :$%.2lf \n\n",total);
        printf("\n\n");
    }
return 0;
     
}
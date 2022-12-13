#include<stdio.h>
#include<process.h>
#include<string.h>
#define TOTAL_ITEM 47
char itemName[TOTAL_ITEM][46]={
	"Maggi",
	"Yippee",
	"Green Lays",
	"Kurkure",
	"Bread",
	"Jam",
    "Cello fiegrip blue",
    "Natraj HB Pencil  ",
    "Water Bottle",
    "Tomato Sauce",
    "Green Chilli Sauce",
    "Schezwaan Sauce",
    "Noodles",
    "Soya Sauce",
    "Venegir",
    "Natraj Sharpner",
    "Classmate Notebook",
    "Bisleri",
    "Maaza",
    "Litchi Juice",
    "Bounce Biscuit",
    "Sanitizer",
    "Doms Dustfree Eraser",
    "Natraj Eraser",
    "Chart Paper",
    "Plastic Scale 6 inch",
    "Plastic Scale 15 inch",
    "Steel Scale 6 inch",
    "Steel Scale 15 inch",
    "Glitter Pen ",
    "Plastic Cover Roll",
    "Text Highlighter",
    "Sprial Copy",
    "Plastic Cover File",
    "Doms Wax Color",
    "Doms Pencil Color",
    "Doms Water Color",
    "Stiker",
    "Ceasor",
    "Curls",
    "Alphelebel Chocolate Box"
    "Feviquick",
    "Natraj Instrument Box",
    "Doms. Instrument Box",
    "Calculator",
    "Fevicol-small",
    "Nail Cutter",    
    
    };
float itemPrice[TOTAL_ITEM]={
	7.0,
	5.0,
	5.0,
	5.0,
	18.0,
	10.0,
    5.0,
    5.0,
    30.0,
    15.0,
    15.0,
    15.0,
    30.0,
    50.0,
    70.0,
    5.0,
    50.0,
    30.0,
    10.0,
    10.0,
    5.0,
    80.0,
    3.0,
    1.0,
    6.0,
    5.0,
    10.0,
    20,
    30,
    10.0,
    25.0,
    20.0,
    80.0,
    20.0,
    15.0,
    25.0,
    35.0,
    5.0,
    45.0,
    5.0,
    70.0,
    5.0,
    85.0,
    95.0,
    250.0,
    10.0,
    35.0,
    };
    int stock[TOTAL_ITEM]=
	{
		10,
		15,
		25,
		30,
		27,
		45,
		46,
		6,
		9,
		6,
		3,
		6,
		7,
		58,
		12,
		31,
		34,
		28,
		6,
		20,
		15,
		36,
		14,
		3,
		6,
		65,
		25,
		96,
		33,
		12,
		34,
		31,
		9,
		4,
		65,
		33,
		15,
		32,
		45,
		63,
		41,
		32,
		0,
		15,
		12,
		63,
	};

int purchasedItems[TOTAL_ITEM][2]={0};
char customerName[25],contactNo[10];
int totalOrderedItems=0;
float total;
void acceptItemFromUser();
void prepareAndPrintBill();
int main()
{
    acceptItemFromUser();
    prepareAndPrintBill();
    printf("\n");
    system("pause");
    return 0;
}

void acceptItemFromUser()
{
    char choice;
    int iid,qty,i;
    float total;
    totalOrderedItems=0;

    system("cls");
    printf("Enter customer name:");
    gets(customerName);
    printf("Enter mobile number:");
    gets(contactNo);
    while(totalOrderedItems<26)
    {
        system("cls");
        //print all ordered items  
        printf("\nOrderd Items:");
        printf("\n");
		for(i=0;i<85;i++)
		printf("%c",205);
        
        printf("\n%5s %10s %25s %14s %5s %7s %10s","Sr. no","Item Id","Item Name","Quantity","Rate","Total","In Sock");
        printf("\n");
		for(i=0;i<85;i++)
		printf("%c",205);
        
        total=0;
        for(i=0;i<totalOrderedItems;i+=1)
        {
                        printf("\n%5d %10d %30s %8d %7.2f %7.2f %10d",i+1,purchasedItems[i][0],itemName[purchasedItems[i][0]],purchasedItems[i][1],itemPrice[purchasedItems[i][0]]
						,itemPrice[purchasedItems[i][0]]*purchasedItems[i][1],stock[purchasedItems[i][0]]);
                        total+=(itemPrice[purchasedItems[i][0]]*purchasedItems[i][1]);
        
        }
        printf("\n");
		for(i=0;i<85;i++)
		printf("%c",205);
        
        printf("\nTotal %9.2f",total);

        printf("\n");

        //accept item id from user
        printf("\nEnter item id to purchase:");
        scanf("%d",&iid);
        //validate id
        if(iid<0||iid>=TOTAL_ITEM)
        {
            printf("Please enter a valid item id");
            continue;
        }
		printf("\n stock=%d\n",stock[iid]);

        //accept quantity of selected item
        printf("Enter the quantity of %s, %.2f/peace:(0 to ignore):",itemName[iid],itemPrice[iid]);
        scanf("%d",&qty);
        /*if(qty<=0)
        {
            printf("\nPlease enter valid quantity");
            continue;
        }*/

        //check the given item is pre ordered if yes the add it to pre orderd item
        //search iid in purchasedItemds
        for(i=0;i<totalOrderedItems;i+=1)
        if(purchasedItems[i][0]==iid)break;

        if(i<totalOrderedItems)
        {
        	if(stock[iid]<qty)
        	{
        		printf("We have only %d Stock",stock[iid]);
        		continue;
			}
			
            purchasedItems[i][1]+=qty;
            stock[iid]-=qty;
            printf("\n-----------\n Item Merged\n------------");
            
			printf("\n stock=%d\n",stock[iid]);
			
        }
        else{
        	if(stock[iid]<qty)
			{
				printf("We Have Only %d Stocks",stock[i]);
				continue;	
			}
        	
                    //accept etntered item
        purchasedItems[totalOrderedItems][0]=iid;
        purchasedItems[totalOrderedItems][1]=qty;
        totalOrderedItems+=1;
        stock[iid]-=qty;
        printf("\n You have so many items in stock =%d\n",stock[iid]);
        printf("\n-----------------\nOne item added successfully to list\n-----------------");
        }
        printf("\n\nWant more items(1-Yes/0-No):");
        fflush(stdin);
        scanf("%d",&choice);
        if(choice!=1)
        break;

    }

}
void prepareAndPrintBill()
{	int i;
	system("cls");
	system("color 1f");
	strupr(customerName);
	printf("\t\t%s",customerName);
	printf("\n");    
    printf("\t\t%s",contactNo);
    printf("\n\nYour Purched Item");
    printf("\n");
	for(i=0;i<65;i++)
	printf("%c",205);
    
    printf("\n%5s %25s %14s %5s %7s","Sr. no","Item Name","Quantity","Rate","Total");
    printf("\n");
	for(i=0;i<65;i++)
	printf("%c",205);
    
    for(i=0;i<totalOrderedItems;i++)
	{
	printf("\n%5d %30s %8d %7.2f %7.2f",i+1,itemName[purchasedItems[i][0]],purchasedItems[i][1],itemPrice[purchasedItems[i][0]],itemPrice[purchasedItems[i][0]]*purchasedItems[i][1]);
	total=total+=(itemPrice[purchasedItems[i][0]]*purchasedItems[i][1]);
	}
	printf("\n");
	for(i=0;i<65;i++)
	printf("%c",205);
    
   	
    printf("\n\t\t\t\t\t\tTotal%9.2f",total);
    printf("\n");
	for(i=0;i<65;i++)
	printf("%c",205);
    
    printf("\n\t\tThank You For visiting My shop\n\n");
    
}
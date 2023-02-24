#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void BookList()
{
    int x;
/*Section title & Title border design */
    printf("\n\t\t\t\t\t\t * * * * * * * * * * * *\n");
    printf("\t\t\t\t\t\t*\tBook List\t*\n");
    printf("\t\t\t\t\t\t * * * * * * * * * * * *\n\n");

    ViweList();
/*Section Details & Option*/
    printf("\n\t1. Order Book(s)\n");
    printf("\t2. Download List\n");
    printf("\t3. Back\n");
    printf("\n\tChose Option ");
    scanf("%d",&x);
    switch (x)
    {
        case 1:
            system("cls");
            OderBook();
            break;
        case 2:
            /*DownloadList();*/
            break;
        case 3:
            system("cls");
            main();
            break;
        default:
            printf("\t\t\t\t\t\tInvalid Option Number\n");
            int i;
            for (i=0;i<200000000;i++)
            {
            }
            system("cls");
            main();
    }
}
void OderBook()
{
    char B_SIBN [20];
    int qty [1];
    int price [1];
    char address [50];
    char mail [30];
    char tp [10];
    int total;

/*Section title & Title border design */
    printf("\n\t\t\t\t\t\t * * * * * * * * * * * *\n");
    printf("\t\t\t\t\t\t*\tOder Book\t*\n");
    printf("\t\t\t\t\t\t * * * * * * * * * * * *\n\n");

    ViweList();
/*Section Details & Option*/
    printf("\tSIBN - ");
    scanf("%s",gets(B_SIBN));
    printf("\tQuantity - ");
    scanf("%d",gets(qty));
    printf("\tOne book price - Rs. ");
    scanf("%d",gets(price));
    printf("\tDelivery Address - ");
    scanf("%s",gets(address));
    printf("\tTelephone number - ");
    scanf("%s",gets(tp));
    printf("\tE-mail address (example@gmail/yahoo.com) - ");
    scanf("%s",gets(mail));
/* Calculate total price of oder */
    total=price[0]*qty[0];

    printf("\n_____________________________________________________________________________________________________________________________________________________________\n");

    printf("\n\tPackage price - Rs. %d.00 X %d\t= Rs. %d.00\n",price[0],qty[0],total);
    printf("\tDelivery fee \t\t\t= Rs. 290.00\n");
    printf("\t\t\t\t\t ----------------\n");
    printf("\tTotal price \t\t\t= Rs. %d.00\n",total+290);

    printf("\n\tPayment method \t  - Cash on delivery");
    printf("\n\tOder code \t  - %s-%s",B_SIBN,tp); /* oder code - SIBN + Telephone number */

    printf("\n_____________________________________________________________________________________________________________________________________________________________\n");

    int x;
    printf("\n\n\t\t1. Confirm\n");
    printf("\t\t2. Cancel\n");
    printf("\t\t3. Back\n");
    printf("\n\tChose option - ");
    scanf("%d",&x);

    switch (x)
    {
        case 1:
            printf("\n\t\tOder is confirm !!!\n");
            printf("\n\t\t1. Order another book\n");
            printf("\t\t2. Finish\n");

            int y;
            printf("\n\tChose option - ");
            scanf("%d",&y);
            switch (y)
            {
                case 1:
                    system ("cls");
                    OderBook();
                    break;
                case 2:
                    system ("cls");
                    main();
                    break;
                default:
                    printf("\t\t\t\t\t\tInvalid Option Number\n");
                    int i;
                    for (i=0;i<200000000;i++)
                    {
                    }
                    system("cls");
                    main();
            }
            break;
        case 2:
            system("cls");
            OderBook();
            break;
        case 3:
            system("cls");
            main();
            break;
        default:
            printf("\t\t\t\t\t\tInvalid Option Number\n");
            int i;
            for (i=0;i<200000000;i++)
            {
            }
            system("cls");
            main();
    }
}
void AddBook() /* Add Book */
{
    char B_SIBN [20];
    char B_Name[30];
    char B_Author [50];
    char B_Price [5];
    char B_Qty[5];
    int x;

/*Section title & Title border design */
    printf("\n\t\t\t\t\t * * * * * * * * * * * *\n");
    printf("\t\t\t\t\t*\tAdd Book(s)\t*\n");
    printf("\t\t\t\t\t * * * * * * * * * * * *\n\n");

    printf("\t\tThe 'Book List' is created by developer and will not appear in the book list you add. \n\tThe reason is that it is not linked database.\n\n");
/*Section Details & Option*/
    printf("\t\tEnter Book SIBN - ");
    scanf("%s",gets(B_SIBN));
    printf("\t\tEnter Book Name - ");
    scanf("%s",gets(B_Name));
    printf("\t\tEnter Book Author - ");
    scanf("%s",gets(B_Author));
    printf("\t\tEnter Book Price - ");
    scanf("%s",gets(B_Price));
    printf("\t\tEnter Book Qty - ");
    scanf("%s",gets(B_Qty));

    printf("\n\t\t\t1. Confirm\n");
    printf("\t\t\t2. Cancel\n");
    printf("\t\t\t3. Back\n");

    printf("\n\t\tChose option - ");
    scanf("%d",&x);

    switch (x)
    {
        case 1:
            printf("\n\tBook added\n");
            int y,v;
            printf("\n\t\t1. Add another book\n");
            printf("\t\t2. Finish\n");
            printf("\tChose option - ");
            scanf("%d",&y);
            switch (y)
            {
                case 1: /* Add another book section */
                    system("cls");
                    AddBook();
                    break;
                case 2: /* confirm section */
                    system("cls");
                    main();
                    break;
                default:
                    printf("\t\t\t\t\t\tInvalid Option Number\n");
                    int i;
                    for (i=0;i<200000000;i++)
                    {
                    }
                    system("cls");
                    main();
            }
            break;
        case 2:
            system("cls");
            AddBook();
            break;
        case 3:
            system ("cls");
            main();
            break;
        default:
            printf("\t\t\t\t\t\tInvalid Option Number\n");
            int i;
            for (i=0;i<200000000;i++)
            {
            }
            system("cls");
            main();
    }
}
void About()
{
    int x;
/*Section title & Title border design */
    printf("\n\t\t\t\t\t\t * * * * * * * * * *\n");
    printf("\t\t\t\t\t\t*\tAbout\t    *\n");
    printf("\t\t\t\t\t\t * * * * * * * * * *\n\n");
/*Section Details & Option */
    printf("\tThis program create by P. G. R. H. C. Bandara undergraduat of Rajara University of Sri Lanka.\n\n");
    printf("\t\tRegistration No : ITT/18/19/013\n");
    printf("\t\tIndex No : 0970\n\n");
    printf("\t\t\t1. Contact Us\n");
    printf("\t\t\t2. Back\n");
    printf("\n\t\tChose option - ");
    scanf("%d",&x);

    switch (x)
    {
        case 1:
            system("cls");
            Contact();
            break;
        case 2:
            system("cls");
            main();
            break;
        default:
            printf("\t\t\t\t\t\tInvalid Option Number\n");
            int i;
            for (i=0;i<200000000;i++)
            {
            }
            system("cls");
            main();
    }
}
void Contact()
{
    int x;
/*Section title & Title border design */
    printf("\n\t\t\t\t\t\t * * * * * * * * * * * *\n");
    printf("\t\t\t\t\t\t*\tContact Us\t*\n");
    printf("\t\t\t\t\t\t * * * * * * * * * * * *\n\n");
/*Section Details & Option */
    printf("\tE-mail : Chintha*****@gmail.com\n");
    printf("\tTP No : +947158XXXXX\n\n");
    printf("\t\t1. Back\n");
    printf("\n\tChose option - ");
    scanf("%d",&x);

    if (x==1)
    {
        system("cls");
        main();
    }
    else
    {
        printf("\t\t\t\t\t\tInvalid Option Number\n");
        int i;
        for (i=0;i<200000000;i++)
        {
        }
        system("cls");
        main();
    }
}
void ViweList()
{
    FILE * file;
    file=fopen("BookList.txt","r");
    char line[500];
    while (!feof(file))
    {
        fgets(line,500,file);
        puts(line);
    }
    fclose(file);
}
void main ()
{
/* Initialize and declare variable */
    int op_no;
/* Annalise Date & time */
    time_t t;
    time(&t);
/* Interface */
    printf("\n");
    printf("\t\t\t\t\t\t\t%s",ctime(&t));
    printf("\t\t\t\t\t  * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
    printf("\t\t\t\t\t * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
    printf("\t\t\t\t\t* *\t\t\t\t\t\t\t* *\n");
    printf("\t\t\t\t\t* *\t\tBookShop Management System\t\t* *\n");
    printf("\t\t\t\t\t* *\t\t\t\t\t\t\t* *\n");
    printf("\t\t\t\t\t * * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
    printf("\t\t\t\t\t  * * * * * * * * * * * * * * * * * * * * * * * * * * * *\n");
/* Option List */
    printf("\n\t\t\t\t\t\t1. Book List\n");
    printf("\t\t\t\t\t\t2. Oder Book(s)\n");
    printf("\t\t\t\t\t\t3. Add Book(s)\n");
    printf("\t\t\t\t\t\t4. About\n");
    printf("\t\t\t\t\t\t5. Contact Us\n");
    printf("\t\t\t\t\t\t6. Exit Us\n\n");

    printf("\t\t\t\t> Use the full window mode for a better experience.\n\n");

    printf("\t\t\t\t\tChose option number - ");
    scanf("%d",&op_no);
    printf("\n\n");

/* Find Option Number */
    switch (op_no)
    {
        case 1:
            system("cls");
            BookList();
            break;
        case 2:
            system("cls");
            OderBook();
            break;
        case 3:
            system("cls");
            AddBook();
            break;
        case 4:
            system ("cls");
            About();
            break;
        case 5:
            system("cls");
            Contact();
            break;
        case 6:
            system("exit");
            break;
        default:
            printf("\t\t\t\t\t\tInvalid Option Number\n");
            int i;
            for (i=0;i<200000000;i++)
            {
            }
            system("cls");
            main();
    }
}

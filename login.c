#include<stdio.h>
#include<string.h>
char login();
char main_menu();
char user_records();
char admin_records();

char login()
{    char userid[20],password[20];
    int x,y;
    printf("                               ______________________________________________________________________________________________\n");
    printf("                              |                                     Ganpat University                                        |\n");
    printf("                              |----------------------------------------------------------------------------------------------|\n");
    printf("                              |                                         PID:781                                              |\n");
    printf("                              | Project Name: access of local hardware through web browser plug and play mode                |\n");
    printf("                              |                                     Subject: ESFP-1                                          |\n");
    printf("                              |                                        Batch: 13                                             |\n");
    printf("                              |                                  Enrollment No.: CS32                                        |\n");
    printf("                              |                                       Designed by                                            |\n");
    printf("                              |                                          Ayush                                               |\n");
    printf("                              |______________________________________________________________________________________________|\n");
	printf("Enter your userid:");
    scanf("%s",userid);
    printf("Enter your password:");
    scanf("%s",password);
    x=strcmp(userid,"admin");
    if(x==0)
    {
        y=strcmp(password,"admin123");
        if(y==0)
        {
            printf("Login Successfull\n");
            main_menu();
        }
        else
        {
            printf("Invalid Password");
        }
    }
    else
    {
        printf("Invalid Username");
    }
}
char main_menu()
{
    int choice;
    printf("MAIN MENU\n");
    printf("Press 1 for User Records\n");
    printf("Press 2 for admin Records\n");
    printf("Press 0 to Exit\n");
    printf("Enter Your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("ayush");
        break;
        case 2:
        printf("ayush");
        break;
        case 0:
        break;
        default:
        printf("Invalid choice");
        break;
    }
}

int main()
{
    login();
}

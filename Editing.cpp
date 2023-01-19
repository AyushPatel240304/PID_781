#include<stdio.h>
#include<string.h>
char login();
char Menu();
char select();
char BUY();
char SELL();
char login()
{
    char userid[20],password[20];
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
    printf("\nEnter your password:");
    scanf("%s",password);
    x=strcmp(userid,"admin");
    if(x==0)
    {
        y=strcmp(password,"admin123");
        if(y==0)
        {
            printf("\nLogin Successfull\n");
            Menu();
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
char Menu()
{
    int choice;
    printf("\n\n\nInfo:\n");
    printf("\nPress 1 To know about project \n");
    printf("\nPress 2 Solutions\n");
    printf("\nPress 0 to Exit\n");
    printf("\nEnter Your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        select();
        break;
        case 2:
        SELL();
        break;
        case 0:
        break;
        default:
        printf("Invalid choice");
        break;
    }
}
char select()
{
	int select;
    printf("\n\n\nProblem ID explaination:-\n");
    printf("Challenge Title: Access of local hardware through web browser plug n play mode\n");
    printf("Challenge      : Presently any web based applications would not be able use local\n");
    printf("Description      hardware (except few like printer or camera) resources. We would like\n");
    printf("\t\t to make it possible to use local scanner through web based application");
    printf("\n");
    printf("\t\t Meaning, if web application has Scan Button, and if user presses Scan\n");
    printf("\t\t Button, application should be able to access scanner connected to\n");
    printf("\t\t computer from where this web application is executed. This utility\n");
    printf("\t\t should be browser agnostic.\n");
    printf("\n");
    printf("\t\t It is not possible to use local hardware like scanner in web application\n");
    printf("\t\t due to which the document need to be scanned first in local machine\n");
    printf("\t\t and then to be uploaded. It should be possible directly through web based application.\n");
   
 
}
char SELL()
{
    int choice2;
	printf("\n\n\nSelect option:-\n");
	printf("\nPress 1 to know the expected outcomes\n");
    printf("Press 2 to know solution from my side\n");
    printf("Press 3 to know about impact\n");
    printf("Press 0 to Exit\n");
    printf("\nEnter Your Choice:");
    scanf("%d",&choice2);
    switch(choice2)
    {
    	case 1:
    	printf("Expected :An independent function or utility, which allows to access local\n");
		printf("Outcomes  resource via hosted / web application. This function or utility should\n");
    	printf("          be browser independent.\n");
    	printf("          Hassle free connectivity to range of hardware in healthcare industry to directly input\n");
		break;
		case 2:
			printf("                Solutions From My side        \n");
			printf(" * We are going to design a web-page that can access local hardware through the cloud \n");
			printf(" * Basically a hosted web-site that can search nearby local hardware and allow them to connect wirelessly \n");
			printf("   through the cloud based application or web-site\n");
			printf(" * For that we have to create a web-page that allows user to log in and after that we will make \n");
			printf("   a home page that shows the list of features that user can use.\n");
			printf(" * After clicking one of the feature other page should be display and that page will give \n");
			printf("   the list of the devices witch are free and ready to use from user side. \n");
		break;
		case 3:
		printf("Impact: Encourage more cloud-based applications and thin clients. The web\n");
        printf("        applications can be equipped with more tools\n");	
        printf("        Less human interaction and hence, the chances of errors will reduce.\n");
		printf("        The medical field can attach all its devices as peripherals with computer\n");
		break;
	}
}
int main()
{
    login();
    return 0;
}

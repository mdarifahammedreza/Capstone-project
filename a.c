#include <stdio.h>

#include <math.h>

#include <string.h>

#include <windows.h>

#include <time.h>

#include <conio.h>

#include <stdlib.h>




void gotoxy ();

void rgister();

void login();

void menu();

void Teacher();

void CGPA_Calculator();

void Mathematical_calculator();

void Class_Routine();

void Personal_Note();

void Change_password();

void Developer();

void password();

void exit();

void SetColor();

void ClearConsoleToColors();

void SetColorAndBackground();

void drawRectangle();

void clearWindow();

void window();

void print_heading();

void add_teacher();

void search_teacher();

void mod_teacher();

void delete_teacher();

void main_window();

void CGPA_Calculator();

void Class_Routine();

void Change_password();

int note();

void addrecord();

void viewrecord();

void editrecord();

void deleterecord();

void Nrectangle();

void print_heading_2();

void cleanskin_2();
void welcome();


struct login
{
    char fname[120];
    char lname[60];
    char username[30];
    char password[20];
};



struct teacher
{
    char initial[5];
    char name[20];
    char mail[20];
    long unsigned int phone_no;
};

struct teacher tch;




COORD coord = {0, 0}; // sets coordinates to 0,0

void gotoxy (int x, int y)
{
    coord.X = x;

    coord.Y = y; // X and Y coordinates

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}


void welcome()
{
for(int i=0;i<3;i++){
    for(int j=0;j<111;j++)
        printf("\xB2");
    printf("\n");
}
gotoxy(0,22);
for(int i=0;i<3;i++){
    for(int j=0;j<111;j++)
        printf("\xB2");
    printf("\n");
}
int ar=300;
for(int i=3;i<22;i++){
         for(int j=0;j<111;j++)
         {
                    if(i==11 && j==48){
                    printf("W");

                    Sleep(ar);
                    continue;
                    }

                    if(i==11 && j==50){
                    printf("E");

                    Sleep(ar);
                    continue;
                    }
                    if(i==11 && j==52){
                    printf("L");

                    Sleep(ar);
                    continue;
                    }
                    if(i==11 && j==54){
                    printf("C");

                    Sleep(ar);
                    continue;
                    }
                    if(i==11 && j==56){
                    printf("O");

                    Sleep(ar);
                    continue;
                    }
                    if(i==11 && j==58){
                    printf("M");

                    Sleep(ar);
                    continue;
                    }
                    if(i==12 && j==43){
                    printf("I");

                    Sleep(ar);
                    continue;
                    }
                    if(i==12 && j==45){
                    printf("n");

                    Sleep(ar);
                    continue;
                    }
                    if(i==12 && j==50){
                    printf("P");

                    Sleep(ar);
                    continue;
                    }
                    if(i==12 && j==52){
                    printf("r");

                    Sleep(ar);
                    continue;
                    }
                    if(i==12 && j==54){
                    printf("o");

                    Sleep(ar);
                    continue;
                    }
                    if(i==12 && j==56){
                    printf("j");

                    Sleep(ar);
                    continue;
                    }
                    if(i==12 && j==58){
                    printf("e");

                    Sleep(ar);
                    continue;
                    }
                    if(i==12 && j==60){
                    printf("c");

                    Sleep(ar);
                    continue;
                    }
                    if(i==12 && j==62){
                    printf("t");

                    Sleep(ar);
                    continue;
                    }
                    if(i==12 && j==64){
                    printf("-");

                    Sleep(ar);
                    continue;
                    }
                    if(i==12 && j==66){
                    printf("1");

                    Sleep(ar);
                    continue;
                    }
                    if(i==11 && j==60){
                    printf("E");

                    Sleep(ar);
                    continue;
                    }
                    gotoxy(j,i);
                    printf("\xB2");
                    Sleep(.1);
                    gotoxy(j,i);
                    printf(" ");

//Bāngshǒu
         }
}

int p;
gotoxy(43,16);
printf("\xB2\xB2\tRegistration [1]");
gotoxy(43,18);
printf("\xB2\xB2\tLOG IN [2]");
gotoxy(43,20);
printf("Input :");
while(1){
scanf("%d",&p);
if(p==1)
    rgister();
else if (p==2)
    login();
else
 printf("Try again\n");
}
}

int main()
{
    system("cls");

    system("COLOR 30");

    welcome();

    return 0;
}







void rgister()
{   system("cls");
    FILE *log;

    log = fopen("password.txt", "ab+");

    struct login one;

    gotoxy(20, 3);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 REGISTER");
    printf(" \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

    gotoxy(20, 6);
    printf("\xDB\xDB\xDB\xDB\xB2 Enter First name: ");
    scanf("%s", &one.fname);



    gotoxy(20, 8);

    printf("\xDB\xDB\xDB\xDB\xB2 Enter Last name: ");

    scanf("%s", &one.lname);



    gotoxy(20, 10);

    printf("\xDB\xDB\xDB\xDB\xB2 Enter User name: ");

    scanf("%s", &one.username);


    int i = 0;

    char VP; // VP every character of variable;

    char pass[20];

    gotoxy(20, 12);

    printf("\xDB\xDB\xDB\xDB\xB2 Enter password :");

    while ((VP =_getch()) != 13)
    {
        pass[i] = VP;

        i++;

        printf("*");
    }
    pass[i] = '\0';

    printf("\npass1 %s",pass);

    for(int i=0; i<strlen(pass); i++)
    {
        pass[i]=pass[i]-0XAED;

    }
    printf("pass1 %s",pass);

    strcpy(one.password, pass);

    printf("pass %s",one.password);

    fwrite(&one,sizeof(one),1,log);

    fclose(log);

    system("cls");

    login();
}
void login()
{   system("cls");
    char username[200],password[20];

    char pass[20];//temporary encrypted password variable

    FILE *log;

    log=fopen("password.txt","r");

    struct login one;
    gotoxy(20, 3);
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 LOG IN");
    printf(" \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");


    gotoxy(20, 6);

    printf("\xDB\xDB\xDB\xDB\xB2 User name:");

    scanf("%s",&username);

    int i = 0;

    char VP; // VP every character of pasword variable;

    gotoxy(20, 8);
    printf("\xDB\xDB\xDB\xDB\xB2 Password :");

    while ((VP = getch()) != 13)
    {
        password[i] = VP;
        i++;
        printf("*");
    }
    password[i] = '\0';

    while(fread(&one,sizeof(one),1,log))

    {
        strcpy(pass,one.password);

    }
    for(int i=0; i<strlen(pass); i++)

    {
        pass[i]=pass[i]+0XAED;

    }
    if(strcmp(pass,password)==0)

    {
        menu();

        return;
    }
    else{
        printf("Invalid password");
    login();}

}
/*void window2(){
    drawRectangle();
    gotoxy(24,1);
    SetColor(30);
    printf("Security Checkup");
    gotoxy(24,2);
    printf("***************************");
    gotoxy(21,3);
    printf("DAFFODIL INTERNATIONAL UNIVERSITY");
    gotoxy(22,4);
    printf("SOFTWARE ENGINEERING DEPARTMENT");
    gotoxy(25,24);
    SetColor(17);*/
void menu()
{

    system("cls");

    system("COLOR F1");

    int i;

    gotoxy(20, 3);

    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 MAIN MENU");

    printf(" \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");

    gotoxy(20, 5);
    printf("\xDB\xDB\xDB\xDB\xB2 1.Teacher Information");


    gotoxy(20, 7);
    printf("\xDB\xDB\xDB\xDB\xB2 2. CGPA Calculator");


    gotoxy(20, 11);
    printf("\xDB\xDB\xDB\xDB\xB2 3. Mathematical calculator");


    gotoxy(20, 13);
    printf("\xDB\xDB\xDB\xDB\xB2 4. Class Routine");


    gotoxy(20, 15);
    printf("\xDB\xDB\xDB\xDB\xB2 5. Personal Note");


    gotoxy(20, 17);
    printf("\xDB\xDB\xDB\xDB\xB2 6.Change password");


    gotoxy(20, 19);
    printf("\xDB\xDB\xDB\xDB\xB2 7.Developer");


    gotoxy(20, 19);
    printf("------------------------------------------");


    gotoxy(20, 21);
    printf("Enter your choice:");




    switch (getch())

    {
    case '1':
        Teacher();
        break;
    case '2':
        CGPA_Calculator();
        break;
    case '3':
        Mathematical_calculator();
        break;
    case '4':
        Class_Routine();
        break;
    case '5':
        note();
        break;
    case '6':
        Change_password();
        break;
    case '7':
        Developer();
        break;

    default:

        printf("Wrong Input,Please try again");
        break;
    }
}




void Teacher()
{
    system("cls");
    ClearConsoleToColors(10,16);

    SetConsoleTitle("CAPSTONE PROJECT");

    window();

    main_window();
    return 0;
}





void SetColor(int ForgC)
{
    WORD wColor;
    ///We will need this handle to get the current background attribute
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    ///We use csbi for the wAttributes word.
    if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {
        ///Mask out all but the background attribute, and add in the forgournd color
        wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
        SetConsoleTextAttribute(hStdOut, wColor);
    }
    return;
}










void ClearConsoleToColors(int ForgC, int BackC)
{
    WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F);
    ///Get the handle to the current output buffer...
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    ///This is used to reset the carat/cursor to the top left.
    COORD coord = {0, 0};
    ///A return value... indicating how many chars were written
    ///   not used but we need to capture this since it will be
    ///   written anyway (passing NULL causes an access violation).
    DWORD count;
    ///This is a structure containing all of the console info
    /// it is used here to find the size of the console.
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    ///Here we will set the current color
    SetConsoleTextAttribute(hStdOut, wColor);
    if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {
        ///This fills the buffer with a given character (in this case 32=space).
        FillConsoleOutputCharacter(hStdOut, (TCHAR) 32, csbi.dwSize.X * csbi.dwSize.Y, coord, &count);
        FillConsoleOutputAttribute(hStdOut, csbi.wAttributes, csbi.dwSize.X * csbi.dwSize.Y, coord, &count );
        ///This will set our cursor position for the next print statement.
        SetConsoleCursorPosition(hStdOut, coord);
    }
    return;
}







void SetColorAndBackground(int ForgC, int BackC)
{
    WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F);;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), wColor);
    return;
}








void drawRectangle()
{
    int i, j;
    gotoxy(0,0);
    printf("\xB2");
    for(i = 1; i < 78; i++)
    {
        gotoxy(i, 0);
        printf("\xB2");
    }
    gotoxy(78,0);
    printf("\xB2");
    for(i = 1; i < 25; i++)
    {
        gotoxy(78, i);
        if(i == 6)
        {
            printf("\xB2");
        }
        else
        {
            printf("\xB2");
        }
    }
    gotoxy(78, 25);
    printf("\xB2");
    for(i = 77; i > 0; i--)
    {
        gotoxy(i,25);
        if(i == 35)
        {
            printf("\xB2");
        }
        else
        {
            printf("\xB2");
        }
    }
    gotoxy(0,25);
    printf("\xB2");
    for(i = 24; i > 0; i--)
    {
        gotoxy(0,i);
        if(i == 6)
        {
            printf("\xB2");
        }
        else
        {
            printf("\xB2");
        }
    }

    for(i = 1; i < 78; i++)
    {
        gotoxy(i,6);
        if(i == 35)
        {
            printf("\xB2");
        }
        else
        {
            printf("\xB2");
        }
    }

    for(i = 7; i < 25; i++)
    {
        gotoxy(35,i);
        printf("\xB2");
    }

}








void clearWindow()
{
    int i,j;
    for(i = 37; i < 78; i++)
    {
        for(j = 7; j < 25; j++)
        {
            gotoxy(i,j);
            printf(" ");
        }
    }
    gotoxy(21,18);
    printf("     ");
    return;
}






void window()
{
    drawRectangle();
    gotoxy(24,1);
    SetColor(35);
    printf("RECORD TEACHER INFORMATION");
    gotoxy(24,2);
    printf("***************************");
    gotoxy(21,3);
    printf("DAFFODIL INTERNATIONAL UNIVERSITY");
    gotoxy(22,4);
    printf("SOFTWARE ENGINEERING DEPARTMENT");
    gotoxy(25,24);
    SetColor(17);

}






void print_heading(const char st[])
{
    SetColorAndBackground(28,16);
    gotoxy(45,8);
    printf("AAR : %s",st);
    SetColorAndBackground(15,16);
}





void add_teacher()
{
    clearWindow();
    print_heading("Add Record");
    int print = 37;
    FILE *fp;
    fp = fopen("record.txt","ab+");
    SetColor(45);
    if(fp == NULL)
    {
        MessageBox(0,"Error in Opening file\nMake sure your file is not write protected","Warning",0);

    }
    else
    {
        fflush(stdin);

        gotoxy(print,10);

        printf("Initial: ");

        gets(tch.initial);

        //here you can confirms the ID
        gotoxy(print,12);

        printf("Name: ");

        gets(tch.name);


        gotoxy(print,14);

        printf("E-mail: ");
        gets(tch.mail);

        gotoxy(print,15);

        printf("Phone Number: ");

        scanf("%ld",&tch.phone_no);

        fwrite(&tch, sizeof(tch), 1, fp);

        gotoxy(40,22);

        printf("The record is sucessfully added");

    }
    SetColor(28);

    fclose(fp);

    return;
}

void search_teacher()

{
    clearWindow();

    print_heading("Search Record");

    SetColor(45);

    char t_in[5];//t_in ==teacher initial

    int isFound = 0;

    gotoxy(37,10);
    printf("Enter Initial to Search: ");

    fflush(stdin);

    gets(t_in);

    FILE *fp;

    fp = fopen("record.txt","rb");

    while(fread(&tch,sizeof(tch),1,fp) == 1)

    {
        if(strcmp(t_in,tch.initial) == 0)

        {
            isFound = 1;
            break;
        }
    }



    if(isFound == 1)
    {
        gotoxy(37,12);
        printf("The record is Found");

        gotoxy(37,14);
        printf("Initial: %s",tch.initial);

        gotoxy(37,15);
        printf("Name: %s",tch.name);

        gotoxy(37,16);
        printf("E-mail: %s",tch.mail);

        gotoxy(37,17);
        printf("Phone No: %ld",tch.phone_no);
    }


    else
    {
        gotoxy(37,12);
        printf("Sory, No record found in the database");
    }
    SetColor(28);
    fclose(fp);
    return;
}





void mod_teacher()
{
    clearWindow();
    print_heading("Modify Record");

    SetColor(45);
    char t_in[5];
    int isFound = 0, print = 37;

    gotoxy(37,10);
    printf("Enter Initial to Modify: ");


    fflush(stdin);

    gets(t_in);
    FILE *fp;
    fp = fopen("record.txt","rb+");
    while(fread(&tch, sizeof(tch),1,fp) == 1)

    {
        if(strcmp(t_in, tch.initial) == 0)
        {
            fflush(stdin);

            gotoxy(print,12);
            printf("Initial: ");

            gets(tch.initial);
            gotoxy(print,13);

            printf("Name: ");
            gets(tch.name);

            gotoxy(print,14);
            printf("E-mail: ");

            gets(tch.mail);
            gotoxy(print,15);

            printf("Phone Number: ");
            scanf("%ld",&tch.phone_no);

            fseek(fp,-sizeof(tch), SEEK_CUR);

            fwrite(&tch,sizeof(tch), 1, fp);

            isFound = 1;
            break;
        }
    }


    if(!isFound)
    {
        gotoxy(print, 12);

        printf("No Record Found");
    }
    fclose(fp);
    SetColor(28);
    return;
}





void delete_teacher()
{
    clearWindow();
    print_heading("Delete Record");

    SetColor(45);

    char t_in[5];

    int isFound = 0, print = 37;
    gotoxy(37,10);

    printf("Enter initial to Modify: ");

    fflush(stdin);

    gets(t_in);
    FILE *fp, *temp;

    fp = fopen("record.txt","rb");

    temp = fopen("temp.txt", "wb");

    while(fread(&tch, sizeof(tch),1,fp) == 1)
    {
        if(strcmp(t_in, tch.initial) == 0)
        {
            fwrite(&tch,sizeof(tch),1,temp);
        }
    }
    fclose(fp);
    fclose(temp);
    remove("record.txt");
    rename("temp.txt","record.txt");
    gotoxy(37,12);
    printf("The record is sucessfully deleted");
    SetColor(28);
    return;
}





void main_window()
{
    int choice;
    SetColor(10);
    int x = 2;
    while(1)
    {
        gotoxy(x,8);
        printf("1. Add Teacher info");
        gotoxy(x,10);
        printf("2. Search Teacher");
        gotoxy(x,12);
        printf("3. Modify teacher Record");
        gotoxy(x,14);
        printf("4. Delete teacher Record");
        gotoxy(x,16);
        printf("5.back");
        gotoxy(x,18);
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            add_teacher();
            break;
        case 2:
            search_teacher();
            break;
        case 3:
            mod_teacher();
            break;
        case 4:
            delete_teacher();
            break;
        case 5:
            menu();
            break;
        default:
        {
            gotoxy(45,8);
            printf("WARNING");
            gotoxy(45,9);
            printf("********");
            gotoxy(44,10);
            printf("wrong input");

            break;
        }
        }

    }

}




void CGPA_Calculator()
{   system("cls");
    print_heading_2("CGPA Calculator");
    Nrectangle();
    int C_N,j=11;
    double C_result[C_N],T_result=0,credits_per_C[C_N],t_Credits=0;
    gotoxy(10,8);
    printf("Input How many course you have in current semester: ");
    scanf("%d",&C_N);
    gotoxy(10,9);
    printf("Enter the course credit Number-");
    for(int i=0; i<C_N; i++)
    {
        gotoxy(10,j);
        printf("course %d credit no:",i+1);
        scanf("%lf",&credits_per_C[i]);
        t_Credits=t_Credits+credits_per_C[i];
        j=j+1;
        gotoxy(10,j);
        printf("Course %d GPA -",i+1);
        scanf("%lf",&C_result[i]);
        T_result=T_result+(C_result[i]*credits_per_C[i]);
        j++;
        if(j>20){
            cleanskin_2();
            j=11;
        }

    }
    gotoxy(10,j);
    printf("Your total credit  is :%.2f ",t_Credits);
    j=j+1;
    gotoxy(10,j);
    printf("Your total result  is :%.2f",T_result);
    j=j+1;
    gotoxy(10,j);
    printf("Your GPA is:%.2f",T_result/t_Credits);


}



void Mathematical_calculator()
{
    printf("MC");
}



void Class_Routine()
{
    printf("Run output positive");
    system("START https://docs.google.com/document/d/e/2PACX-1vS5genrx8eKVQy-5Exm8cV0rU7dO4HHwuCleMpcgZuQcP7azMDPWNarKu99RlygEFQ7RNGVxQlNlBQ-/pub");
}







void Change_password()
{
    printf("CP");
}



void Developer()
{
    printf("EMTY INFORMATION");
}
struct record

{

    char time[6];

    char name[30];

    char place[25];

    char duration[10];

    char note[500];

} ;

int note()

{

    int ch;
    system("cls");
    // fflush(stdin);
    Nrectangle();

   // gotoxy(30,3);

    print_heading_2("->MENU- NOTE<-");
    //printf(" SHORT NOTE\n");


    while(1)

    {
        gotoxy(33,7);

        printf("MAIN MENU:");
        gotoxy(20,10);

        printf("ADD RECORD  \t[1]");
        gotoxy(20,12);

        printf("VIEW RECORD \t[2]");
        gotoxy(20,14);

        printf("EDIT RECORD \t[3]");
        gotoxy(20,16);

        printf("DELETE RECORD\t[4]");
        gotoxy(20,18);

        printf("EXIT\t\t[5]");
        gotoxy(20,20);

        printf("ENTER YOUR CHOICE:");

        scanf("%d",&ch);

        switch(ch)

        {

        case 1:

            addrecord();

            break;

        case 2:

            viewrecord();

            break;

        case 3:

            editrecord();

            break;

        case 4:

            deleterecord();

            break;



        case 5:
            gotoxy(15,22);
            printf("THANK YOU FOR USING THE SOFTWARE ");

            getch();

            menu();

        default:
            gotoxy(15,22);
            printf("YOU ENTERED WRONG CHOICE..");
            gotoxy(15,23);
            printf("PRESS ANY KEY TO TRY AGAIN");

            getch();

            break;

        }

        system("cls");

    }

    return 0;

}
//complete
void addrecord( )

{

    system("cls");
    Nrectangle();
    print_heading_2("ADD RECORD");

    FILE *fp ;

    char another = 'Y',time[10];

    struct record e ;

    char filename[15];

    int choice;
    gotoxy(15,9);
    printf("ENTER DATE OF YOUR RECORD:[yyyy-mm-dd]:");

    fflush(stdin);

    gets(filename);

    fp = fopen (filename, "ab+" ) ;

    if ( fp == NULL )

    {

        fp=fopen(filename,"wb+");

        if(fp==NULL)

        {

            printf("SYSTEM ERROR...");

            printf("PRESS ANY KEY TO EXIT");

            getch();

            return ;

        }

    }

    while ( another == 'Y'|| another=='y' )

    {
        cleanskin_2();

        choice=0;

        fflush(stdin);


        gotoxy(15,10);
        printf ( "ENTER TIME:[hh:mm]:");

        scanf("%s",time);

        rewind(fp);

        while(fread(&e,sizeof(e),1,fp)==1)

        {

            if(strcmp(e.time,time)==0)

            {

                printf("THE RECORD ALREADY EXISTS.\n");

                choice=1;

            }

        }

        if(choice==0)

        {

            strcpy(e.time,time);
            gotoxy(15,11);
            printf("ENTER NAME:");

            fflush(stdin);

            gets(e.name);

            fflush(stdin);
            gotoxy(15,12);

            printf("ENTER PLACE:");

            gets(e.place);

            fflush(stdin);
            gotoxy(15,13);

            printf("ENTER DURATION:");

            gets(e.duration);

            fflush(stdin);
            gotoxy(15,14);

            printf("NOTE:");

            gets(e.note);

            fwrite ( &e, sizeof ( e ), 1, fp ) ;
            gotoxy(15,16);

            printf("YOUR RECORD IS ADDED...\n");

        }
        gotoxy(15,17);
        printf ( "ADD ANOTHER RECORD...(Y/N) " ) ;

        fflush ( stdin ) ;

        another = getchar( ) ;

    }

    fclose ( fp ) ;

    note();

}
//Complete
void viewrecord( )

{

    FILE *fpte ;

    system("cls");
    Nrectangle();
    print_heading_2("VIEWRECORD");

    struct record customer ;

    char time[6],choice,filename[14];

    int ch;
    do

    {
        gotoxy(15,9);
        printf("ENTER THE DATE OF RECORD TO BE VIEWED:[yyyy-mm-dd]:");

        fflush(stdin);

        gets(filename);

        fpte = fopen ( filename, "rb" ) ;

        if ( fpte == NULL )

        {
            gotoxy(15,18);
            puts ( "THE RECORD DOES NOT EXIST...\n" ) ;
            gotoxy(15,19);
            puts("press Y for try again:");
            char op;
            op=getch();
            if(op=='Y'||op=='y')
                viewrecord();

        }

        // else{
        //gotoxy(15,18);
        //  printf("Returning note ""MENU"" menu in 3 sec");
        //   Sleep(3);
        // main();

        //   }

        //system("cls");
        gotoxy(15,11);
        printf("HOW WOULD YOU LIKE TO VIEW:\n");
        gotoxy(18,13);
        printf("\xB2 1.WHOLE RECORD OF THE DAY.");
        gotoxy(18,14);
        printf("\xB2 2.RECORD OF FIX TIME.");
        gotoxy(18,16);
        printf("ENTER YOUR CHOICE:");

        scanf("%d",&ch);
        cleanskin_2();
        switch(ch)

        {

        case 1:
            gotoxy(10,10);
            printf("THE WHOLE RECORD FOR %s IS:",filename);

            while ( fread ( &customer, sizeof ( customer ), 1, fpte ) == 1 )

            {

                gotoxy(15,12);

                printf("TIME: %s",customer.time);
                gotoxy(15,13);

                printf("MEETING WITH: %s",customer.name);
                gotoxy(15,14);

                printf("MEETING AT: %s",customer.place);
                gotoxy(15,15);

                printf("DURATION: %s",customer.duration);
                gotoxy(15,16);

                printf("NOTE: %s",customer.note);


            }

            break;

        case 2:

            fflush(stdin);
            gotoxy(15,10);
            printf("ENTER TIME:[hh:mm]:");

            gets(time);

            while ( fread ( &customer, sizeof ( customer ), 1, fpte ) == 1 )

            {

                if(strcmp(customer.time,time)==0)

                {
                    gotoxy(15,11);
                    printf("YOUR RECORD IS:");

                    gotoxy(15,13);

                    printf("TIME: %s",customer.time);
                    gotoxy(15,14);

                    printf("MEETING WITH: %s",customer.name);
                    gotoxy(15,15);

                    printf("MEETING AT: %s",customer.place);
                    gotoxy(15,16);

                    printf("DURATION: %s",customer.duration);
                    gotoxy(15,17);

                    printf("NOTE: %s",customer.note);

                }
                gotoxy(15,19);
            printf("Not Found!!!!!!!!!!!!!");
            }

            break;

        default:
            gotoxy(15,20);
            printf("\nYOU TYPED SOMETHING ELSE...\n");

            break;

        }
        gotoxy(15,20);
        printf("WOULD YOU LIKE TO CONTINUE VIEWING...(Y/N):");

        fflush(stdin);

        scanf("%c",&choice);

    }
    while(choice=='Y'||choice=='y');

    fclose ( fpte ) ;
    note();


}

void editrecord()

{

    system("cls");

    FILE *fpte ;

    struct record customer ;

    char time[6],choice,filename[14];

    int num,count=0;

    Nrectangle();
    print_heading_2("EDIT RECORD");

    do

    {
        gotoxy(8,8);
        printf("ENTER THE DATE OF RECORD TO BE EDITED:[yyyy-mm-dd]:");

        fflush(stdin);

        gets(filename);
        gotoxy(8,10);
        printf("ENTER TIME:[hh:mm]:");

        gets(time);

        fpte = fopen ( filename, "rb+" ) ;

        if ( fpte == NULL )

        {
            gotoxy(8,20);
            printf( "RECORD DOES NOT EXISTS:" ) ;
            gotoxy(8,21);

            printf("PRESS ANY KEY TO GO BACK");

            getch();

            note();

        }

        while ( fread ( &customer, sizeof ( customer ), 1, fpte ) == 1 )

        {

            if(strcmp(customer.time,time)==0)

            {
                gotoxy(8,11);
                printf("YOUR OLD RECORD WAS AS:");
                gotoxy(8,12);

                printf("TIME: %s",customer.time);
                gotoxy(8,13);

                printf("MEETING WITH: %s",customer.name);
                gotoxy(8,14);

                printf("MEETING AT: %s",customer.place);
                gotoxy(8,15);

                printf("DURATION: %s",customer.duration);
                gotoxy(8,16);

                printf("NOTE: %s",customer.note);
                gotoxy(40,10);
                printf("\xB2");
                gotoxy(40,11);
                printf("\xB2");
                gotoxy(40,12);
                printf("\xB2");
                gotoxy(40,13);
                printf("\xB2");
                gotoxy(40,14);
                printf("\xB2");
                gotoxy(40,15);
                printf("\xB2");
                gotoxy(40,16);
                printf("\xB2");
                gotoxy(40,17);
                printf("\xB2");

                gotoxy(41,10);
                printf(" WHAT WOULD YOU LIKE TO EDIT..");
                gotoxy(41,11);

                printf(" 1.TIME.");
                gotoxy(41,12);

                printf(" 2.MEETING PERSON.");
                gotoxy(41,13);

                printf(" 3.MEETING PLACE.");
                gotoxy(41,14);

                printf(" 4.DURATION.");
                gotoxy(41,15);

                printf(" 5.NOTE.");
                gotoxy(41,16);

                printf(" 6.WHOLE RECORD.");
                gotoxy(41,17);

                printf(" 7.GO BACK TO MAIN MENU.");
                gotoxy(41,18);

                do

                {

                    printf(" ENTER YOUR CHOICE:");

                    fflush(stdin);

                    scanf("%d",&num);


                    cleanskin_2();

                    switch(num)

                    {

                    case 1:
                    gotoxy(10,11);
                        printf("ENTER THE NEW DATA:");
                        gotoxy(10,12);

                        printf("NEW TIME:[hh:mm]:");

                        gets(customer.time);

                        break;

                    case 2:
                        gotoxy(10,11);
                        printf("ENTER THE NEW DATA:");

                        printf("NEW MEETING PERSON:");

                        gets(customer.name);

                        break;

                    case 3:
                        gotoxy(10,11);

                        printf("ENTER THE NEW DATA:");
                        gotoxy(10,12);

                        printf("NEW MEETING PLACE:");

                        gets(customer.place);

                        break;

                    case 4:
                        gotoxy(10,11);
                        printf("ENTER THE NEW DATA:");

                        printf("DURATION:");

                        gets(customer.duration);

                        break;

                    case 5:
                        gotoxy(10,11);
                        printf("ENTER THE NEW DATA:");
                        gotoxy(10,12);

                        printf("NOTE:");

                        gets(customer.note);

                        break;

                    case 6:
                        gotoxy(10,11);
                        printf("ENTER THE NEW DATA:");
                        gotoxy(10,12);

                        printf("NEW TIME:[hh:mm]:");

                        gets(customer.time);
                        gotoxy(10,13);

                        printf("NEW MEETING PERSON:");

                        gets(customer.name);
                        gotoxy(10,14);

                        printf("NEW MEETING PLACE:");

                        gets(customer.place);
                        gotoxy(10,15);

                        printf("DURATION:");

                        gets(customer.duration);
                        gotoxy(10,16);

                        printf("NOTE:");

                        gets(customer.note);

                        break;

                    case 7:
                        gotoxy(10,11);
                        printf("PRESS ANY KEY TO GO BACK...\n");
                        gotoxy(10,12);

                        getch();

                        note();

                        break;

                    default:
                        gotoxy(10,11);
                        printf("YOU TYPED SOMETHING ELSE...TRY AGAIN\n");


                        break;

                    }

                }
                while(num<1||num>8);

                fseek(fpte,-sizeof(customer),SEEK_CUR);

                fwrite(&customer,sizeof(customer),1,fpte);

                fseek(fpte,-sizeof(customer),SEEK_CUR);

                fread(&customer,sizeof(customer),1,fpte);

                choice='Y';

                break;

            }

        }

        if(choice=='Y')

        {

            cleanskin_2();
            gotoxy(2,11);
            printf("EDITING COMPLETED,");

                    gotoxy(19,11);
                    printf("YOUR RECORD IS:");

                    gotoxy(15,13);

                    printf("TIME: %s",customer.time);
                    gotoxy(15,14);

                    printf("MEETING WITH: %s",customer.name);
                    gotoxy(15,15);

                    printf("MEETING AT: %s",customer.place);
                    gotoxy(15,16);

                    printf("DURATION: %s",customer.duration);
                    gotoxy(15,17);

                    printf("NOTE: %s",customer.note);

            fclose(fpte);
            gotoxy(15,18);

            printf("WOULD YOU LIKE TO EDIT ANOTHER RECORD.(Y/N)    ");

            scanf("%c",&choice);

            count++;

        }

        else

        {
            gotoxy(15,19);
            printf("THE RECORD DOES NOT EXIST::\n");
            gotoxy(15,20);

            printf("WOULD YOU LIKE TO TRY AGAIN...(Y/N)    ");

            scanf("%c",&choice);

        }

    }
    while(choice=='Y'||choice=='y');

    fclose ( fpte ) ;
    fflush(stdin);
    if(count==1){
        gotoxy(15,19);

        printf(" %d FILE IS EDITED...",count);}

    else if(count>1){
        gotoxy(15,19);
        printf("%d FILES ARE EDITED..",count);}

    else{
    gotoxy(15,19);
        printf("NO FILES EDITED...");}
gotoxy(15,20);
printf("PRESS ENTER TO EXIT EDITING MENU.");
getch();
fflush(stdin);
    note();
}

void deleterecord( )

{

    system("cls");
    fflush(stdin);
    Nrectangle();
    print_heading_2("DELETE RECORD");
    fflush(stdin);

    FILE *fp,*fptr ;

    struct record file ;

    char filename[15],another = 'Y',time[10];

    int choice,check;
    while ( another == 'Y' )

    {

        gotoxy(15,9);
        printf("HOW WOULD YOU LIKE TO DELETE.");
        gotoxy(15,10);
        printf("DELETE WHOLE RECORD\t\t\t[1]");
        gotoxy(15,11);

        printf("DELETE A PARTICULAR RECORD BY TIME\t[2]");

        do

        {
            gotoxy(15,12);
            printf("ENTER YOU CHOICE:");

            scanf("%d",&choice);
            cleanskin_2();
            switch(choice)

            {

            case 1:
                gotoxy(15,11);
                printf("ENTER THE DATE OF RECORD TO BE DELETED:[yyyy-mm-dd]:");

                fflush(stdin);

                gets(filename);

                fp = fopen (filename, "wb" ) ;

                if ( fp == NULL )

                {

                    printf("THE FILE DOES NOT EXISTS");

                    printf("PRESS ANY KEY TO GO BACK.");

                    getch();

                    note();

                }

                fclose(fp);

                remove(filename);
                gotoxy(15,13);
                printf("DELETED SUCCESFULLY...");

                break;

            case 2:
                gotoxy(15,11);

                printf("ENTER THE DATE OF RECORD:[yyyy-mm-dd]:");

                fflush(stdin);

                gets(filename);

                fp = fopen (filename, "rb" ) ;

                if ( fp == NULL )

                {

                    printf("\nTHE FILE DOES NOT EXISTS");

                    printf("\nPRESS ANY KEY TO GO BACK.");

                    getch();

                    deleterecord();

                }

                fptr=fopen("temp","wb");

                if(fptr==NULL)

                {

                    printf("SYSTEM ERROR");

                    printf(" PRESS ANY KEY TO GO BACK");

                    getch();

                    deleterecord();

                }
                gotoxy(15,12);
                printf("ENTER THE TIME OF RECORD TO BE DELETED:[hh:mm]:");

                fflush(stdin);

                gets(time);

                while(fread(&file,sizeof(file),1,fp)==1)

                {

                    if(strcmp(file.time,time)!=0)

                        fwrite(&file,sizeof(file),1,fptr);

                }

                fclose(fp);

                fclose(fptr);

                remove(filename);

                rename("temp",filename);

                printf("DELETED SUCCESFULLY...");

                break;

            default:
                gotoxy(15,11);

                printf("YOU ENTERED WRONG CHOICE");

                break;

            }

        }
        while(choice<1||choice>2);
        gotoxy(15,18);

        printf("DO YOU LIKE TO DELETE ANOTHER RECORD.(Y/N):");

        fflush(stdin);

        scanf("%c",&another);

    }
    gotoxy(15,20);

    printf("PRESS ANY KEY TO EXIT...");

    getch();
    note();

}

void Nrectangle()
{





    system("color 3F");

    int i, j;
    gotoxy(0,0);
    printf("\xB2");
    for(i = 1; i < 78; i++)
    {
        gotoxy(i, 0);
        printf("\xB2");
    }
    gotoxy(78,0);
    printf("\xB2");
    for(i = 1; i < 25; i++)
    {
        gotoxy(78, i);
        if(i == 6)
        {
            printf("\xB2");
        }
        else
        {
            printf("\xB2");
        }
    }
    gotoxy(78, 25);
    printf("\xB2");
    for(i = 77; i > 0; i--)
    {
        gotoxy(i,25);
        if(i == 35)
        {
            printf("\xB2");
        }
        else
        {
            printf("\xB2");
        }
    }
    gotoxy(0,25);
    printf("\xB2");
    for(i = 24; i > 0; i--)
    {
        gotoxy(0,i);
        if(i == 6)
        {
            printf("\xB2");
        }
        else
        {
            printf("\xB2");
        }
    }

    for(i = 1; i < 78; i++)
    {
        gotoxy(i,6);
        if(i == 35)
        {
            printf("\xB2");
        }
        else
        {
            printf("\xB2");
        }
    }

    /*  for(i = 7; i < 25; i++)
      {
          gotoxy(35,i);
          printf("\xB2");
      }*/



}
void print_heading_2(const char st[])
{

    gotoxy(30,2);
    printf("\xB2- : %s : -\xB2",st);
    gotoxy(20,4);
    printf("\xB2- DAFFODILL INTERNATIONAL UNIVERSITY -\xB2");

}
void cleanskin_2()
{
    int i=2,j=10,z;
    while(j!=25){
        gotoxy(i,j);
        for(z=0;z<=70;z++)
            printf(".");
        printf("\n");
        j++;
    }



   /* gotoxy(2,10);
    printf("                                                                       \n");
    gotoxy(2,11);
    printf("                                                                       \n");
    gotoxy(2,12);
    printf("                                                                       \n");
    gotoxy(2,13);
    printf("                                                                       \n");
    gotoxy(2,14);
    printf("                                                                       \n");
    gotoxy(2,15);
    printf("                                                                       \n");
    gotoxy(2,16);
    printf("                                                                       \n");
    gotoxy(2,17);
    printf("                                                                       \n");
    gotoxy(2,19);
    printf("                                                                       \n");
    gotoxy(2,20);
    printf("                                                                       \n");
    gotoxy(2,21);
    printf("                                                                       \n");
    gotoxy(2,22);
    printf("                                                                       \n");
    gotoxy(2,23);
    printf("                                                                       \n");
    gotoxy(2,24);
    printf("                                                                       \n");

*/

}



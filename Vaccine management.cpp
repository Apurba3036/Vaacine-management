//                        INTERNATIONAL UNIVERSITY OF BUSINESS AGRICULTURE AND TECHNOLOGY
//                               DEPARTMENT  OF CMPUTER SCIENCE AND ENGINEERING
//*******************************************PROJECT NO-2*****************************************************************
//*************************************TOPIC:VACCINE MANAGEMENT SYSTEM*******************************************************
//***************************DEVELOPED BY: NAZMUS SAKIB APURBA AND SHAHIDUL ALAM*************************************************


/*SOURCES:
https://learnprogramo.com/vaccine-management-system-project-in-c-download-with-source-code/ */




#include<iostream>
#include<windows.h> /*windows. h is a Windows-specific header file for the C/C++ programming language
                     which contains declarations for all of the functions in the Windows API*/
#include<process.h>  /*<process.h> includes macros and declarations.It is used to work with func. which
                      includes processes. It includes some useful functions like abort, exit and system etc.*/

using namespace std;
class Vaccine
{
public:
        int age;
        char Cancer;
        int  Diabetes;
        char gender;
        char name[100];
        int  NID;
        char profession[100];
        char address[100];
        char mobileNumber[100];
        char vaccine[100];
        public:
                void setData();
                void addNew();
                void showData();




};

void Vaccine::setData()
{
    cout<<"\n\n\t\t>>>>>>>>>>>>>>>>>>>>>>> VACCINE MANAGEMENT SYSTEM  <<<<<<<<<<<<<<<<<<<<<<<<n\n"<<endl;

    cout<<"\n\t\t\t*****************************************\n";
    cout<<"\t\t\t\t ENTER THE DETAILS ";
    cout<<"\n\t\t\t*****************************************\n\n";

        cout<<"\n\t\t ENTER NAME : ";
        cin>>name;
        cout<<"\n\t\t Enter NID NO:";
        cin>>NID;
        cout<<"\n\t\t Enter GENDER (M|F) : ";
        cin>>gender;
        cout<<"\n\t\t Enter AGE:";
        cin>>age;
        cout<<"\n\t\t ENTER PROFESSION :";
        cin>>profession;
        cout<<"\n\t\t HAVE YOU DIABETES?(YES/NO) ";
        cin>> Diabetes;
        cout<<"\n\t\t Cancer yes/no:-  ";
        cin>>Cancer;
        cout<<"\n\t\t Enter your permanent address :";
        cin>>address;
        cout<<"\n\t\t Enter your Mobile number :";
        cin>>mobileNumber;
        cout<<"\n\t\t Enter the vaccine injected(DOSE NUM):\n\n";
        gets(vaccine);


}
void Vaccine::showData()//3
{
    cout<<"\n\n\t\t>>>>>>>>>>>>>>>>>>>>>>> VACCINE MANAGEMENT SYSTEM  <<<<<<<<<<<<<<<<<<<<<<<<n\n"<<endl;

    cout<<"\n\t\t\t*****************************************\n";
    cout<<"\t\t\t\t DETAILS OF THE CITIZEN  ";
    cout<<"\n\t\t\t*****************************************\n\n";
  	cout<<"\t\t Name is: "<<name<<endl;
   	cout<<"\t\t NID number is: "<<NID<<endl;
    cout<<"\t\t Your age is "<<age<<endl;
    cout<<"\t\t Profession is : "<<profession<<endl;
    cout<<"\t\t Gender is : "<<gender<<endl;
    cout<<"\t\t Blood pressure is :"<<Diabetes<<endl;
    cout<<"\t\t cancer is : "<<Cancer<<endl;
    cout<<"\t\t Address is "<<address<<endl;
    cout<<"\t\t Mobile number is: "<<mobileNumber<<endl;
    cout<<"\n\t\t vaccine injected : "<<vaccine<<endl;
}
int main()
{
    Vaccine obj[10];
    int i,t,c;

    //FRONT
    system("COLOR 2F ");
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\tINTERNATIONAL UNIVERSITY OF BUSINESS AGRICULTURE AND TECHNOLOGY";
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t DEVELOPED BY: NAZMUS SAKIB APURBA";
    Sleep(3000);
    system("cls");
    for(i=1;i<=100;++i)
    {                  system("COLOR 30");
                       Sleep(5);
                       system("cls");
                       cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\   WELCOME TO OUR PROJECT";
                       cout<<"\n\n\n\t\t\t\t\t\tTopic:VACCINE MANAGEMENT SYSTEM";
                       cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tLOADING "<<i<<"%";
                       if(i==100);
                       Sleep(30);
    }
    system("cls");


           Sleep(10);
           system("COLOR B0");
           int password;
           password = 1234;
           string username;
           cout << "\n\n\n\t\t\t\t\t\tEnter username:";
           //Sleep(10);
           cin >> username;



           cout << "\n\n\t\t\t\t\t\tEnter password:";
           cin >> password;
           Sleep(10);
           system("cls");
           cout <<"\n";
           if (password == 1234)
           Sleep(10);


    {

    //CHOOSE THE OPTION
    system("COLOR 80 ");
    cout<<"\n\n\n\n\n\n\t\t\t\t>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"<<endl<<endl;
    cout<<"\n\n\t\t\t\t\t\t  "<<username<<" WELCOME TO OUR PAGE"<<endl;
    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t\tCHOOSE THE OPTION:"<<"\n\n\n";
    Sleep(50);
    cout<<"\t\t\t1>SEARCH FOR THE INFORMATION OF THE CITIZEN\t\t";
    Sleep(50);
    cout<<"2>VACCINE INFORMATION"<<"\n\n\n";
    Sleep(50);
    cout<<"\t\t\tEnter your option>> ";
    cin>>t;
    cout<<">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<";
    system("cls");


    if( t==1)
    {
        int N,C;
        cout<<"NUMBER OF CITIZEN:"<<endl;
        cin>>N;
        system("cls");

     for(i=0;i<N;i++)
    {
        obj[i].setData();
        system("cls");
    }


     cout<<"Search by entering NID number:"<<endl;
     cin>>C;
    for(int i=0;i<N;i++)
    {
        system("COLOR A0");


        if(obj[i].NID == C)
        obj[i].showData();

    }

    }


    if (t==2)
    {
        int vaccine;
        system("COLOR F0");
        Sleep(30);
        cout<<"\n\n\t\t>>>>>>>>>>>>>>>>>>>>>>> VACCINE MANAGEMENT SYSTEM  <<<<<<<<<<<<<<<<<<<<<<<<\n\n"<<endl;

        cout<<"\n\n\t\t  >>>>>>>>>>>>>>>>>>>>>>>VACCINE INFORMATION<<<<<<<<<<<<<<<<<<<<<<<<\n\n"<<endl;


        cout<<"\n\n\t\t  1.MODERNA               2.COVIDSHIELD              3.SINOPHARM \n\n"<<endl<<endl;

        cout<<"\n\n\t\t                           CHOOSE VACCINE >>";


        cin>>vaccine;
        system("cls");

         Sleep(20);
         switch(vaccine){
         case 1:
         cout <<"************************************MODERNA*******************************************"<<endl
              <<"Target : SARS-CoV-2"<<endl
              <<"Vaccine type : mRNA"<<endl
              <<"Trade names	Spikevax"<<endl
              <<"Other names	mRNA-1273, CX-024414, COVID-19 mRNA Vaccine Moderna"<<endl
              << "AHFS/Drugs.com :  Multum Consumer Information"<<endl
              <<" MedlinePlus: 	a621002"<<endl
              <<" License data :	US DailyMed: Moderna_COVID-19_Vaccine"<<endl
              <<" Pregnancy category - AU: B1"<<endl
              <<"ATC code	J07BX03 (WHO)"<<endl<<endl;

         cout <<"**********************************IN OUR STOCK****************************************"<<endl<<endl;
         cout<<"AVAILABLE : 300000     USED: 200000   NEED: 900  PERFORMANCE: 80%   SIDE-EFFECT CASE: NO"<<endl<<endl;;



         break;


         case 2:
         cout <<"*************************************COVIDSHIELD****************************************"<<endl
              <<"Target	SARS-CoV-2"<<endl
              <<"Vaccine type	Viral vector"<<endl
              <<"Trade names	Vaxzevria,Covishield"<<endl
              <<"Other names	AZD1222, ChAdOx1 nCoV-19 ChAdOx1-S"<<endl
              <<"License data	EU EMA: by INN US DailyMed: AstraZeneca_COVID-19_Vaccine"<<endl
              <<"Pregnancy category	AU: B2"<<endl
              <<"Routes of administration	Intramuscular"<<endl
              <<" ATC code	J07BX03 (WHO)"<<endl<<endl;
         cout <<"**********************************IN OUR STOCK****************************************"<<endl<<endl;
         cout<<"AVAILABLE : 490000    USED: 2999     NEED: 400    PERFORMANCE: 90%   SIDE-EFFECT CASE: NO";
         break;


         case 3:
         cout <<"**********************************SINOPHARM*********************************************"<<endl
              <<"Target	SARS-CoV-2"<<endl
              <<"Vaccine type	INACTIVATED"<<endl
              <<"Trade names	Zhong'aikewei"<<endl

              <<"License data	 Sinopharm's Beijing Institute "<<endl

              <<"Routes of administration	Intramuscular"<<endl
              <<" ATC code	  J07BX03 (WHO)"<<endl<<endl;
         cout <<"**********************************ABOUT VACCINE****************************************"<<endl<<endl;
         cout<<"AVAILABLE : 700000    USED: 40000   NEED: 3456    PERFORMANCE: 80%   SIDE-EFFECT:  YES(3)";
         break;

         }



    }



    }
          if(password != 1234)
          {
            cout << "    \n\n\n\n\t\t\t\t\t\t\tInvalid Username/Password\n\n";
            cout << "    \t\t\t\t\t\t\tEnter Correct Username/Password";
          }
           Sleep(10);
}

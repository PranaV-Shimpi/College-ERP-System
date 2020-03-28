 #include<iostream>
#include<cstring>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<string>
using namespace std;

void colour (int i)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),i);
}

class data
{
	char stu1_id[25],stu2_id[25],stu3_id[25];
	char stu1_pass[25],stu2_pass[25],stu3_pass[25];
	char stu1_name[25],stu2_name[25],stu3_name[25];

	char sta1_id[25],sta2_id[25],sta3_id[25];
	char sta1_pass[25],sta2_pass[25],sta3_pass[25];

	char temp1[35],temp2[25];
	int ch1,ch2;

	char temp3[35],temp4[25];
	int ch3,ch4;

	int ch5,ch6;

	float att1,att2,att3;

	float stu1_ptr[4],stu2_ptr[4],stu3_ptr[4];

	int back1,back2,back3;

	char dob1[15],dob2[15],dob3[15];
	char doa1[15],doa2[15],doa3[15];

	public:
			data()
			{
				strcpy(stu1_id,"sanketp");
				strcpy(stu2_id,"pranavs");
				strcpy(stu3_id,"mohitk");

				strcpy(stu1_pass,"sabc");
				strcpy(stu2_pass,"sdef");
				strcpy(stu3_pass,"sxyz");

				strcpy(stu1_name,"SANKET PADWAL");
				strcpy(stu2_name,"PRANAV SHIMPI");
				strcpy(stu3_name,"MOHIT KELANI");

				strcpy(sta1_id,"sabc");
				strcpy(sta2_id,"sdef");
				strcpy(sta3_id,"sxyz");

				strcpy(sta1_pass,"sabc");
				strcpy(sta2_pass,"sdef");
				strcpy(sta3_pass,"sxyz");

				att1=90.48;
				att2=75.04;
				att3=57.88;

				for(int i=0;i<4;i++)
                {
                    stu1_ptr[0]=9.88;
                    stu1_ptr[1]=9.55;
                    stu1_ptr[2]=9.42;
                    stu1_ptr[3]=9.01;

                    stu2_ptr[0]=8.42;
                    stu2_ptr[1]=9.01;
                    stu2_ptr[2]=8.85;
                    stu2_ptr[3]=7.45;

                    stu3_ptr[0]=7.52;
                    stu3_ptr[1]=7.99;
                    stu3_ptr[2]=7.65;
                    stu3_ptr[3]=7.32;
                }

                back1=0;
                back2=4;
                back3=1;

                strcpy(dob1,"12/11/1999");
                strcpy(dob2,"02/03/1999");
                strcpy(dob3,"25/09/1999");

                strcpy(doa1,"12/08/2017");
                strcpy(doa2,"08/08/2017");
                strcpy(doa3,"25/08/2017");
			}

			~data()
			{}

			void stu_log();
			void sta_log();
			void stu_menu();
			void sta_menu();
			void check_attendence(char student[25]);
			void update_attendence();
			void full_info();
			void indi_info();
};

void data::stu_menu()
{
    do
    {
        colour(800);
    cout<<"\n\n\t\t ENTER CHOICE:";
        colour(15);

	cout<<"\n 1]CHECK ATTENDENCE.";
	cout<<"\n 2]VIEW YOUR INFORMATION.";
	cout<<"\n 0]EXIT TO MAIN PAGE.";
	cin>>ch5;

	switch(ch5)
	{
        case 1:
                check_attendence(temp1);

        break;

        case 2:
                indi_info();

        break;
	}


    }while(ch5!=0);


}

void data::full_info()
{
  colour(800);
cout<<"\n\t\t\t=========================================\n";
    cout<<"\n\t\t\t\tSTUDENT DATABASE.\n\n";
cout<<"\n\t\t\t=========================================\n";
    colour(15);
    cout<<stu1_name<<"\t "<<"("<<stu1_id<<")";
    cout<<"\n\n D.O.B:"<<dob1;
    cout<<"\n\n Date Of Admission:"<<doa1;

    cout<<"\n\n ATTENDENCE="<<att1<<" %";

    cout<<"\n\n RESULT.";

    cout<<"\n CLASS"<<"\t SGPA";
    cout<<"\n F.E."<<"\t "<<stu1_ptr[0];
    cout<<"\n S.E."<<"\t "<<stu1_ptr[1];
    cout<<"\n T.E."<<"\t "<<stu1_ptr[2];
    cout<<"\n B.E."<<"\t "<<stu1_ptr[3];
    cout<<"\n\n BACKLOGS: "<<back1;
    cout<<"\n\n--------------------------------------------------------------- ";
    cout<<"\n\n\n";

    cout<<stu2_name<<"\t "<<"("<<stu2_id<<")";
    cout<<"\n\n D.O.B:"<<dob2;
    cout<<"\n\n Date Of Admission:"<<doa2;

    cout<<"\n\nATTENDENCE="<<att2<<" %";

    cout<<"\n\n RESULT.";

    cout<<"\n CLASS"<<"\t SGPA";
    cout<<"\n F.E."<<"\t "<<stu2_ptr[0];
    cout<<"\n S.E."<<"\t "<<stu2_ptr[1];
    cout<<"\n T.E."<<"\t "<<stu2_ptr[2];
    cout<<"\n B.E."<<"\t "<<stu2_ptr[3];
    cout<<"\n\n BACKLOGS: "<<back2;
    cout<<"\n\n--------------------------------------------------------------- ";

    cout<<"\n\n\n";

    cout<<stu3_name<<"\t "<<"("<<stu3_id<<")";
    cout<<"\n\n D.O.B:"<<dob3;
    cout<<"\n\n Date Of Admission:"<<doa3;

    cout<<"\n\nATTENDENCE="<<att3<<" %";

    cout<<"\n\nRESULT.";

    cout<<"\n CLASS"<<"\t SGPA";
    cout<<"\n F.E."<<"\t "<<stu3_ptr[0];
    cout<<"\n S.E."<<"\t "<<stu3_ptr[1];
    cout<<"\n T.E."<<"\t "<<stu3_ptr[2];
    cout<<"\n B.E."<<"\t "<<stu3_ptr[3];
    cout<<"\n\n BACKLOGS: "<<back3;
    cout<<"\n\n--------------------------------------------------------------- ";

    cout<<"\n\n";
}


void data::indi_info()
{
  char temid[25];
  int ch10;

  aid_ag:

  cout<<"\n Enter ID:";
  cin>>temid;

  if(strcmp(temid,stu1_id)==0)
  {
          colour(800);
    cout<<"\n\t\t\t=========================================\n";
    cout<<"\n\t\t\t\tSTUDENT DATABASE.\n\n";
    cout<<"\n\t\t\t=========================================\n";
    colour(15);
    cout<<stu1_name<<"\t "<<"("<<stu1_id<<")";
    cout<<"\n\n D.O.B:"<<dob1;
    cout<<"\n\n Date Of Admission:"<<doa1;

    cout<<"\n\n ATTENDENCE="<<att1<<" %";

    cout<<"\n\n RESULT.";

    cout<<"\n CLASS"<<"\t SGPA";
    cout<<"\n F.E."<<"\t "<<stu1_ptr[0];
    cout<<"\n S.E."<<"\t "<<stu1_ptr[1];
    cout<<"\n T.E."<<"\t "<<stu1_ptr[2];
    cout<<"\n B.E."<<"\t "<<stu1_ptr[3];
    cout<<"\n\n BACKLOGS: "<<back1;

    cout<<"\n\n\n";
  }

  else if(strcmp(temid,stu2_id)==0)
  {
    cout<<stu2_name<<"\t "<<"("<<stu2_id<<")";
    cout<<"\n\n D.O.B:"<<dob2;
    cout<<"\n\n Date Of Admission:"<<doa2;

    cout<<"\n\nATTENDENCE="<<att2<<" %";

    cout<<"\n\n RESULT.";

    cout<<"\n CLASS"<<"\t SGPA";
    cout<<"\n F.E."<<"\t "<<stu2_ptr[0];
    cout<<"\n S.E."<<"\t "<<stu2_ptr[1];
    cout<<"\n T.E."<<"\t "<<stu2_ptr[2];
    cout<<"\n B.E."<<"\t "<<stu2_ptr[3];
    cout<<"\n\n BACKLOGS: "<<back2;

    cout<<"\n\n\n";
  }
  else if(strcmp(temid,stu3_id)==0)
  {
    cout<<stu3_name<<"\t "<<"("<<stu3_id<<")";
    cout<<"\n\n D.O.B:"<<dob3;
    cout<<"\n\n Date Of Admission:"<<doa3;

    cout<<"\n\nATTENDENCE="<<att3<<" %";

    cout<<"\n\nRESULT.";

    cout<<"\n CLASS"<<"\t SGPA";
    cout<<"\n F.E."<<"\t "<<stu3_ptr[0];
    cout<<"\n S.E."<<"\t "<<stu3_ptr[1];
    cout<<"\n T.E."<<"\t "<<stu3_ptr[2];
    cout<<"\n B.E."<<"\t "<<stu3_ptr[3];
    cout<<"\n\n BACKLOGS: "<<back3;

    cout<<"\n\n";
  }
  else
  {
      system("cls");

		cout<<"\n SORRY!!";
		cout<<"\n INVALID LOGIN.";

		cout<<"\n ENTER :";

		cout<<"\n\t 1]Enter ID again.";
		cout<<"\n\t 0]EXIT.";

		cout<<"\n CHOICE:";
		cin>>ch10;

		if(ch10==1)
		{
			goto aid_ag;
		}
		else
		{
			cout<<"\n";
			for(int i=0;i<10;i++)
			{
				cout<<".";
			}

			exit(1);
		}
  }

}

void data::sta_menu()
{
    do
    {
            colour(800);
            cout<<"\n\n\t\t ENTER CHOICE:";
            colour(15);
	cout<<"\n 1]CHECK ATTENDENCE.";
	cout<<"\n 2]UPDATE ATTENDENCE.";
    cout<<"\n 3]VIEW INDIVIDUAL STUDENT INFORMATION.";
    cout<<"\n 4]VIEW ALL STUDENT'S INFORMATION.";
	cout<<"\n 0]EXIT TO MAIN PAGE.";
	cin>>ch6;

	switch(ch6)
	{
        case 1:
                system("cls");

                cout<<"\n \t\t\t\tATTENDENCE\n";
                cout<<stu1_name<<"\t "<<"("<<stu1_id<<")\t "<<att1<<"\n";
                cout<<stu2_name<<"\t "<<"("<<stu2_id<<")\t "<<att2<<"\n";
                cout<<stu3_name<<"\t "<<"("<<stu3_id<<")\t "<<att3<<"\n";


        break;

        case 2:
                system("cls");

                update_attendence();


        break;

        case 3:
                system("cls");

                indi_info();


        break;

        case 4:
                system("cls");

                full_info();


        break;
        case 0:
                break;
        default:
                colour(800);
                cout<<"\n\n\t\t\t      WRONG INPUT.......";
                colour(15);
                break;



	}cin.ignore();
		cin.get();
    }while(ch6!=0);

}


void data::stu_log() //student login
{
    cout<<"\n";
    colour(800);

	cout<<"\n \t\t\t\t WELCOME STUDENT";
    colour(15);
id_ag:

	cout<<"\n Enter you ID:";
	cin>>temp1;

	if(strcmp(temp1,stu1_id)==0 || strcmp(temp1,stu2_id)==0 || strcmp(temp1,stu3_id)==0)
	{
		cout<<"\n \t\t\t\t->OK";
	}

	else
	{

        system("cls");

		cout<<"\n SORRY!!";
		cout<<"\n INVALID LOGIN.";

		cout<<"\n ENTER :";

		cout<<"\n\t 1]Enter ID again.";
		cout<<"\n\t 0]EXIT.";

		cout<<"\n CHOICE:";
		cin>>ch1;

		if(ch1==1)
		{
			goto id_ag;
		}
		else
		{
			cout<<"\n";
			for(int i=0;i<10;i++)
			{
				cout<<".";
			}

			exit(1);
		}
	}

pa_ag:

	cout<<"\n Enter you PASSWORD:";
	cin>>temp2;

	if(strcmp(temp2,stu1_pass)==0 || strcmp(temp2,stu2_pass)==0 || strcmp(temp2,stu3_pass)==0)
	{
        system("cls");

		cout<<"\n\t\t\t\t LOGIN SUCCESSFUL \n";

		if(strcmp(temp1,stu1_id)==0)
        {
            cout<<"\n\n\t\t WELCOME->"<<stu1_name<<"  :)\n\n";
        }
        else if(strcmp(temp1,stu2_id)==0)
        {
            cout<<"\n\t\t\t WELCOME->"<<stu2_name<<"  :)\n\n";
        }
        else if(strcmp(temp1,stu3_id)==0)
        {
            cout<<"\n\n\t\t WELCOME->"<<stu3_name<<"  :)\n\n";
        }

		system("pause");
		system("cls");
	}

	else
	{
		system("cls");

		cout<<"\n SORRY!!";
		cout<<"\n INVALID PASSWORD.";

		cout<<"\n ENTER CHOICE:";

		cout<<"\n\t 1]Enter PASSWORD again.";
		cout<<"\n\t 0]EXIT.";

		cout<<"\n CHOICE:";
		cin>>ch2;

		if(ch2==1)
		{
			goto pa_ag;
		}
		else
		{
			cout<<"\n";
			for(int i=0;i<10;i++)
			{
				cout<<".";
			}

			exit(3);
		}
	}

	if(strcmp(temp1,stu1_id)==0)
        {
            cout<<"\n HI "<<stu1_name<<"\n";
        }
        else if(strcmp(temp1,stu2_id)==0)
        {
            cout<<"\n HI "<<stu2_name<<"\n";
        }
        else if(strcmp(temp1,stu3_id)==0)
        {
            cout<<"\n HI "<<stu3_name<<"\n";
        }

    stu_menu();
}

void data::sta_log() //staff login
{   cout<<"\n";
    colour(555);
	cout<<"\n \t\t\t\t WELCOME STAFF MEMBER";
    colour(15);
id_ag:
    cout<<"\n";
	cout<<"\n Enter you ID:";
	cin>>temp3;

	if(strcmp(temp3,sta1_id)==0 || strcmp(temp3,sta2_id)==0 || strcmp(temp3,sta3_id)==0)
	{

		cout<<"\n \t\t\t\t->OK";
	}

	else
	{
		system("cls");

		cout<<"\n SORRY!!";
		cout<<"\n INVALID LOGIN.";

		cout<<"\n ENTER LOGIN:";

		cout<<"\n\t 1]Enter ID again.";
		cout<<"\n\t 0]EXIT.";

		cout<<"\n CHOICE:";
		cin>>ch3;

		if(ch3==1)
		{
			goto id_ag;
		}
		else
		{
			cout<<"\n";
			for(int i=0;i<10;i++)
			{
				cout<<".";
			}

			exit(0);
		}
	}

pa_ag:

	cout<<"\n Enter you PASSWORD:";
	cin>>temp4;

	if(strcmp(temp4,sta1_pass)==0 || strcmp(temp4,sta2_pass)==0 || strcmp(temp4,sta3_pass)==0)
	{
		cout<<"\n \t\t\t\t->OK";

		system("cls");

		cout<<"\n\t\t\t\t LOGIN SUCCESSFUL \n";

        system("pause");
	}

	else
	{
		system("cls");

		cout<<"\n SORRY!!";
		cout<<"\n INVALID PASSWORD.";

		cout<<"\n ENTER CHOICE:";

		cout<<"\n\t 1]Enter PASSWORD again.";
		cout<<"\n\t 0]EXIT.";

		cout<<"\n CHOICE:";
		cin>>ch4;

		if(ch4==1)
		{
			goto pa_ag;
		}
		else
		{
			cout<<"\n";
			for(int i=0;i<10;i++)
			{
				cout<<".";
			}

			exit(1);
		}
	}

	system("cls");

	sta_menu();

}

void data::check_attendence(char student[25])
{
	if(strcmp(student,stu1_id)==0)
	{
		cout<<"\n ATTENDENCE="<<att1<<"%";
	}

	else if(strcmp(student,stu2_id)==0)
	{
		cout<<"\n ATTENDENCE="<<att2<<"%";
	}
	else
	{
		cout<<"\n ATTENDENCE="<<att3<<"%";
	}

}

void data::update_attendence()
{
    char uid[25];
    float n_att;

    cout<<"\n \t\t\t\tATTENDENCE\n";
    cout<<stu1_name<<"\t "<<"("<<stu1_id<<")\t "<<att1<<"\n";
    cout<<stu2_name<<"\t "<<"("<<stu2_id<<")\t "<<att2<<"\n";
    cout<<stu3_name<<"\t "<<"("<<stu3_id<<")\t "<<att3<<"\n";
    cout<<"\n Enter the ID:";
    cin>>uid;

    if(strcmp(uid,stu1_id)==0)
    {
        cout<<"\n Enter New Attendance:";
        cin>>n_att;

        att1=n_att;

    }
    else if(strcmp(uid,stu2_id)==0)
    {
        cout<<"\n Enter New Attendance:";
        cin>>n_att;

        att2=n_att;

    }
    else
    {
        cout<<"\n Enter New Attendance:";
        cin>>n_att;

        att3=n_att;
    }

    cout<<"\n \t\t\t\tFINAL ATTENDENCE\n";
    cout<<stu1_name<<"\t "<<"("<<stu1_id<<")\t "<<att1<<"\n";
    cout<<stu2_name<<"\t "<<"("<<stu2_id<<")\t "<<att2<<"\n";
    cout<<stu3_name<<"\t "<<"("<<stu3_id<<")\t "<<att3<<"\n";
}

int main()
{

	int ch;
    data d;
    do
	{

	    system("cls");

	cout<<"\n\n\t\t\t=========================================\n";
	colour(110);
	cout<<"\t\t\t\t       KKWIEER ERP      ";
	colour(15);
	colour(2300);
	cout<<"\n\t\t\t\t  Handcrafted in India  ";
    colour(15);

	cout<<"\n\t\t\t=========================================\n";

        colour(758);
        cout<<"\n\t\t\t\t\t   LOGIN   \n";
        colour(15);
        colour(944);
		cout<<"\n\n\t\t\t      **MENU**      ";
		colour(15);
        colour(1277);
		cout<<"\n\n\t\t\t (1)STUDENT LOGIN.  "<<endl;
		cout<<"\n\t\t\t (2)STAFF LOGIN.    "<<endl;
		//cout<<"\n\t\t\t (3)USER GUIDE      "<<endl;
		cout<<"\n\t\t\t (0)EXIT.           "<<endl;
        colour(15);
        cout<<"\n\t\t\t CHOICE :        ";
		cin>>ch;


		switch(ch)
		{
			case 1://student login
				system("cls");
                d.stu_log();

			break;

			case 2://staff login
				system("cls");
				d.sta_log();

			break;

            case 0:
                colour(800);
                cout<<"\n\n\t\t\t\t      THANK u......";
                colour(15);
                    break;
            default:
                colour(800);
                cout<<"\n\n\t\t\t      WRONG INPUT.......";
                colour(15);
                break;
        }
        cin.ignore();
		cin.get();

	}while(ch!=0);
}


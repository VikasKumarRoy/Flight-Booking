#include <iostream>
#include<fstream>
#include<string.h>
using namespace std;

int glob=0; //global variables
int global=10;

class d_booking //class  for domestic booking
{
protected:
    int pnr;
    char f_d[10],toja[7],tojd[7]; //protected members
    long int doj;
    int choice,src,dest;
public://public member functions
    void d_pnr()
    {
        glob++; // increment variable
        pnr=glob;
    }
    int j_detail() // function declaration and definition for domestic journey
    {
        cout << "\nEnter DateOfJourney(DDMMYY)." << "Please enter a valid date." <<  endl;
        cin >> doj;
        cout << "\1.Brisbane(1) \t\2.Sydney(2) \t\3.Melbourne(3) \t\4.Canberra(4)" << endl << endl;
        cout << "\tEnter Source" << endl;
        cin >> src;
        cout << "\tEnter destination" << endl;
        cin >> dest;
        if((src==1 && dest==2) || (src==2 && dest==1))//condition
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.Qantas(1)\t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "\2.Fly Dubai(2)\t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "\3.Go Air(3)\t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
        }

        else if((src==1 && dest==3) || (src==3 && dest==1))//condition
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.Qantas(1)\t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "\2.Fly Dubai(2)\t14:00\t\t17:05\t\tRs.5500\t\tRefundable\n";
            cout << "\3.Go Air(3)\t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
        }

        else if((src==1 && dest==4) || (src==4 && dest==1))//condition
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.Qantas(1)\t08:00\t\t11:05\t\tRs.4000\t\tRefundable\n";
            cout << "\2.Fly Dubai(2)\t14:00\t\t17:05\t\tRs.4250\t\tRefundable\n";
            cout << "\3.Go Air(3)\t19:00\t\t22:05\t\tRs.6100\t\tRefundable\n";
        }

        else if((src==2 && dest==3) || (src==3 && dest==2))//condition
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.Qantas(1)\t08:00\t\t11:05\t\tRs.5400\t\tRefundable\n";
            cout << "\2.Fly Dubai(2)\t14:00\t\t17:05\t\tRs.2500\t\tRefundable\n";
            cout << "\3.Go Air(3)\t19:00\t\t22:05\t\tRs.2890\t\tRefundable\n";
        }

        else if((src==2 && dest==4) || (src==4 && dest==2))//condition
        {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.Qantas(1)\t08:00\t\t11:05\t\tRs.5000\t\tRefundable\n";
            cout << "\2.Fly Dubai(2)\t14:00\t\t17:05\t\tRs.4500\t\tRefundable\n";
            cout << "\3.Go Air(3)\t19:00\t\t22:05\t\tRs.6000\t\tRefundable\n";
        }
        else if((src==3 && dest==4) || (src==4 && dest==3))//condition
         {
            cout << "\t \t \tFlights Found" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.Qantas(1)\t08:00\t\t11:05\t\tRs.5800\t\tRefundable\n";
            cout << "\2.Fly Dubai(2)\t14:00\t\t17:05\t\tRs.5508\t\tRefundable\n";
            cout << "\3.Go Air(3)\t19:00\t\t22:05\t\tRs.6050\t\tRefundable\n";
        }
        else if(src==dest)//condition
        {
            cout << "\nSource and destination can't be same.\nTry again\n\n\n" << endl;
            return j_detail();
        }
        else
        {
            cout <<"\nWrong input entered\nTry again\n\n\n" << endl;
            return j_detail();
        }

    }

    int  select_flight() //function declaration and definition for selecting flight
    {   cout << "\nEnter your choice" << endl;
        cin >> choice;
        switch(choice) // switch case
        {
          case 1://condition
                cout << "\nFlight selected:"<<endl;
                cout << "Qantas"<<endl;
                strcpy(f_d,"Qantas");//copy to string
                cout << "Departure Time : 08:00"<<endl;
                cout<<"Arrival Time: 11:05"<<endl;
                strcpy(tojd,"8:00"); //copy to string
                strcpy(toja,"11:05");// copy to string
                break;
          case 2://condition
                cout << "\nFlight selected:"<<endl;
                cout << "Fly Dubai"<<endl;
                strcpy(f_d,"Fly Dubai");//copy to string
                cout << "Departure Time : 14:00"<<endl;
                cout<<"Arrival Time: 17:05"<<endl;
                strcpy(tojd,"14:00");//copy to string
                strcpy(toja,"17:05");//copy to string
                break;
          case 3://condition
                cout << "\nFlight selected:" << endl;
                cout << "Go Air" << endl;
                strcpy(f_d,"Go Air");//copy to string
                cout << "Departure Time : 19:00" << endl;
                cout<<"Arrival Time: 22:05" << endl;
                strcpy(tojd,"19:00");//copy to string
                strcpy(toja,"22:05");//copy to string
                break;
          default://condition
                cout << "Wrong input entered.\nTry again" << endl;
                return select_flight();
        }
    }
};

class i_booking//class for international booking
{
protected://protected members
    int pnri;
    char f_i[10],tojai[7],tojdi[7];
    long int doji;
    int srci,desti,choicei;
public://public member functions
    void i_pnr()
    {
        global++;//increment variable
        pnri=global;
    }
    //brought to you by code-projects.org
    int j_detaili()// function declaration and definition for journey details
    {
        cout << "Enter DateOfJourney(DDMMYY)." << "Please enter a valid date." << endl;;
        cin >> doji;
        cout << "\1.London(1) \2.Dubai(2) \3.Abu Dhabi(3) \4.Singapore(4) \5.NewYork(5) " << endl << endl;
        cout << "\tEnter Source" << endl;
        cin >> srci;
        cout << "\nEnter destination" ;
        cin >> desti;
        cout << "\t \t \tFlights Found" << endl << endl;

        if((srci==1 && desti==3) || (srci==3 && desti==1))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.Vistara(1)\t10:00\t\t14:05\t\tRs.25000\tRefundable\n";
            cout << "\2.Fly Dubai(2)\t14:00\t\t18:05\t\tRs.21500\tRefundable\n";
            cout << "\3.Emirates(3)\t18:00\t\t22:05\t\tRs.24000\tRefundable\n";
        }

        else if((srci==1 && desti==4) || (srci==4 && desti==1))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.Vistara(1)\t10:00\t\t14:05\t\tRs.25500\tRefundable\n";
            cout << "\2.Fly Dubai(2)\t14:00\t\t18:05\t\tRs.21300\tRefundable\n";
            cout << "\3.Emirates(3)\t18:00\t\t22:05\t\tRs.24650\t\tRefundable\n";
        }

        else if((srci==1 && desti==5) || (srci==5 || desti==1))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.Vistara(1)\t10:00\t\t14:05\t\tRs.52500\tRefundable\n";
            cout << "\2.Fly Dubai(2)\t14:00\t\t18:05\t\tRs.59420\tRefundable\n";
            cout << "\3.Emirates(3)\t18:00\t\t22:05\t\tRs.64892\tRefundable\n";
        }

        else if((srci==2 && desti==3) || (srci==3 && desti==2))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.Vistara(1)\t10:00\t\t14:05\t\tRs.17800\tRefundable\n";
            cout << "\2.Fly Dubai(2)\t14:00\t\t18:05\t\tRs.14900\tRefundable\n";
            cout << "\3.Emirates(3)\t18:00\t\t22:05\t\tRs.18700\tRefundable\n";
        }

        else if((srci==2 && desti==4) || (srci==4 && desti==2))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.Vistara(1)\t10:00\t\t14:05\t\tRs.32000\tRefundable\n";
            cout << "\2.Fly Dubai(2)\t14:00\t\t18:05\t\tRs.38500\tRefundable\n";
            cout << "\3.Emirates(3)\t18:00\t\t22:05\t\tRs41259\tRefundable\n";        }

        else if(srci==2 && desti==5 || (srci==5 && desti==2))//condition
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\tCategory:\n";
            cout << "\1.Vistara(1)\t10:00\t\t14:05\t\tRs.82500\tRefundable\n";
            cout << "\2.Fly Dubai(2)\t14:00\t\t18:05\t\tRs.87550\tRefundable\n";
            cout << "\3.Emirates(3)\t18:00\t\t22:05\t\tRs81478\tRefundable\n";

        }
        else if(srci==desti)//condition
        {
            cout << "wrong input entered.\nTry again\n\n\n"<< endl;
            return j_detaili();
        }
        else//condition
            {
            cout << "Wrong input entered.\nTry again\n\n\n";
            return j_detaili();
        }

    }

    int select_flighti()//function declaration and definition for selecting flight
    {
        cout << "\nEnter your choice" << endl;
        cin >> choicei;
        switch(choicei)//switch case
        {
        case 1://condition
            cout << "\nFlight selected:" <<endl;
            cout << "Vistara" << endl;
            strcpy(f_i,"Vistara");//copy to string
            cout << "Departure Time: 10:00" << endl;
            cout << "Arrival Time: 14:05" << endl;
            strcpy(tojdi,"10:00");//copy to string
            strcpy(tojai,"14:05");//copy to string
            break;
        case 2://condition
               cout << "\nFlight selected:" << endl;
               cout << "Fly Dubai" << endl;
               strcpy(f_i,"Fly Dubai");//copy to string
               cout << "Departure Time: 14:00" << endl;
               cout << "Arrival Time: 18:05" << endl;
               strcpy(tojdi,"14:00");//copy to string
                strcpy(tojai,"18:05");//copy to string
                break;
        case 3://condition
            cout << "\nFlight selected:" << endl;
            cout << "Emirates" << endl;
            strcpy(f_i,"Emirates");//copy to string
            cout << "Departure Time : 18:00" << endl;
            cout << "Arrival Time: 22:05" << endl;
            strcpy(tojdi,"18:00");//copy to string
            strcpy(tojai,"22:05");//copy to string
            break;
        default://condition
            cout << "Wrong input entered" << endl;
            return select_flighti();
        }
    }
};


class passenger: public d_booking,public i_booking//class passenger publicly inherited from class d_booking and i_booking
{
protected://protected members
    char f_name[20],l_name[20],email[50];
    int age,gender;
    long int c_no;
public://public member functions
    void p_detail(int x)//function declaration and definition
    {   if(x==1)//if else for domestic and international booking selection
        { j_detail();//function call
          select_flight();//function call
        }
          else
          {  j_detaili();//function call1353
             select_flighti();//function call
          }
        cout << "\n\n\nEnter passenger details";
        cout << "\nFirst Name:";
        cin >> f_name;
        cout << "Last Name:";
        cin >> l_name;
    }
    int gender_check()//to check gender input as valid
    {
        cout << "\nGender:\nMale-press:1::\nFemale-press:2::";
        cin >> gender;
        if(gender>2)//condition
        {
            cout << "\n\nWrong input entered.\nTry again\n\n" << endl;
            return gender_check();//function call
        }
    }
       void more_details()//to take more details of the passenger
       {
        cout << "Age:";
        cin >> age;
        cout << "Email Id:";
        cin >> email;
        cout << "Contact no.(6 digits):";
        cin >> c_no;
        cout << "\n\nDetails Entered:\n";
        cout << "Name:" << f_name << " " << l_name << endl;
        cout << "Gender:" << gender << endl;      //displaying details
        cout << "Age:" << age << endl;
        cout << "Email id:" << email << endl;
        cout << "Contact No.:" << c_no << endl;
    }


     int getpnr()//function to get pnr for domestic booking
        {
            return pnr;
        }

     int getpnri()//function to get pnr for international booking
     {
         return pnri;
     }

     void disp()//function to display details for domestic booking
     {
         cout<<"PNR:" << pnr << endl;
         cout<<"Flight:" << f_d << endl;
         cout<<"Name:" << f_name << " " << l_name << endl;
         cout<<"DOJ:" << doj << endl;
         cout<<"Departure Time:" << tojd << endl;
         cout<<"Arrival Time:" << toja;
     }

      void dispi()//function to display details for international booking
     {
         cout<<"PNR:" << pnri << endl;
         cout<<"Flight:" << f_i << endl;
         cout<<"Name:" << f_name << " " << l_name << endl;
         cout<<"DOJ:" << doji << endl;
         cout<<"Departure Time:" << tojdi << endl;
         cout<<"Arrival Time:" << tojai;
     }
};



class payment//class for payment
{
protected://protected members
    long
    int choice1,bank,card,date,cvv,user_id;
    char password[10];
public://public members functions
    void pay_detail()//function declaration and definition for payment method
    {     cout << "\n\n\nHow would you like to pay?:\n";
        cout << "\n\1.Debit Card(1) \n\2.Credit Card(2) \n\3.Net Banking(3)";
        cout << "\n\nEnter your choice";
        cin >> choice1;
        switch(choice1)//switch case
        {
        case 1://condition
            cout << "\nEnter card no.:";
            cin >> card;
            cout << "\nEnter expiry date:";
            cin >> date;
            cout << "\nEnter CVV no.:";
            cin >> cvv;
            cout << "\nTransaction Successful\n";
            break;
        case 2://condition
            cout << "\nEnter card no.:";
            cin >> card;
            cout << "\nEnter expiry date:";
            cin >> date;
            cout << "\nEnter password:";
            cin >> password;
            cout << "\nTransaction Successful\n";
            break;
        case 3://condition
            cout << "Banks Available: \1.West Pac Bank(1) \2.Nabil Bank(2) \3.Standard Chartered Bank(3) \4.AMP Bank(4) \5.Others(5)";
            cout << "\nSelect your bank:";
            cin >> bank;
            cout << "\nYou have selected:" << bank;
            cout << "\nEnter user id:";
            cin >> user_id;
            cout << "\nEnter password:";
            cin >> password;
            cout << "\nTransaction Successful\n";
            break;
        default://condition
            cout << "\nWrong input entered.\nTry again\n\n";
            return pay_detail();
        }
    }

};

void createfile(passenger p)//file creation for domestic booking
{  ofstream fin("domestic.txt",ios::binary|ios::app);
   fin.write((char*)&p,sizeof(p));//writing to file
   fin.close();//closing file
}

void cancelticket(int x)//function to cancel ticket
{  passenger p;
    int f=0;
   ifstream fout("domestic.txt",ios::binary|ios::app);//for reading file
   ofstream fin("domestic1.txt",ios::binary|ios::app);//for writing to a new file
   fout.read((char *)&p,sizeof(p));//reading file
   while(fout)
   {
     if(p.getpnr()!=x)//checking pnr
      fin.write((char *)&p,sizeof(p));//writing to file
      else
     {
         p.disp();//display details
         cout<<"\nYour Above ticket is being canceled:\n" << "Amount refunded: Rs 1000\n";
         f++;//incrementing f if pnr found
     }
     fout.read((char *)&p,sizeof(p));//reading another record from file
   }
   if(f==0)//if f==0,pnr not found
    cout<<"Ticket not found\n";
   fout.close();//closing file
   fin.close();//closing file
   remove("domestic.txt");//deleting old file
   rename("domestic1.txt","domestic.txt");//renaming new file

}

void checkticket(int x)//function to check pnr or ticket
{  passenger p;
   int f=0;
   ifstream fout("domestic.txt",ios::binary);//opening file
   fout.read((char *)&p,sizeof(p));//reading file
   while(fout)
   {
     if(p.getpnr()==x)//checking pnr
     {p.disp();//display details
      cout<<"\nYour ticket"<<endl;
      f++;//incrementing f if onr found
      break;
     }
     fout.read((char *)&p,sizeof(p));//reading another record from the same file

   }
   fout.close();//closing file
   if(f==0)//if f==0, pnr not found
   cout<<"Ticket not found"<<endl;

}
void createfilei(passenger p)//opening a file for international booking
{  ofstream fin("international.txt",ios::binary|ios::app);
   fin.write((char*)&p,sizeof(p));//writing to file
   fin.close();//closing file
}
void cancelticketi(int x)//function to cancel ticket
{  passenger p;
   int f=0;
   ifstream fout("international.txt",ios::binary|ios::app);//opening file
   ofstream fin("international1.txt",ios::binary|ios::app);//writing to a new file
   fout.read((char *)&p,sizeof(p));//reading old file
   while(fout)
   {
     if(p.getpnri()!=x)//checking pnr
      fin.write((char *)&p,sizeof(p));//writing to new file;
      else
     {
         p.dispi();//display details
         cout<<"Your Above ticket is being deleted:\n"<<"Amount refunded: Rs 1000\n";
         f++;//incrementing f if pnr found
     }
     fout.read((char *)&p,sizeof(p));//reading another record from old file
   }
   if(f==0)//if f==0,pnr not found
    cout<<"\nTicket not found\n";
   fout.close();//closing file
   fin.close();//closing file
   remove("international.txt");//deleting old file
   rename("international1.txt","international.txt");//renaming new file

}
void checkticketi(int x)//function to check pnr or ticket
{  passenger p;
   int f=0;
   ifstream fout("international.txt",ios::binary);//opening file
   fout.read((char *)&p,sizeof(p));//reading file
   while(fout)
   {
     if(p.getpnri()==x)//checking pnr
     {p.dispi();//display details
      cout<<"\nYour ticket"<<endl;
      f++;//incrementing f if pnr found
      break;
     }
     fout.read((char *)&p,sizeof(p));//reading another record from the file

   }
   fout.close();//closing file
   if(f==0)//if f==0, pnr not found
   cout<<"Ticket not found"<<endl;

}




int main()//main function
{

    class d_booking d1;//object for class d_booking
    class i_booking i1;//object for class i_booking
    class passenger p1;//object for class passenger
    class payment p2;//object for class payment
    int ch,ch1,n;//integer variables
    char input;//character variables
    do//do while loop
    {
    	system("CLS");
    cout << "\n\n \t\tWelcome To Flight Reservation System" << endl << endl;
    cout <<"\t   <><><><><><><><><><><><><><><><><><><><><><><>\n";
    cout << "\t   Book your Flight tickets at affordable prices!" << endl;
    cout <<"\t   <><><><><><><><><><><><><><><><><><><><><><><>";
    
    cout << "\n\n\t\t\t\1.Book Flight(1) \n\t\t\t\2.Cancel Fight(2) \n\t\t\t\3.Check Ticket(3) \n\t\t\t\4.Exit(4)" << endl;
    cout << "\n\t\t Please enter your choice:";
    cin >> ch;
      switch(ch)//witch case
      {
          case 1://condition
          system("CLS");
              cout << "\n\n\1.Domestic Fights(1) \n\2.International Flights(2)" << endl;
              cout << "\nPlease enter your option" << endl;
              cin >> ch1;
              switch(ch1)//inner switch case
              {
                   case 1://for booking domestic ticket
                        p1.d_pnr();
                        p1.p_detail(1);//function calls
                        p1.gender_check();
                        p1.more_details();
                        p2.pay_detail();
                        p1.disp();
                        createfile(p1);//call to create file
                        break;
                   case 2: //for booking international ticket
                           p1.p_detail(2);//function calls
                           p1.i_pnr();
                           p1.gender_check();
                           p1.more_details();
                           p2.pay_detail();
                           p1.dispi();
                           createfilei(p1);//call to create file
                           break;
                   default://wrong input
                    cout << "Wrong input entered\nTry again\n\n\n" << endl;
                    return main();
              }
          break;
          case 2:
              //for canceling ticket
              system("CLS");
              cout << "\1.Domestic Fights(1) \n\2.International Flights(2)" << endl;
                 cout << "\nPlease enter your option" << endl;
                 cin >> ch1;
                  if(ch1==1)
                {
                   cout << "Please enter your PNR no.:" << endl;
                   cin>>n;
                   cancelticket(n);//function call for domestic booking cancellation
                }
                 else if(ch1==2)
               {  cout << "Please enter your PNR no.:" << endl;
                  cin>>n;
                  cancelticketi(n);//function call for international cancellation
               }
               else
               {
                   cout << "Wrong input entered\nTry again\n\n\n";
                   return main();
               }
               break;
          case 3://for displaying booked ticket details
          system("CLS");
                  cout << "\1.Domestic Fights(1) \n\2.International Flights(2)" << endl;
                  cout << "\nPlease enter your option" << endl;
                  cin >> ch1;
                  if(ch1==1)
                  {cout << "Please enter your PNR no.:" << endl;
                  cin>>n;
                  checkticket(n);}//function call to display domestic ticket details
                  else if(ch1==2)
                  {  cout << "Please enter your PNR no.:" << endl;
                     cin>>n;
                     checkticketi(n);//function call to display domestic ticket details
                  }
                   else
               {
                   cout << "Wrong input entered.\nTry again\n\n\n";
                   return main();
               }
               break;
            case 4:
			system("CLS");
			cout<<"\n\n\t\t\t\tBrought to you by code-projects.org";  
			return 0; 
          default://for wrong input
            cout << "Wrong input entered\nTry again.\n\n\n\n" << endl;
            return main();
      }
    cout<<"\n\n\nDo you wish to continue:(y/Y)" << endl;
    cin >> input;
  }while(input=='Y' || input=='y');//condition for do while loop
return 0;
}


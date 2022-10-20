#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

void mainMenu();

class Management
{
    public:

        Management()
        {
            mainMenu();
        }
};

class Details
{
    public:
    static string name, gender;
    int phoneNo;
    int age;
    string add;
    static int cId;
    char arr[100];

    void information()
    {
        cout << "\nEnter the Customer ID: ";
        cin >> cId;
        cout << "\nEnter Customer Name: ";
        cin >> name;
        cout << "\nEnter Customer Age: ";
        cin >> age;
        cout << "\nEnter Customer address: ";
        cin >> add;
        cout << "\nEnter Customer Gender: ";
        cin >> gender;
        cout << "\nYour details are saved with us \n" << endl;
    }
};

int Details::cId;
string Details::name;
string Details::gender;

class Registration
{
    public:
        static int choice;
        int choice1;
        int back;
        static float charges;

        void flights()
        {
            string flightN [] = {"Dubai", "Canada", "UK", "USA", "Australia", "Europe"};

            for(int a = 0; a < 6; a++)
            {
                cout << (a + 1) << ". Flight to " << flightN[a] << endl;
            }

            cout << "\nWelcome to the Airlines!" << endl;
            cout << "Press the number of the country for which you want to book a flight: ";
            cin >> choice;

            switch(choice)
            {
                case 1:
                    {
                        cout << "____________________________Welcome to Dubai Emirates________________________\n" << endl;
                        

                        cout << "Your comfort is our priority. Enjoy the journey!" << endl;

                        cout << "Following are the flights \n" << endl;

                        cout << "1. DUB - 498" << endl;
                        cout << "\t08-01-2022 8:00 AM 10hrs Rs. 14000" << endl;

                        cout << "2. DUB - 658" << endl;
                        cout << "\t09-01-2022 4:00 AM 12hrs Rs. 10000" << endl;

                        cout << "3. DUB - 508" << endl;
                        cout << "\t11-01-2022 11:00 AM 11hrs Rs. 9000" << endl;


                        cout << "\nSelect the flight you want to book: ";
                        cin >> choice1;

                        if(choice1 == 1)
                        {
                            charges = 14000;
                            cout << "\nYou have successfully booked the flight DUB - 498" << endl;
                            cout << "You can go back to menu and take the ticket" << endl;
                        }
                        else if(choice1 == 2)
                        {
                            charges = 10000;
                            cout << "\nYou have successfully booked the flight DUB - 658" << endl;
                            cout << "You can go back to menu and take the ticket" << endl;
                        }
                        else if(choice1 == 3)
                        {
                            charges = 9000;
                            cout << "\nYou have successfully booked the flight DUB - 508" << endl;
                            cout << "You can go back to menu and take the ticket" << endl;
                        }
                        else
                        {
                            cout << "Invalid input, shifting to the previous menu" << endl;
                            flights();
                        }

                        cout << "Press any key to go back to the Main Menu" << endl;
                        cin>> back;

                        if(back == 1) {
                            mainMenu();
                        }
                        else
                        {
                            mainMenu();
                        }
                    }

                case 2:
                    {
                        cout << "____________________________Welcome to canadian Airlines________________________\n" << endl;
                        

                        cout << "Your comfort is our priority. Enjoy the journey!" << endl;

                        cout << "Following are the flights \n" << endl;

                        cout << "1. CA - 198" << endl;
                        cout << "\t09-01-2022 2:00 PM 20hrs Rs. 34000" << endl;

                        cout << "2. CA - 158" << endl;
                        cout << "\t11-01-2022 6:00 AM 23hrs Rs. 29000" << endl;

                        cout << "3. CA - 208" << endl;
                        cout << "\t14-01-2022 12:00 AM 21hrs Rs. 40000" << endl;


                        cout << "\nSelect the flight you want to book: ";
                        cin >> choice1;

                        if(choice1 == 1)
                        {
                            charges = 34000;
                            cout << "\nYou have successfully booked the flight CA - 198" << endl;
                            cout << "You can go back to menu and take the ticket" << endl;
                        }
                        else if(choice1 == 2)
                        {
                            charges = 29000;
                            cout << "\nYou have successfully booked the flight CA - 158" << endl;
                            cout << "You can go back to menu and take the ticket" << endl;
                        }
                        else if(choice1 == 3)
                        {
                            charges = 40000;
                            cout << "\nYou have successfully booked the flight CA - 208" << endl;
                            cout << "You can go back to menu and take the ticket" << endl;
                        }
                        else
                        {
                            cout << "Invalid input, shifting to the previous menu" << endl;
                            flights();
                        }

                        cout << "Press any key to go back to the Main Menu" << endl;
                        cin>> back;

                        if(back == 1) {
                            mainMenu();
                        }
                        else
                        {
                            mainMenu();
                        }
                    }
                case 3:
                    {
                        cout << "____________________________Welcome to UK Airways________________________\n" << endl;
                        

                        cout << "Your comfort is our priority. Enjoy the journey!" << endl;

                        cout << "Following are the flights \n" << endl;

                        cout << "1. UK - 798" << endl;
                        cout << "\t12-01-2022 10:00 AM 14hrs Rs. 44000" << endl;


                        cout << "\nSelect the flight you want to book: ";
                        cin >> choice1;

                        if(choice1 == 1)
                        {
                            charges = 44000;
                            cout << "\nYou have successfully booked the flight UK - 798" << endl;
                            cout << "You can go back to menu and take the ticket" << endl;
                        }                        
                        else
                        {
                            cout << "Invalid input, shifting to the previous menu" << endl;
                            flights();
                        }

                        cout << "Press any key to go back to the Main Menu" << endl;
                        cin>> back;

                        if(back == 1) {
                            mainMenu();
                        }
                        else
                        {
                            mainMenu();
                        }
                    }
                case 4:
                    {
                        cout << "____________________________Welcome to US Airways________________________\n" << endl;
                        

                        cout << "Your comfort is our priority. Enjoy the journey!" << endl;

                        cout << "Following are the flights \n" << endl;

                        cout << "1. US - 567" << endl;
                        cout << "\t10-01-2022 9:00 AM 22hrs Rs. 37000" << endl;

                        cout << "2. US - 658" << endl;
                        cout << "\t09-01-2022 6:00 AM 22hrs Rs. 39000" << endl;

                        cout << "3. US - 508" << endl;
                        cout << "\t12-01-2022 10:00 AM 21hrs Rs. 42000" << endl;


                        cout << "\nSelect the flight you want to book: ";
                        cin >> choice1;

                        if(choice1 == 1)
                        {
                            charges = 37000;
                            cout << "\nYou have successfully booked the flight US - 567" << endl;
                            cout << "You can go back to menu and take the ticket" << endl;
                        }
                        else if(choice1 == 2)
                        {
                            charges = 39000;
                            cout << "\nYou have successfully booked the flight US - 658" << endl;
                            cout << "You can go back to menu and take the ticket" << endl;
                        }
                        else if(choice1 == 3)
                        {
                            charges = 42000;
                            cout << "\nYou have successfully booked the flight US - 508" << endl;
                            cout << "You can go back to menu and take the ticket" << endl;
                        }
                        else
                        {
                            cout << "Invalid input, shifting to the previous menu" << endl;
                            flights();
                        }

                        cout << "Press any key to go back to the Main Menu" << endl;
                        cin>> back;

                        if(back == 1) {
                            mainMenu();
                        }
                        else
                        {
                            mainMenu();
                        }
                    }
                case 5:
                    {
                        cout << "____________________________Welcome to Australian Airlines________________________\n" << endl;
                        

                        cout << "Your comfort is our priority. Enjoy the journey!" << endl;

                        cout << "Following are the flights \n" << endl;

                        cout << "1. AS - 698" << endl;
                        cout << "\t08-01-2022 9:00 AM 20hrs Rs. 44000" << endl;

                        cout << "2. AS - 158" << endl;
                        cout << "\t19-01-2022 4:00 AM 22hrs Rs. 34000" << endl;

                        cout << "3. AS - 798" << endl;
                        cout << "\t17-01-2022 10:00 AM 21hrs Rs. 42000" << endl;


                        cout << "\nSelect the flight you want to book: ";
                        cin >> choice1;

                        if(choice1 == 1)
                        {
                            charges = 44000;
                            cout << "\nYou have successfully booked the flight AS - 698" << endl;
                            cout << "You can go back to menu and take the ticket" << endl;
                        }
                        else if(choice1 == 2)
                        {
                            charges = 34000;
                            cout << "\nYou have successfully booked the flight AS - 158" << endl;
                            cout << "You can go back to menu and take the ticket" << endl;
                        }
                        else if(choice1 == 3)
                        {
                            charges = 42000;
                            cout << "\nYou have successfully booked the flight AS - 798" << endl;
                            cout << "You can go back to menu and take the ticket" << endl;
                        }
                        else
                        {
                            cout << "Invalid input, shifting to the previous menu" << endl;
                            flights();
                        }

                        cout << "Press any key to go back to the Main Menu" << endl;
                        cin>> back;

                        if(back == 1) {
                            mainMenu();
                        }
                        else
                        {
                            mainMenu();
                        }
                    }
                case 6:
                    {
                        cout << "____________________________Welcome to European Airlines________________________\n" << endl;
                        

                        cout << "Your comfort is our priority. Enjoy the journey!" << endl;

                        cout << "Following are the flights \n" << endl;

                        cout << "1. EU - 898" << endl;
                        cout << "\t02-01-2022 2:00 AM 18hrs Rs. 36000" << endl;

                        cout << "2. EU - 958" << endl;
                        cout << "\t03-01-2022 6:00 AM 18hrs Rs. 37000" << endl;

                        cout << "3. EU - 608" << endl;
                        cout << "\t12-01-2022 10:00 AM 20hrs Rs. 31000" << endl;


                        cout << "\nSelect the flight you want to book: ";
                        cin >> choice1;

                        if(choice1 == 1)
                        {
                            charges = 36000;
                            cout << "\nYou have successfully booked the flight EU - 898" << endl;
                            cout << "You can go back to menu and take the ticket" << endl;
                        }
                        else if(choice1 == 2)
                        {
                            charges = 37000;
                            cout << "\nYou have successfully booked the flight EU - 958" << endl;
                            cout << "You can go back to menu and take the ticket" << endl;
                        }
                        else if(choice1 == 3)
                        {
                            charges = 31000;
                            cout << "\nYou have successfully booked the flight EU - 608" << endl;
                            cout << "You can go back to menu and take the ticket" << endl;
                        }
                        else
                        {
                            cout << "Invalid input, shifting to the previous menu" << endl;
                            flights();
                        }

                        cout << "Press any key to go back to the Main Menu" << endl;
                        cin>> back;

                        if(back == 1) {
                            mainMenu();
                        }
                        else
                        {
                            mainMenu();
                        }
                    }
                default:
                    {
                        cout << "Invalid input, shifting you to the Main Menu!" << endl;
                        mainMenu();
                        break;
                    }
            }   
        }

    };

float Registration::charges;
int Registration::choice;


class Ticket : public Registration, Details
{
    public:
        void Bill()
        {
            string destination = "";
            ofstream outf("records.txt");
            {
                outf << "_____________________XYZ Airlines_____________________" << endl;
                outf << "_____________________Tickets__________________________" << endl;
                outf << "______________________________________________________" << endl;

                outf << "Customer ID: " << Details::cId << endl;
                outf << "Customer Name: " << Details::name << endl;
                outf << "Customer Gender: " << Details::gender << endl;
                outf << "\tDescription" << endl << endl;

                if(Registration::choice == 1)
                {
                    destination = "Dubai";
                }
                else if(Registration::choice == 2)
                {
                    destination = "Canada";
                }
                else if(Registration::choice == 3)
                {
                    destination = "UK";
                }
                else if(Registration::choice == 4)
                {
                    destination = "USA";
                }
                else if(Registration::choice == 5)
                {
                    destination = "Australia";
                }
                else if(Registration::choice == 6)
                {
                    destination = "Europe";
                }

                outf << "Destination\t\t" << destination << endl;
                outf << "Flight cost:\t\t" << Registration::charges << endl; 
            }
            outf.close();
        }

        void dispBill()
        {
            ifstream ifs("records.txt");
            {
                if(!ifs)
                {
                    cout << "File error!" << endl;

                }
                
                while(!ifs.eof())
                {
                    ifs.getline(arr, 100);
                    cout << arr << endl;
                }
                
            }
            ifs.close();
        }
};


void mainMenu()
{
  int lchoice;
  int schoice;
  int back;

  cout << "\t                                 XYX Airlines \n" << endl;
  cout << "\t_____________________Main Menu___________________"<< endl;

  cout << "\t_________________________________________________"<<endl;
  cout << "\t|\t\t\t\t\t\t|"<< endl;

  cout << "\t|\t Press 1 to add the Customer Details   \t|"<< endl;
  cout << "\t|\t Press 2 for Flight Registration       \t|"<< endl;
  cout << "\t|\t Press 3 for Ticket and Charges        \t|"<< endl;
  cout << "\t|\t Press 4 to Exit                       \t|"<< endl;
  cout << "\t|\t\t\t\t\t\t|"<< endl;
  cout << "\t_________________________________________________"<<endl;

  cout << "Enter your choice: ";
  cin >> lchoice;

  Details d;
  Registration r;
  Ticket t;

  switch (lchoice) 
  {
    case 1:
        {
            cout << "_____________________________CUSTOMERS_____________________\n";
            d.information();
            cout << "Press any key to go back to the Main Menu ";
            cin >> back;

            if(back == 1)
            {
                mainMenu();
            }
            else
            {
                mainMenu();
            }
            break;
        }
    case 2:
        {
            cout << "__________________________________BOOK A FLIGHT__________________\n";
            r.flights();
            break;
        }
    case 3:
        {
            cout << "______________________________GET YOUR TTICKET____________________\n";
            t.Bill();

            cout << "Your ticket has been printed. You can collect it \n" << endl;
            cout << "Press 1 to display your ticket ";

            cin >> back;

            if(back == 1)
            {
                t.dispBill();
                cout << "Press any key to go back to the Main Menu ";
                cin >> back;
                if(back == 1)
                {
                    mainMenu();
                }
                else
                {
                    mainMenu();
                }
            }
            else
            {
                mainMenu();
            }
            break;
        }
    case 4:
        {
            cout << "______________________THANK YOU__________________________________" << endl;
            break;
        }
    default:
        cout << "Invalid input! Please choose from the given options \n" << endl;
        mainMenu();
        break;
  }
}   

int main()
{
    Management Mobj;
    return 0;
}

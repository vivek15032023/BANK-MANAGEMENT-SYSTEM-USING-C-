#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<fstream>
#include<windows.h>
using namespace std;

class bank
{   private:
        float balance;
        string id,pass,name,fname,address,phone,pin;
    public:
        void menu();
        void bank_management();
        void atm_management();
        void new_user();
        void already_user();
        void deposit();
        void withdraw();
        void transfer();
        void payment();
        void search();
        void edit();
        void del();
        void show_record();
        void show_payments();
        void user_balance();
        void withdraw_atm();
        void check_detail(); 
};

void introduction()
{
    cout<<"\n\n\n\n\n\t";
    for(int i=1;i<=60;i++)
        cout<<"*";
    cout<<"\n\t ";
    for(int i=1;i<=58;i++)
        cout<<"*";
    cout<<"\n\t  ";
    for(int i=1;i<=56;i++)
        cout<<"*";
    cout<<"\n\n\t\t Bank & ATM Management System\n\n\t\t Project In C++\n\n\t  ";
    for(int i=1;i<=56;i++)
        cout<<"*";
    cout<<"\n\t ";
    for(int i=1;i<=58;i++)
        cout<<"*";
    cout<<"\n\t";
    for(int i=1;i<=60;i++)
        cout<<"*";
    getch();
    system("cls");
    cout<<"\n\n\n\n\n\t\t\t";
    for(int i=1;i<=30;i++)
        cout<<"*";
    cout<<"\n\t\t\t";
    for(int i=1;i<=30;i++)
        cout<<"*";
    cout<<"\n\n\t\t\t       MY TEAM MEMBERS";
    cout<<"\n\n\t\t\t 1. Abhishek";
    cout<<"\n\n\t\t\t 2. Youtube\n\n\t\t\t";
    for(int i=1;i<=30;i++)
        cout<<"*";
    cout<<"\n\t\t\t";
    for(int i=1;i<=30;i++)
        cout<<"*";
    getch();
    system("cls");
    cout<<"\n\n\t";
    for(int i=1;i<=60;i++)
        cout<<"*";
    cout<<"\n\t";
    for(int i=1;i<=60;i++)
        cout<<"*";
    cout<<"\n\n\t\t\tSoftware Developer Introduction";
    cout<<"\n\n\t Name:\t\t\tVivek Kumar Chouhan";
    cout<<"\n\n\t Degree:\t\tBachelor of Computer Application\n";
    cout<<"\n\t Institute:\t\tArka Jain University\n";
    cout<<"\n\t Phone:\t\t\t825262****\n";
    cout<<"\n\t Gmail:\t\t\tvivekrajput***@gmail.com";
    cout<<"\n\n\t";
    for(int i=1;i<=60;i++)
        cout<<"*";
    cout<<"\n\t";
    for(int i=1;i<=60;i++)
        cout<<"*";
    getch();

}

void bank::menu()   // class ke andar wale function ko class ke bahar call krney ke liye scope resolution operator ka use krtey hai [::]
{
    p:              // p is label here 
    system("cls");
    int choice;
    char ch;
    string email,pin,pass;
    cout<<"\n\n\t\t\t Control Panel";
    cout<<"\n\n 1. Bank Management";
    cout<<"\n 2. Atm Management";
    cout<<"\n 3. Exit";
    cout<<"\n\n 1. Enter Your Choice : ";
    cin>>choice;
    switch(choice)
    {
        case 1:
        system("cls");
            cout<<"\n\n\t\t Login Account";
            cout<<"\n\n Email : ";
            cin>>email;
            cout<<"\n\n\t\t Enter Your Secret Pin  : ";
            for(int i=1;i<=4;i++)
            {
                ch = getch();  //getch koi na koi character get karega matlab lega .
                pin +=ch;
                cout<<"*";
            }
            cout<<"\n\n Enter Your Password : ";
            for(int i=1;i<=4;i++)
            {
                ch = getch();  //getch koi na koi character get karega matlab lega .
                pass +=ch;
                cout<<"*";
            }
            if(email == "787027" && pin == "6132" && pass == "5313")
            {
                cout<<"\n\n\n\t\t User Login successfully...........Press Enter";
                bank_management();
            }
            else
            {
                cout<<"\n\n Your Email, Pin & Password is Incorrect !!";
            }
            // bank_management();
            break;
        case 2:
            atm_management();
            break;
        case 3:
            exit(0);
        default:
        cout<<"\n\n Invalid choice .......... Please Choice again !!";
    }
    getch();
    goto p;     // baar baar repeat krta hai koi function ko !!
}

//........................Bank Management Start................... //
void bank::bank_management()
{
    p:
    system("cls");
    int choice;
    cout<<"\n\n\t\t\t Bank Management System";
    cout<<"\n\n 1. New User";
    cout<<"\n 2. Already User";
    cout<<"\n 3. Deposit Option";
    cout<<"\n 4. withdraw Option";
    cout<<"\n 5. Transfer Option";
    cout<<"\n 6. Payment Option";
    cout<<"\n 7. Search User Record";
    cout<<"\n 8. Edit user Record";
    cout<<"\n 9. Delete user Record";
    cout<<"\n 10. Show All Record";
    cout<<"\n 11. Payment All Record";
    cout<<"\n 12. Go Back";
    cout<<"\n\n Enter Your Choice : ";
    cin>>choice;

    switch(choice)
    {
        case 1:
            new_user();
            break;
        case 2:
            already_user();
            break;
        case 3:
            deposit();
            break;
        case 4:
            withdraw();
            break;
        case 5:
            transfer();
            break;
        case 6:
            payment();
            break;
        case 7:
            search();
            break;
        case 8:
            edit();
            break;
        case 9:
            del();
            break;
        case 10:
            show_record();
            break;
        case 11:
            show_payments();
            break;
        case 12:
            menu();
        default:
        cout<<"\n\n Invalid Choice...........Try Again";
    }
    getch();
    goto p;
}
    

//........................ Atm Management Start................... //

void bank::atm_management()
{   
    p:
    system("cls");
    int choice;
    cout<<"\n\n\t\t\t Atm Management System";
    cout<<"\n\n 1. User login & check balance";
    cout<<"\n 2. Withdraw Amount";
    cout<<"\n 3. Account Details";
    cout<<"\n 4. Go Back";
    cout<<"\n\n Enter Your Choice : ";
    cin>>choice;
    switch(choice)
    {
        case 1:
            user_balance();
            break;
        case 2:
            withdraw_atm();
            break;
        case 3:
            check_detail();
            break;
        case 4:
            menu();
        default:
        cout<<"\n\n Invalid Choice...........Try Again";
    }
    getch();
    goto p;
}
void bank::new_user()
{
    p:
    system("cls");
    fstream file;   // Variable for accessing file and check krney ke liye id mera unique hai ya nhi or already khi exist to nhi karta hai wo check krney ke liye !!
    int p;                       // Yaha 
    float b;                            // jo variables liye hai hum
    string n,f,pa,a,ph,i;       // wo check krega mera user already hai ki nhi .
    cout<<"\n\n\t\t Add New User";
    cout<<"\n\n User ID: ";
    cin>>id;
    cout<<"\n\n\t\t Name: ";
    cin>>name;
    cout<<"\n Father Name: ";
    cin>>fname;
    cout<<"\n\n Address: ";
    cin>>address;
    cout<<"\n\n Pin code (4 digit): ";
    cin>>pin;
    cout<<"\n\n\t\t Password (4 digit): ";
    cin>>pass;
    cout<<"\n\n Phone No. : ";
    cin>>phone;
    cout<<"\n\n\t\t Current Balance: ";
    cin>>balance;
    file.open("bank.txt",ios::in);          //file open kr rahey hai yaha hm check krney ke liye
    if(!file)      // check kar raha file hai ki nhi (data hai ki nhi) agr nhi to file ke andr mera data ko save krwa dengey.
    {
        file.open("bank.txt",ios::app|ios::out);
        file<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n";
        file.close();
    }
    else
    {
        file>>i>>n>>f>>a>>p>>pa>>ph>>b;
        while(!file.eof())  // eof means end of file (input lene band kro ye indicate krta hai )
        {
            if (i == id)
            {
                cout<<"\n\n User ID Already exist.....";
                getch();
                goto p;
            }
            file>>i>>n>>f>>a>>p>>pa>>ph>>b;
        }
        file.close();
        file.open("bank.txt",ios::app| ios::out);
        file<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n";
        file.close();
    }
    cout<<"\n\n New user Added Successfully....";
}


void bank::already_user()
{
    system("cls");
    fstream file;       //variable for accessing file
    string t_id;
    int found=0;      //check krega file mila ya nhi     
    cout<<"\n\n\t\t\t Already User Acount";
    file.open("bank.txt",ios::in);
    if(!file)  //check karega koi bhi file exist krta hai ya nhi agar nhi krta to print krega
    {
        cout<<"\n\n\n File Opening Error.....";
    }
    else    //agar file exist krta to wo id lega jiske base mai pin code password dikhana
    {
        cout<<"\n\n User Id: ";
        cin>>t_id;
        file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
        while(!file.eof())    //baar baar data lekr aayega jb tk data khtm nhi ho jata
        {
            if(t_id == id)
            {
                system("cls");
                cout<<"\n\n\t\t\t User Already Exist...";
                cout<<"\n\n User ID: "<<id<<"  "<< "Pin code: "<<pin<<" Password: "<<pass;
                found++;
            }
            file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
        }
        file.close();
        if(found == 0)
        cout<<"\n\n User ID Cann't Found....";
    }

}


void bank::deposit()
{   
    fstream file,file1;          //for accessing file
    string t_id;
    float deposit;
    int found=0;
    system("cls");
    cout<<"\n\n\t\t\t Deposit Amount Option";
    file.open("bank.txt",ios::in);   // data read karega
    if (!file)
    {
        cout<<"\n\n\n File Opening Error..........";
    }
    else
    {
        cout<<"\n\n User Id: ";
        cin>>t_id;
        file1.open("bank1.txt",ios::app|ios::out);
        file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance; //data fetch kiya
        while(!file.eof())    //baar baar data lekr aayega jb tk data khtm nhi ho jata
        {
            if(t_id == id)
            {
                cout<<"\n\n Enter Amount You want to deposit: ";
                cin>>deposit;
                balance +=deposit;
                file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance;
                found++;
                cout<<"\n\n\t\t\t Your Amount "<<deposit<<" Successfully deposit ."<<" Current Balance : "<<balance;
            }
            else
            {
                file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance;
            }
            file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;   //data larha hai
        }
        file.close();
        file1.close();
        remove("bank.txt");
        rename("bank1.txt","bank.txt");
        if(found == 0)
        cout<<"\n\n User ID Cann't Found....";
    }
}


void bank::withdraw()
{   
    fstream file,file2;          //for accessing file // jab bhi data deposit ya withdraw karengey to hume 2 file ki zrwat hogi ek purani ek nayi
    string t_id;
    float withdraw;
    int found=0;
    system("cls");
    cout<<"\n\n\t\t\t Withdraw Amount Option";
    file.open("bank.txt",ios::in);   // data read karega
    if (!file)
    {
        cout<<"\n\n\n File Opening Error...............";
    }
    else
    {
        cout<<"\n\n User Id: ";
        cin>>t_id;
        file2.open("bank1.txt",ios::app|ios::out); //  data write karega
        file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance; 
        while(!file.eof())    //baar baar data lekr aayega jb tk data khtm nhi ho jata
        {
            if(t_id == id)
            {
                cout<<"\n\n Enter Amount You want to Withdraw: ";
                cin>>withdraw;
                if(withdraw <= balance)
                {
                    balance -= withdraw;
                    file2<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n"; //update data file2 m bhejwa rahey h
                    cout<<"\n\n\t\tYour Amount "<<withdraw<<" Successfully withdraw ."<<"Current balance is:"<<balance;
                }
                else
                {
                   file2<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n";
                   cout<<"\n\n\t\t Your Current Balance is: "<<balance<<"Enter Your withdraw Amount Again.....";
                }
                found++; 
            }
            else
            {
                file2<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n";
            }
            file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;   //data larha hai
        }

        file.close();
        file2.close();
        remove("bank.txt");
        rename("bank1.txt","bank.txt");
        if(found == 0)
        cout<<"\n\n User ID Cann't Found....";
    }
}

void bank::transfer()
{
    fstream file,file1;
    string s_id,r_id;
    float t_amount;
    int found=0;
    system("cls");
    cout<<"\n\n\t\t\t Payment Transfer Option";
    file.open("bank.txt",ios::in);   // data read karega
    if (!file)
    {
        cout<<"\n\n\n File Opening Error...............";
    }
    else
    {
        cout<<"\n\nEnter Sender User id for Transaction: ";
        cin>>s_id;
        cout<<"\n\nEnter Receiver User Id for Transaction: ";
        cin>>r_id;
        cout<<"\n\nEnter Transfer Amount: ";
        cin>>t_amount;
        file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance; // database se data larha hai 
        while(!file.eof())
        {
            if(s_id == id && t_amount <= balance)
            found++;
            else if(r_id == id)
            found++;
            file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;  
        }
        file.close();
        if(found == 2)
        {
            file.open("bank.txt",ios::in);
            file1.open("bank1.txt",ios::app|ios::out);
            file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance; 
            while(!file.eof())
            {
                if(s_id ==id )
                {
                    balance -= t_amount;
                    file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n";
                }
                else if(r_id == id)
                {
                    balance += t_amount;
                    file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n";
                }
                else
                {
                    file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n";
                }
                file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance; 
            }
            file.close();
            file1.close();
            remove("bank.txt");
            rename("bank1.txt","bank.txt");
            cout<<"\n\n\n\t\t\t Transaction Successfull"; 

        }
        else
        {
            cout<<"\n\n\t\t Both Transaction User ID or Transaction amount Doesn't Exist..............";
        }
    }
}

void bank::payment()
{
    fstream file,file1;
    string t_id,bill_name;
    float bill_amount;
    int found=0;
    SYSTEMTIME x;
    system("cls");
    cout<<"\n\n\t\t\t Bills Payments Option";
    file.open("bank.txt",ios::in);
    if(!file)
    {
        cout<<"\n\n File Opening Error...........";
    }
    else
    {
       cout<<"\n\nEnter user Id: ";
       cin>>t_id; 
       cout<<"\n\n Bill Name: ";
       cin>>bill_name;
       cout<<"\n\n Bill Amount: ";
       cin>>bill_amount;
       file1.open("bank1.txt",ios::app|ios::out);
       file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
       while(!file.eof())
       {
            if(t_id == id && bill_amount <= balance)
            {
                balance -= bill_amount;
                file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n";
                found++;
            }
            else
            {
                file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n";
            }
            file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
       }
       file.close();
       file1.close();
       remove("bank.txt");
       rename("bank1.txt","bank.txt");
       if(found == 1)
       {
            GetSystemTime(&x);
            file.open("bill.txt",ios::app|ios::out);
            file<<t_id<<" "<<bill_name<<" "<<bill_amount<<" "<<x.wDay<<"/"<<x.wMonth<<"/"<<x.wYear<<"\n";
            file.close();
            cout<<"\n\n\t\t\t "<<bill_name<<"  Bill Payement Successfull.......";
       }
       else
       {
            cout<<"\n\n User ID or amount is Invalid............";
       }
    }
}

void bank::search()
{
    system("cls");
    fstream file;
    string t_id;
    int found=0;
    cout<<"\n\n\t\t\t Search User Record";
    file.open("bank.txt",ios::in);
    if(!file)
    {
        cout<<"\n\n File Opening Error...........";
    }
    else
    {
        cout<<"\n\n Enter USer ID to search: ";
        cin>>t_id;
        file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
        while(!file.eof())
        {
            if(t_id == id)
            {
                system("cls");
                cout<<"\n\n\t\t\t Search User Record";
                cout<<"\n\n\n\n User ID: "<<id<<"\t\tName: "<<name<<" \t\tFather's name: "<<fname;
                cout<<"\n\n\n\n Address: "<<address<<"\t\tPin: "<<pin<<"\t\tPassword: "<<pass;
                cout<<"\n\n\n\n Phone no: "<<phone<<"\t\tCurrent Balance: "<<balance;
                found++;
            }
            file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
        }
        file.close();
        if(found == 0)
        cout<<"User Cann't Found............";
    
    }
}


void bank::edit()
{
    fstream file,file1;
    string t_id;
    int found=0;
    string n,fa,a,ph,p,pi;
    system("cls");
    cout<<"\n\n\t\t\t Edit Useer Record";
    file.open("bank.txt",ios::in);            //in read modde ke liye and out write mode ke liye
    if(!file)
    {
        cout<<"\n\n File Opening error.........";
    }
    else
    {
        cout<<"\n\n Enter User ID: ";
        cin>>t_id;
        file1.open("bank1.txt",ios::app|ios::out);
        file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
        while(!file.eof())
        {
            if(t_id == id)
            {
                cout<<"\n\n Name: ";
                cin>>n;
                cout<<"\n\n Father's Name: ";
                cin>>fa;
                cout<<"\n\n Address: ";
                cin>>a;
                cout<<"\n\n Pin code (4 digit): ";
                cin>>pi;
                cout<<"\n\n\t\t Password (5 digit): ";
                cin>>p;
                cout<<"\n\n Phone No. : ";
                cin>>ph;
                file1<<" "<<id<<" "<<n<<" "<<fa<<" "<<a<<" "<<pi<<" "<<p<<" "<<ph<<" "<<balance<<"\n";
                cout<<"\n\n\t\t\t\t Your Record Successfully Updated.....";
                found++;
            }
            else
            {
                file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n";
            }
            file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
        }
        file.close();
        file1.close();
        remove("bank.txt");
        rename("bank1.txt","bank.txt");
        if(found == 0)
        cout<<"\n\n\t\t\tUser Cann't Found............";
    }
}

void bank::del()
{
    fstream file,file1;
    string t_id;
    int found=0;
    system("cls");
    cout<<"\n\n\t\t\t Edit Useer Record";
    file.open("bank.txt",ios::in);            //in read modde ke liye and out write mode ke liye
    if(!file)
    {
        cout<<"\n\n File Opening error.........";
    }
    else
    {
        cout<<"\n\n Enter User ID: ";
        cin>>t_id;
        file1.open("bank1.txt",ios::app|ios::out);
        file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
        while(!file.eof())
        {
            if(t_id == id)
            {
                cout<<"\n\n\t\t\t\t Your Record Successfully Deleted.....";
                found++;
            }
            else
            {
                file1<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n";
            }
            file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
        }
        file.close();
        file1.close();
        remove("bank.txt");
        rename("bank1.txt","bank.txt");
        if(found == 0)
        cout<<"\n\n\t\t\tUser Cann't Found............";
    }
}

void bank::show_record()
{
    fstream file;
    system("cls");
    int found=0;
    cout<<"\n\n\t\t\t Show All User's Records";
    file.open("bank.txt",ios::in);
    if(!file)
    {
        cout<<"\n\n File Opening Error...........";
    }
    else
    {
        
        file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
        while(!file.eof())
        {
            cout<<"\n\n\n User ID: "<<id;
            cout<<"\n Name: "<<name;
            cout<<"\n Father Name: "<<fname;
            cout<<"\n Address: "<<address;
            cout<<"\n Pin: "<<pin;
            cout<<"\n Password: "<<pass;
            cout<<"\n Phone no: "<<phone;
            cout<<"\n Current Balance: "<<balance;
            cout<<"\n\n==========================================";
            file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;
            found++;
        }
        file.close();
        if(found == 0)
        cout<<"\n\n\t\t Database Is Empty............";
    }
    
}
void bank::show_payments()
{
    fstream file;
    system("cls");
    int found=0;
    string c_date;
    float bill_amount;
    cout<<"\n\n\t\t\t Show All Bills Records";
    file.open("bill.txt",ios::in);
    if(!file)
    {
        cout<<"\n\n File Opening Error...........";
    }
    else
    {
         file>>id>>name>>bill_amount>>c_date;
        while(!file.eof())
        {
            cout<<"\n\n\n User ID: "<<id;
            cout<<"\n Bill Name: "<<name;
            cout<<"\n Bill Amount: "<<bill_amount;
            cout<<"\n Date: "<<c_date;
            cout<<"\n\n==========================================";
            file>>id>>name>>bill_amount>>c_date;
            found++;
        }
        file.close();
        if(found == 0)
        cout<<"\n\n\t\t Database Is Empty............";
    }

}
void bank::user_balance()
{
    fstream file;
    string t_id,t_pin,t_pass;
    char ch;
    int found=0;
    system("cls");
    cout<<"\n\n\t\t User Login & Check Balace";
    file.open("bank.txt",ios::in);
    if(!file)
    {
        cout<<"\n\n File Opening Error.....";
    }
    else
    {
        cout<<"\n\n Enter Your User Id: ";
        cin>>t_id;
        cout<<"\n\n\t\t Enter Pin code: ";
        for(int i=1;i<=4;i++)
        {
            ch=getch();
            t_pin +=ch;
            cout<<"*";
        }
        cout<<"\n\n  Enter Your Password: ";
        for(int i=1;i<=4;i++)
        {
            ch=getch();
            t_pass +=ch;
            cout<<"*";
        }
        file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;  //file mai se data laata hai
        while(!file.eof())
        {
            if(t_id == id && t_pin == pin && t_pass == pass)
            {
                cout<<"\n\n\t\t\t Your Current Balance is: "<<balance;
                found++;
            }
            file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;  //file mai se data laata hai
        }
        file.close();
        if(found==0)
        cout<<"\n\n\t\t\t User ID, Pin or Password is Incorrect......";
    }
}
void bank::withdraw_atm()
{
    fstream file,file2;          //for accessing file // jab bhi data deposit ya withdraw karengey to hume 2 file ki zrwat hogi ek purani ek nayi
    string t_id,t_pin,t_pass;
    float withdraw;
    int found=0;
    char ch;
    system("cls");
    cout<<"\n\n\t\t\t Withdraw Amount Option";
    file.open("bank.txt",ios::in);   // data read karega
    if (!file)
    {
        cout<<"\n\n\n File Opening Error...............";
    }
    else
    {
        cout<<"\n\n User Id: ";
        cin>>t_id;
        cout<<"\n\t\t Enter Your Pin: ";
        for(int i=1;i<=4;i++)
        {
            ch=getch();
            t_pin +=ch;
            cout<<"*";
        }
        cout<<"\n\nEnter Your password: ";
        for(int i=1;i<=4;i++)
        {
            ch=getch();
            t_pass +=ch;
            cout<<"*";
        }
        file2.open("bank1.txt",ios::app|ios::out); //  data write karega
        file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance; 
        while(!file.eof())    //baar baar data lekr aayega jb tk data khtm nhi ho jata
        {
            if(t_id == id && t_pin==pin && t_pass==pass)
            {
                cout<<"\n\n Enter Amount You want to Withdraw: ";
                cin>>withdraw;
                if(withdraw <= balance)
                {
                    balance -= withdraw;
                    file2<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n"; //update data file2 m bhejwa rahey h
                    cout<<"\n\n\t\tYour Amount "<<withdraw<<" Successfully withdraw ."<<"\n\n\n\t\tCurrent balance is: "<<balance;
                    
                }   
                else
                {
                   file2<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n";
                   cout<<"\n\n\t\t Your Current Balance is: "<<balance<<"Enter Your withdraw Amount Again.....";
                }
                found++; 
            }
            else
            {
                file2<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phone<<" "<<balance<<"\n";
            }
            file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;   //data larha hai
        }

        file.close();
        file2.close();
        remove("bank.txt");
        rename("bank1.txt","bank.txt");
        if(found == 0)
        cout<<"\n\n User ID Cann't Found....";
    } 
}
void bank::check_detail()
{
    system("cls");
    fstream file;          //for accessing file // jab bhi data deposit ya withdraw karengey to hume 2 file ki zrwat hogi ek purani ek nayi
    string t_id,t_pin,t_pass;
    int found=0;
    char ch;
    system("cls");
    cout<<"\n\n\t\t\t Check Details Option";
    file.open("bank.txt",ios::in);   // data read karega
    if (!file)
    {
        cout<<"\n\n\n File Opening Error...............";
    }
    else
    {
        cout<<"\n\n User Id: ";
        cin>>t_id;
        cout<<"\n\t\t Enter Your Pin: ";
        for(int i=1;i<=4;i++)
        {
            ch=getch();
            t_pin +=ch;
            cout<<"*";
        }
        cout<<"\n\nEnter Your password: ";
        for(int i=1;i<=4;i++)
        {
            ch=getch();
            t_pass +=ch;
            cout<<"*";
        }
        file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance; 
        while(!file.eof())    //baar baar data lekr aayega jb tk data khtm nhi ho jata
        {
            if(t_id == id && t_pin==pin && t_pass==pass)
            {
                cout<<"\n\nAccount Holder Details";
                cout<<"\n========================================";
                cout<<"\n\n User ID: "<<id;
                cout<<"\n Name: "<<name;
                cout<<"\n Father Name: "<<fname;
                cout<<"\n Address: "<<address;
                cout<<"\n Pin: "<<pin;
                cout<<"\n Password: "<<pass;
                cout<<"\n Phone no: "<<phone;
                cout<<"\n Current Balance: "<<balance;
                cout<<"\n\n========================================";
                found++; 
            }
            file>>id>>name>>fname>>address>>pin>>pass>>phone>>balance;   //data larha hai
        }

        file.close();
        if(found == 0)
        cout<<"\n\n\t\t\t User ID Cann't Found....";
    } 
}

main()
{
    bank obj;
    introduction();
    obj.menu();
    
}
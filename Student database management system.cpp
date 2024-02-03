#include<iostream>
#include<conio.h>
#include<vector>
#include<string.h>
#include<fstream>

void add();
void auth(int n);
void update();
void del();
void view();
void prnt();
void help();
void admin();

using namespace std;

class students{
public:
    string name;
    string branch;
    int sem;
    int roll_no;
    long long int enrol_no;
    long long int mobile_no;
    string address;
};

std::vector<students> info;
string id="ADMIN";
string pass="PASSWORD";

int main(){
    int n1;
    cout<<"Welcome to Main Menu"<<endl<<endl;
    cout<<"Press any key mentioned below to continue and 0 to access Admin Panel"<<endl;
    cout<<"Add Students data - 1"<<endl;
    cout<<"Update Student's data - 2"<<endl;
    cout<<"Delete any Student's data - 3"<<endl;
    cout<<"View all Students data - 4"<<endl;
    cout<<"Print all Students data - 5"<<endl;
    cout<<"Help - 6"<<endl;
    cin>>n1;
    cin.ignore();
    if(n1==1)
    add();
    else if(n1==3)
    auth(0);
    else if(n1==2)
    auth(1);
    else if(n1==4)
    auth(2);
    else if(n1==5)
    auth(3);
    else if(n1==6)
    help();
    else if(n1==0)
    admin();
    else{
        cout<<"Invalid Input"<<endl<<endl;
        main();
    }
    return 0;
}

void add(){
    students stu;
    cout<<"Welcome to data uploading window"<<endl<<endl;
    cout<<"Enter the Students details"<<endl;
    cout<<"Enter enrollment no. : "<<ends;
    cin>>stu.enrol_no;
    cin.ignore();
    cout<<"Enter Name : "<<ends;
    std::getline(std::cin,stu.name);
    cout<<"Enter semester : "<<ends;
    cin>>stu.sem;
    cin.ignore();
    cout<<"Enter branch : "<<ends;
    std::getline(std::cin,stu.branch);
    cout<<"Enter roll no. : "<<ends;
    cin>>stu.roll_no;
    cout<<"Enter mobile no. : "<<ends;
    cin>>stu.mobile_no;
    cin.ignore();
    cout<<"Enter permanent resident address : "<<ends;
    std::getline(std::cin,stu.address);
    info.push_back(stu);
    cout<<endl;
    cout<<"Press Space to add more or any other key to exit"<<endl<<endl;
    char ch = getch();
    if((int)ch==32)
    add();
    else
    main();
}

void auth(int n){
    string id,pass;
    cout<<"Welcome to Authentication window"<<endl<<endl;
    cout<<"Enter the Admin User ID"<<endl;
    std::getline(std::cin,id);
    cout<<"Enter the Admin Password"<<endl;
    std::getline(std::cin,pass);
    if( id == ::id && pass == ::pass && n == 0 )
    del();
    else if( id == ::id && pass == ::pass && n == 1 )
    update();
    else if( id == ::id && pass == ::pass && n == 2 )
    view();
    else if( id == ::id && pass == ::pass && n == 3 )
    prnt();
    else{
    cout<<"Wrong Credentials"<<endl;
    cout<<"Press any key to CONTINUE"<<endl<<endl;
    char ch = getch();
    auth(n);
    }
}

void update(){
    long long int n1;int i=0;
    students stu;
    cout<<"Welcome to the updation window"<<endl<<endl;
    cout<<"Enter the Enrollment no. that you want to update"<<endl;
    cin>>n1;
    for( i = 0; i < info.size(); i++)
    {
        if(info[i].enrol_no==n1)
        {
            break;
        }
    }
    cout<<"Enter the Students details"<<endl;
    cout<<"Enter enrollment no. : "<<ends;
    cin>>stu.enrol_no;
    cin.ignore();
    cout<<"Enter Name : "<<ends;
    std::getline(std::cin,stu.name);
    cout<<"Enter semester : "<<ends;
    cin>>stu.sem;
    cin.ignore();
    cout<<"Enter branch : "<<ends;
    std::getline(std::cin,stu.branch);
    cout<<"Enter roll no. : "<<ends;
    cin>>stu.roll_no;
    cout<<"Enter mobile no. : "<<ends;
    cin>>stu.mobile_no;
    cin.ignore();
    cout<<"Enter permanent resident address : "<<ends;
    std::getline(std::cin,stu.address);
    cout<<endl;
    info[i]=stu;
    cout<<"The data has been updated successfully"<<endl<<endl;
    cout<<"Press any key to CONTINUE"<<endl<<endl;
    char ch = getch();
    main();
}

void del(){
    int i=0;
    long long int n1;
    cout<<"Welcome to the deletion window"<<endl<<endl;
    cout<<"Enter the Enrollment no. that you want to delete"<<endl;
    cin>>n1;
    for(int i = 0; i < info.size(); i++)
    {
        if(info[i].enrol_no==n1)
        {
            break;
        }
    }
    info.erase(std::next(info.begin(),i+1));
    cout<<"The data has been deleted successfully"<<endl<<endl;
    cout<<"Press any key to CONTINUE"<<endl<<endl;
    char ch = getch();
    main();
}

void view(){
    cout<<"Welcome to the view window"<<endl<<endl;
    cout<<"Students data records are displayed below"<<endl<<endl;
    for(int i = 0; i < info.size(); i++){
        cout<<"Student : "<<i+1<<endl;
        cout<<"Enrollment no. : "<<info[i].enrol_no<<endl;
        cout<<"Name : "<<info[i].name<<endl;
        cout<<"Semester : "<<info[i].sem<<endl;
        cout<<"Branch : "<<info[i].branch<<endl;
        cout<<"Roll no. : "<<info[i].roll_no<<endl;
        cout<<"Mobile no. : "<<info[i].mobile_no<<endl;
        cout<<"Permanent resident address : "<<info[i].address<<endl<<endl;
    }
    cout<<"Press any key to CONTINUE"<<endl<<endl;
    char ch = getch();
    main();
}

void prnt(){
    ofstream MyFile("Students_data.txt");
    MyFile<<"Students data records are displayed below"<<endl<<endl;
    for(int i = 0; i < info.size(); i++){
        MyFile<<"Student : "<<i+1<<endl;
        MyFile<<"Enrollment no. : "<<info[i].enrol_no<<endl;
        MyFile<<"Name : "<<info[i].name<<endl;
        MyFile<<"Semester : "<<info[i].sem<<endl;
        MyFile<<"Branch : "<<info[i].branch<<endl;
        MyFile<<"Roll no. : "<<info[i].roll_no<<endl;
        MyFile<<"Mobile no. : "<<info[i].mobile_no<<endl;
        MyFile<<"Permanent resident address : "<<info[i].address<<endl<<endl;
    }
    cout<<"A file named Students_data.txt has been created"<<endl<<endl;
    cout<<"Press any key to CONTINUE"<<endl<<endl;
    char ch = getch();
    main();
}

void help(){
    cout<<"Welcome to the help window"<<endl<<endl;
    cout<<"This is a Student Database Management application program. Main menu has list of all options. You can add the student's data in the add window. Any incorrect data can be changed from update window. Data can be viewed, Deleted or Saved as text file from the view, delete and Print window respectively. But View, delete and print features are only available for Administrator. The Administrator can change thier login id and password by going to admin panel. Initially the login id is ADMIN and password is PASSWORD "<<endl<<endl;
    cout<<"Press Enter to continue to Main Menu"<<endl<<endl;
    char ch = getch();
    main();
}

void admin(){
    int n1;
    char ch;
    string s1,s2;
    cout<<"Welcome to the Admin Control Panel"<<endl<<endl;
    cout<<"press 0 to Reset ID and Password and press 1 for returning to main menu"<<endl;
    cin>>n1;
    cin.ignore();
    if(n1==0){
        cout<<"Enter your previous ID"<<endl;
        
        std::getline(std::cin,s1);
        cout<<"Enter your previous Password"<<endl;
        
        std::getline(std::cin,s2);
        if(s1==id && s2 == pass){
            cout<<"Enter new ID"<<endl;
            
            std::getline(std::cin,id);
            cout<<"Enter new Password"<<endl;
            
            std::getline(std::cin,pass);
            cout<<"Your ID and Password has been successfully updated"<<endl<<endl;
            cout<<"Press any key to CONTINUE"<<endl<<endl;
            ch = getch();
            main();
        }
        else{
            cout<<"Invalid Credentials"<<endl<<endl;
            cout<<"Press any key to CONTINUE"<<endl<<endl;
            ch = getch();
            admin();
        }
    }
    else if(n1==1){
        cout<<"Press any key to CONTINUE"<<endl<<endl;
        ch = getch();
        main();
    }
    else{
        cout<<"Invalid Input"<<endl<<endl;
        cout<<"Press any key to CONTINUE"<<endl<<endl;
        ch = getch();
        admin();
    }
}
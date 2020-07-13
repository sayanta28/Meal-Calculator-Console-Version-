#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
class person
{
public:
    char name[1000];
    int id;
    char roomno[50];
    int hostelno;
};
class menu
{
public:
    double bill=0;
    void chicken(int no)
    {
        int chicken=30;
        bill=bill+(no*chicken);
    }
    void fish(int no)
    {
        int fish=20;
        bill=bill+(no*fish);
    }

    void egg(int no)
    {
        int egg=10;
        bill=bill+(no*egg);
    }

    void daal(int no)
    {
        int daal=10;
        bill=bill+(no*daal);
    }
    void vegetable(int no)
    {
        int vegetable=20;
        bill=bill+(no*vegetable);
    }
    void rice(int no)
    {
        int rice=10;
        bill=bill+(no*rice);
    }
};

class calen
{
public:
    int weakday(int a,int b,int c)
    {
        int count,i,j,k;
        if(c>=2000)
        {
            count=5;
            for(i=2000; i<=c; i++)
            {
                if(i==c)
                {
                    for(j=1; j<=b; j++)
                    {
                        if(j==b)
                        {
                            for(k=1; k<=a; k++)
                            {
                                count++;
                                if(count%7==0)
                                {
                                    count=0;
                                }
                            }
                        }

                        else if(j==1 || j==3|| j==5 || j==7 || j==8 || j==10 || j==12)
                        {
                            for(k=1; k<=31; k++)
                            {
                                count++;
                                if(count%7==0)
                                {
                                    count=0;
                                }
                            }

                        }
                        else if(j==4 || j==6|| j==9 || j==11)
                        {
                            for(k=1; k<=30; k++)
                            {
                                count++;
                                if(count%7==0)
                                {
                                    count=0;
                                }
                            }
                        }
                        else if(j==2)
                        {
                            if(i%4 == 0)
                            {
                                if( i%100 == 0)
                                {
                                    // year is divisible by 400, hence the year is a leap year
                                    if ( i%400 == 0)
                                    {
                                        // printf("%d is a leap year.", year);
                                        for(k=1; k<=29; k++)
                                        {
                                            count++;
                                            if(count%7==0)
                                            {
                                                count=0;
                                            }
                                        }
                                    }
                                    else
                                    {
                                        for(k=1; k<=28; k++)
                                        {
                                            count++;
                                            if(count%7==0)
                                            {
                                                count=0;
                                            }
                                        }
                                    }
                                }
                                else
                                    for(k=1; k<=29; k++)
                                    {
                                        count++;
                                        if(count%7==0)
                                        {
                                            count=0;
                                        }
                                    }
                            }
                            else
                            {
                                // printf("%d is not a leap year.", year);
                                for(k=1; k<=28; k++)
                                {
                                    count++;
                                    if(count%7==0)
                                    {
                                        count=0;
                                    }
                                }
                            }
                        }
                        else if(j>12)
                        {
                            printf("Invalid Date\n");
                            exit(1);
                        }
                    }
                }
                else
                {
                    for(j=1; j<=12; j++)
                    {
                        if(j==1 || j==3|| j==5 || j==7 || j==8 || j==10 || j==12)
                        {
                            for(k=1; k<=31; k++)
                            {
                                count++;
                                if(count%7==0)
                                {
                                    count=0;
                                }
                            }
                        }
                        else if(j==4 || j==6|| j==9 || j==11)
                        {
                            for(k=1; k<=30; k++)
                            {
                                count++;
                                if(count%7==0)
                                {
                                    count=0;
                                }
                            }
                        }
                        else if(j==2)
                        {
                            if(i%4 == 0)
                            {
                                if( i%100 == 0)
                                {
                                    // year is divisible by 400, hence the year is a leap year
                                    if ( i%400 == 0)
                                    {
                                        //   printf("%d is a leap year.", year);
                                        for(k=1; k<=29; k++)
                                        {
                                            count++;
                                            if(count%7==0)
                                            {
                                                count=0;

                                            }
                                        }
                                    }
                                    else
                                    {
                                        for(k=1; k<=28; k++)
                                        {
                                            count++;
                                            if(count%7==0)
                                            {
                                                count=0;
                                            }
                                        }
                                    }
                                }
                                else
                                    for(k=1; k<=29; k++)
                                    {
                                        count++;
                                        if(count%7==0)
                                        {
                                            count=0;
                                        }
                                    }
                            }
                            else
                            {
                                // printf("%d is not a leap year.", year);
                                for(k=1; k<=28; k++)
                                {
                                    count++;
                                    if(count%7==0)
                                    {
                                        count=0;
                                    }
                                }
                            }
                        }
                        else if(j>12)
                        {
                            printf("Invalid Date\n");
                            exit(1);
                        }

                    }
                }
            }
        }
        return count;
    }
};

class total : public menu, public person,public calen
{
public:
    double tbill()
    {
        return(bill);
    }
};

int main()
{
    total obj1;
    int date,month,year,count;
    char d,e;
    cout<<"Enter Your Name";
    cin>>obj1.name;
    cout<<"Enter your id";
    cin>>obj1.id;
    cout<<"Enter your hostel no";
    cin>>obj1.hostelno;
    cout<<"Enter room no";
    cin>>obj1.roomno;
    cout<<"Todays date";
    cin>>date>>d>>month>>e>>year;
    count=obj1.weakday(date,month,year);

    cout<<obj1.name<<endl<<obj1.id<<endl<<obj1.hostelno<<endl<<obj1.roomno<<endl;

    if(count==0)
    {
        printf("Sunday\n");
    }
    else if(count==1)
    {
        printf("Monday\n");
    }
    else if(count==2)
    {
        printf("Tuesday\n");
    }
    else if(count==3)
    {
        printf("Wednesday\n");
    }
    else if(count==4)
    {
        printf("Thrusday\n");
    }
    else if(count==5)
    {
        printf("Friday\n");
    }
    else if(count==6)
    {
        printf("Saturday\n");
    }

    int choice=0,no=0;


    while(choice!=6)
    {
        switch(count)
        {
        case 0:
        {
            int day=0;
            cout<<"Enter 01 for breakfast"<<endl<<"Enter 02 for lunch"<<endl<<"Enter 03 for dinner"<<endl;
            cin>>day;
            switch(day)
            {
            case 01:
            {

                while(choice!=6)
                {
                    cout<<"Press 01 for rice"<<endl;
                    cout<<"Press 02 for chicken"<<endl;
                    cout<<"Press 03 for daal"<<endl;
                    cout<<"Press 04 for vegetable"<<endl;
                    cout<<"Press 05 for See total bill"<<endl;
                    cout<<"Press 06 for exit menu bar"<<endl;
                    cout<<"Enter your choice"<<endl;
                    cin>>choice;
                    switch(choice)
                    {
                    case 02:
                    {
                        cout<<"Number of this item:"<<endl;
                        cin>>no;
                        obj1.chicken(no);
                        break;
                    }
                    case 01:
                    {
                        cout<<"Number of this item:"<<endl;
                        cin>>no;
                        obj1.rice(no);
                        break;
                    }
                    case 03:
                    {
                        cout<<"Number of this item:"<<endl;
                        cin>>no;
                        obj1.daal(no);
                        break;
                    }
                    case 04:
                    {
                        cout<<"Number of this item:"<<endl;
                        cin>>no;
                        obj1.vegetable(no);
                        break;
                    }
                    case 05:
                    {
                        cout<<obj1.tbill();
                        break;
                    }
                    case 06:
                    {
                        // exit(1);
                        break;
                    }
                    default:
                    {
                        cout<<"try again";
                        break;
                    }
                    }

                }

                default:
                {
                    cout<<"Try Again"<<endl;
                }
                break;
            }
            break;
            }
        }
            case 1:
            {

                while(choice!=6)
                {
                    cout<<"Press 01 for rice"<<endl;
                    cout<<"Press 02 for chicken"<<endl;
                    cout<<"Press 03 for daal"<<endl;
                    cout<<"Press 04 for vegetable"<<endl;
                    cout<<"Press 05 for See total bill"<<endl;
                    cout<<"Press 06 for exit menu bar"<<endl;
                    cout<<"Enter your choice"<<endl;
                    cin>>choice;
                    switch(choice)
                    {
                    case 02:
                    {
                        cout<<"Number of this item:"<<endl;
                        cin>>no;
                        obj1.chicken(no);
                        break;
                    }
                    case 01:
                    {
                        cout<<"Number of this item:"<<endl;
                        cin>>no;
                        obj1.rice(no);
                        break;
                    }
                    case 03:
                    {
                        cout<<"Number of this item:"<<endl;
                        cin>>no;
                        obj1.daal(no);
                        break;
                    }
                    case 04:
                    {
                        cout<<"Number of this item:"<<endl;
                        cin>>no;
                        obj1.vegetable(no);
                        break;
                    }
                    case 05:
                    {
                        cout<<obj1.tbill();
                        break;
                    }
                    case 06:
                    {
                        // exit(1);
                        break;
                    }
                    default:
                    {
                        cout<<"try again";
                        break;
                    }
                    }

                }
                break;
            }

            case 2:
            {

                while(choice!=6)
                {
                    cout<<"Press 01 for rice"<<endl;
                    cout<<"Press 02 for chicken"<<endl;
                    cout<<"Press 03 for daal"<<endl;
                    cout<<"Press 04 for vegetable"<<endl;
                    cout<<"Press 05 for See total bill"<<endl;
                    cout<<"Press 06 for exit menu bar"<<endl;
                    cout<<"Enter your choice"<<endl;
                    cin>>choice;
                    switch(choice)
                    {
                    case 02:
                    {
                        cout<<"Number of this item:"<<endl;
                        cin>>no;
                        obj1.chicken(no);
                        break;
                    }
                    case 01:
                    {
                        cout<<"Number of this item:"<<endl;
                        cin>>no;
                        obj1.rice(no);
                        break;
                    }
                    case 03:
                    {
                        cout<<"Number of this item:"<<endl;
                        cin>>no;
                        obj1.daal(no);
                        break;
                    }
                    case 04:
                    {
                        cout<<"Number of this item:"<<endl;
                        cin>>no;
                        obj1.vegetable(no);
                        break;
                    }
                    case 05:
                    {
                        cout<<obj1.tbill();
                        break;
                    }
                    case 06:
                    {
                        // exit(1);
                        break;
                    }
                    default:
                    {
                        cout<<"try again";
                        break;
                    }
                    }

                }
                break;
            }

            case 3:
            {

                while(choice!=6)
                {
                    cout<<"Press 01 for rice"<<endl;
                    cout<<"Press 02 for chicken"<<endl;
                    cout<<"Press 03 for daal"<<endl;
                    cout<<"Press 04 for vegetable"<<endl;
                    cout<<"Press 05 for See total bill"<<endl;
                    cout<<"Press 06 for exit menu bar"<<endl;
                    cout<<"Enter your choice"<<endl;
                    cin>>choice;
                    switch(choice)
                    {
                    case 02:
                    {
                        cout<<"Number of this item:"<<endl;
                        cin>>no;
                        obj1.chicken(no);
                        break;
                    }
                    case 01:
                    {
                        cout<<"Number of this item:"<<endl;
                        cin>>no;
                        obj1.rice(no);
                        break;
                    }
                    case 03:
                    {
                        cout<<"Number of this item:"<<endl;
                        cin>>no;
                        obj1.daal(no);
                        break;
                    }
                    case 04:
                    {
                        cout<<"Number of this item:"<<endl;
                        cin>>no;
                        obj1.vegetable(no);
                        break;
                    }
                    case 05:
                    {
                        cout<<obj1.tbill();
                        break;
                    }
                    case 06:
                    {
                        // exit(1);
                        break;
                    }
                    default:
                    {
                        cout<<"try again";
                        break;
                    }
                    }

                }
                break;
            }
            case 4:
            {

                while(choice!=6)
                {
                    cout<<"Press 01 for rice"<<endl;
                    cout<<"Press 02 for chicken"<<endl;
                    cout<<"Press 03 for daal"<<endl;
                    cout<<"Press 04 for vegetable"<<endl;
                    cout<<"Press 05 for See total bill"<<endl;
                    cout<<"Press 06 for exit menu bar"<<endl;
                    cout<<"Enter your choice"<<endl;
                    cin>>choice;
                    switch(choice)
                    {
                    case 02:
                    {
                        cout<<"Number of this item:"<<endl;
                        cin>>no;
                        obj1.chicken(no);
                        break;
                    }
                    case 01:
                    {
                        cout<<"Number of this item:"<<endl;
                        cin>>no;
                        obj1.rice(no);
                        break;
                    }
                    case 03:
                    {
                        cout<<"Number of this item:"<<endl;
                        cin>>no;
                        obj1.daal(no);
                        break;
                    }
                    case 04:
                    {
                        cout<<"Number of this item:"<<endl;
                        cin>>no;
                        obj1.vegetable(no);
                        break;
                    }
                    case 05:
                    {
                        cout<<obj1.tbill();
                        break;
                    }
                    case 06:
                    {
                        // exit(1);
                        break;
                    }
                    default:
                    {
                        cout<<"try again";
                        break;
                    }
                    }

                }
                break;
            }
            case 5:
            {

                while(choice!=6)
                {
                    cout<<"Press 01 for rice"<<endl;
                    cout<<"Press 02 for chicken"<<endl;
                    cout<<"Press 03 for daal"<<endl;
                    cout<<"Press 04 for vegetable"<<endl;
                    cout<<"Press 05 for See total bill"<<endl;
                    cout<<"Press 06 for exit menu bar"<<endl;
                    cout<<"Enter your choice"<<endl;
                    cin>>choice;
                    switch(choice)
                    {
                    case 02:
                    {
                        cout<<"Number of this item:"<<endl;
                        cin>>no;
                        obj1.chicken(no);
                        break;
                    }
                    case 01:
                    {
                        cout<<"Number of this item:"<<endl;
                        cin>>no;
                        obj1.rice(no);
                        break;
                    }
                    case 03:
                    {
                        cout<<"Number of this item:"<<endl;
                        cin>>no;
                        obj1.daal(no);
                        break;
                    }
                    case 04:
                    {
                        cout<<"Number of this item:"<<endl;
                        cin>>no;
                        obj1.vegetable(no);
                        break;
                    }
                    case 05:
                    {
                        cout<<obj1.tbill();
                        break;
                    }
                    case 06:
                    {
                        // exit(1);
                        break;
                    }
                    default:
                    {
                        cout<<"try again";
                        break;
                    }
                    }

                }
                break;
            }
            case 6:
            {

                while(choice!=6)
                {
                    cout<<"Press 01 for rice"<<endl;
                    cout<<"Press 02 for chicken"<<endl;
                    cout<<"Press 03 for daal"<<endl;
                    cout<<"Press 04 for vegetable"<<endl;
                    cout<<"Press 05 for See total bill"<<endl;
                    cout<<"Press 06 for exit menu bar"<<endl;
                    cout<<"Enter your choice"<<endl;
                    cin>>choice;
                    switch(choice)
                    {
                    case 02:
                    {
                        cout<<"Number of this item:"<<endl;
                        cin>>no;
                        obj1.chicken(no);
                        break;
                    }
                    case 01:
                    {
                        cout<<"Number of this item:"<<endl;
                        cin>>no;
                        obj1.rice(no);
                        break;
                    }
                    case 03:
                    {
                        cout<<"Number of this item:"<<endl;
                        cin>>no;
                        obj1.daal(no);
                        break;
                    }
                    case 04:
                    {
                        cout<<"Number of this item:"<<endl;
                        cin>>no;
                        obj1.vegetable(no);
                        break;
                    }
                    case 05:
                    {
                        cout<<obj1.tbill();
                        break;
                    }
                    case 06:
                    {
                        // exit(1);
                        break;
                    }
                    default:
                    {
                        cout<<"try again";
                        break;
                    }
                    }

                }
                break;
            }

        }
    }
        return 0;
}

#include<iostream>
using namespace std;

int main()
{
    int quant;
    int choice;
    int qrooms=0,qpasta=0,qburger=0,qnoodles=0,qshake=0,qchicken=0;

    int srooms=0,spasta=0,sburger=0,snoodles=0,sshake=0,schicken=0;
    int total_rooms=0,total_pasta=0,total_burger=0,total_noodles=0,total_shake=0,total_chicken=0;

    cout<<"\n\t  Quantity of items we have";
    cout<<"\n Rooms availabe:";
    cin>>qrooms;
    cout<<"\n quantity of pasta:";
    cin>>qpasta;
    cout<<"\n quantity of burger:";
    cin>>qburger;
    cout<<"\n quantity of noodles:";
    cin>>qnoodles;
    cout<<"\n quantity of shake:";
    cin>>qshake;
    cout<<"\n quantity of chicken_roll:";
    cin>>qchicken;

    m:
    cout<<"**********************************************************"<<endl;
    cout<<"\n\n\t\t Please select from the given menu options ";
    cout<<"\n\n1) Rooms";
    cout<<"\n\n2) Pasta";
    cout<<"\n\n3) Burger";
    cout<<"\n\n4) Noodles";
    cout<<"\n\n5) Shake";
    cout<<"\n\n6) Chicken-roll";
    cout<<"\n\n7) Information regarding sales and collection ";
    cout<<"\n\n8) Exit";

    cout<<"\n\n Please Enter your choice! ";
    cin>>choice;
    
    switch(choice)
    {
        case 1:
        if(qrooms-srooms!=0)
       { 
        cout<<" Enter the number of rooms you want: ";
        cin>>quant;
        if(qrooms-srooms>=quant)
        {
            srooms=srooms+quant;
            total_rooms=srooms*2000;
            cout<<"\n\n\t\t"<<quant<<" rooms have been alloted to you!";
        }
        else
        cout<<"\n\tOnly "<<qrooms-srooms<<" Rooms remaining in hotel ";
       }
       else
       cout<<" No more Rooms remaining in hotel \n Sorry for your inconvenience!!";
        break;


        case 2:
        if(qpasta-spasta!=0)
        {
        cout<<" Enter the pasta quantity you want: ";
        cin>>quant;
        if(qpasta-spasta>=quant)
        {
            spasta=spasta+quant;
            total_pasta=spasta*250;
            cout<<"\n\n\t\t"<<quant<<" pasta is ordered! ";
        }
        else
        cout<<"\n\tOnly "<<qpasta-spasta<<" Pasta remaining in hotel ";
        }
        else
        cout<<" No more Pasta available \n Sorry for your inconvenience!!";
        break;
        

        case 3:
        if(qburger-sburger!=0)
        {
        cout<<" Enter the burger quantity you want: ";
        cin>>quant;
        if(qburger-sburger>=quant)
        {
            sburger=sburger+quant;
            total_pasta=sburger*120;
            cout<<"\n\n\t\t"<<quant<<" burger is ordered! ";
        }
        else
        cout<<"\n\tOnly "<<qburger-sburger<<" Burger remaining in hotel ";
        }
        else
        cout<<" No more burger available \n Sorry for your inconvenience!! ";
        break;

        case 4:
        if(qnoodles-snoodles!=0)
        {
        cout<<" Enter the noodles quantity you want: ";
        cin>>quant;
        if(qnoodles-snoodles>=quant)
        {
            snoodles=snoodles+quant;
            total_noodles=snoodles*150;
            cout<<"\n\n\t\t"<<quant<<" noodles is ordered! ";
        }
        else
        cout<<"\n\tOnly "<<qnoodles-snoodles<<" Noodles remaining in hotel ";
        }
        else
        cout<<"No more noodles available \n Sorry for your inconvenience!! ";
        break;

        case 5:
        if(qshake-sshake!=0)
        {
        cout<<" Enter the shakes quantity you want: ";
        cin>>quant;
        if(qshake-sshake>=quant)
        {
            sshake=sshake+quant;
            total_shake=sshake*140;
            cout<<"\n\n\t\t"<<quant<<" shake is ordered! ";
        }
        else
        cout<<"\n\tOnly "<<qshake-sshake<<" Shakes remaining in hotel ";
        }
        else
        cout<<" No more shakes available \n Sorry for your inconvenience!! ";
        break;

        case 6:
        if(qchicken-schicken!=0)
        {
        cout<<" Enter the Chicken roll quantity you want: ";
        cin>>quant;
        if(qchicken-schicken>=quant)
        {
            schicken=schicken+quant;
            total_chicken=schicken*250;
            cout<<"\n\n\t\t"<<quant<<" chicken roll is ordered! ";
        }
        else
        cout<<"\n\tOnly "<<qpasta-spasta<<" chicken remaining in hotel ";
        }
        else
        cout<<" No more chicken roll available \n Sorry for your inconvenience!! ";
        break;

        case 7:
        

        cout<<"\n\t Details of sales and collection ";
        cout<<"\n\n Number of rooms we had :"<<qrooms;
        cout<<"\n\n Number of rooms we gave for rent "<<srooms;
        cout<<"\n\n Remaining rooms : "<<qrooms-srooms;
        cout<<"\n\n Total rooms collections for the day :"<<total_rooms; 


        cout<<"\n\n Number of pasta we had :"<<qpasta;
        cout<<"\n\n Number of pasta we sold "<<spasta;
        cout<<"\n\n Remaining pasta : "<<qpasta-spasta;
        cout<<"\n\n Total pasta collections for the day :"<<total_pasta; 

        cout<<"\n\n Number of burger we had :"<<qburger;
        cout<<"\n\n Number of burger we sold "<<sburger;
        cout<<"\n\n Remaining burger : "<<qburger-sburger;
        cout<<"\n\n Total burger collections for the day :"<<total_burger; 

        cout<<"\n\n Number of noodles we had :"<<qnoodles;
        cout<<"\n\n Number of noodles we sold "<<snoodles;
        cout<<"\n\n Remaining noodles : "<<qnoodles-snoodles;
        cout<<"\n\n Total noodles collections for the day :"<<total_noodles;

        cout<<"\n\n Number of shake we had :"<<qshake;
        cout<<"\n\n Number of shake we sold "<<sshake;
        cout<<"\n\n Remaining shake : "<<qshake-sshake;
        cout<<"\n\n Total shake collections for the day :"<<total_shake;

        cout<<"\n\n Number of chicken roll we had :"<<qchicken;
        cout<<"\n\n Number of chicken roll we sold "<<schicken;
        cout<<"\n\n Remaining chicken roll : "<<qnoodles-qchicken;
        cout<<"\n\n Total chicken roll collections for the day :"<<total_chicken;
        
        case 8:
        exit(0);

        default:
        cout<<"\n Please select the numbers mentioned above!";

    }
    goto m;

   
}
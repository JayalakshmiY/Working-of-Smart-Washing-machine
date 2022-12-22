#include <iostream>
#include<stdlib.h>
using namespace std;
int a[50];
int x = -1;
int n,i;
int b=0,c=0,d=0,e=0,f=0,g=0;
void EXIT(){
    cout<<"STRING NOT ACCEPTED\n";
for(i=0;i<=x;i++)
cout<<a[i];
exit(0);
}
void detergent();
void program2();
 void power(){
        do{
            cout << "Enter the input ";
            cin >> n;
            a[++x] = n;
            if (n == 0){
                cout << "Remains on power button itself\n";
            }
            else if (n == 1){
                cout << "Goes to next state\n";
                detergent();
                return;
            }
            else{
                 EXIT();
            }
        } while (n == 0 || n == 1);
    }
    void detergent(){
        cout << "Detergent \n";
        do{
            cout << "Enter the input ";
            cin >> n;
            a[++x] = n;
            if (n == 0)
                cout << "Remains on same stage\n";
            else if (n == 1) {
                cout << "Goes to settings\n";
                return;
            }
            else {
                EXIT();
            }
        } while (n == 0 || n == 1);
    }
    void beeper(){
         int op;
       cout<<"\nSelect the below options\n";
       cout<<"1.High\t2.Low\t3.off\n";
       cin>>op;
        a[++x] = op;
       switch(op)
       {
           case 1:cout<<"High is selected\n";break;
           case 2:cout<<"Low is selected\n";break;
           case 3:cout<<"OFF is selected\n";break;
           default:EXIT();
       }
    }
    void water_level(){
        int op;
       cout<<"\nSelect the below options\n";
       cout<<"1.High\t2.Medium\t3.Low\n";
       cin>>op;
        a[++x] = op;
       switch(op)
       {
           case 1:cout<<"High is selected\n";break;
           case 2:cout<<"Medium is selected\n";break;
           case 3:cout<<"Low is selected\n";break;
           default:EXIT();
       }
    }
    void set_wash(){
         int op;
       cout<<"\nSelect the below options\n";
       cout<<"1.  6 min\t2.  10 min\t3.  15 min\t4.  25 min\n";
       cin>>op;
        a[++x] = op;
       switch(op)
       {
           case 1:cout<<"6 min is selected\n";break;
           case 2:cout<<"10 min is selected\n";break;
           case 3:cout<<"15 min is selected\n";break;
           case 4:cout<<"25 min is selected\n";break;
           default:EXIT();
       }
    }
    void set_rinse(){
        int op;
       cout<<"\nSelect the below options\n";
       cout<<"1.  1 time \t2.  2 time\t3.  3 time \t4.  4 time\n";
       cin>>op;
        a[++x] = op;
       switch(op)
       {
           case 1:cout<<"1 time is selected\n"; break;
           case 2:cout<<"2 time is selected\n";break;
           case 3:cout<<"3 time is selected\n";break;
           case 4:cout<<"4 time is selected\n";break;
           default:EXIT();
       }
    }
    void set_spin(){
        int op;
       cout<<"\nSelect the any one of the options\n";
       cout<<"\n1.Air dry\t2.High dry\t3.Mid dry\t4.Low dry\n";
       cin>>op;
        a[++x] = op;
       switch(op)
       {
           case 1:cout<<"Air drying.....\n"; break;
           case 2:cout<<"High drying.....\n"; break;
           case 3:cout<<"Medium drying.....\n";break;
           case 4:cout<<"Low drying.....\n";break;
           default:EXIT();
       }
    }
    void program1(){
         int op;
     cout<<"\nSelect the below options\n";
     cout<<"1.Normal Wash\t2.Gentle Wash\t3.Quick Wash\t4.Strong Wash\n";
     cin>>op;
      a[++x] = op;
     switch(op)
     {
            case 1:cout<<"Normal is selected\n"; program2(); break;
            case 2:cout<<"Gentle is selected\n"; program2(); break;
            case 3:cout<<"Quick is selected\n";program2();break;
            case 4:cout<<"Strong is selected\n";program2();break;
            default:EXIT();
    }
    }
    void program2(){
         int op;
     cout<<"\nSelect the below options\n";
     cout<<"1.Normal\t2.Aqua reserve\t3.Favourite\t4.Tub clean\n";
     cin>>op;
      a[++x] = op;
      switch(op)
       {
           case 1:cout<<"Normal is selected\n"; break;
           case 2:cout<<"Aqua reserve is selected\n"; break;
           case 3:cout<<"Favourite is selected\n"; break;
           case 4:cout<<"Tub clean is selected\n"; break;
          default:EXIT();
       }
    }
    void start(){
        int l;
        cout<<"Press 8 to activate child lock\n";
        cin>>l;
        if(l==8){
        a[++x]=l;
            cout<<"Child lock activated\n";
        }
        if( b==0||c==0||d==0||e==0||f==0||g==0){
            cout<<"Applying some DEFAULT SETTINGS \n";
        }
cout<<"SENSING....!\nWASHING....!\nRINSE....!\nSPIN....!\nEND...";
cout<<"\nSTRING ACCEPTED\n";
for(i=0;i<=x;i++)
cout<<a[i];
    }

int main()
{
    power();
   int option;
    do{
        cout<<"Settings\n";
        cout<<"1.Beeper\t2.Water level\t3.Set wash\t4.Set rinse\t5.Set spin\t6.program1\t7.START/PAUSE\n";
        cout<<"Enter your choice\n";
        cin>>option;
          a[++x]=option;
        switch(option){
            case 1:beeper();b=1; break;
            case 2:water_level();c=1; break;
            case 3:set_wash();d=1; break;
            case 4:set_rinse();e=1; break;
            case 5:set_spin();f=1; break;
            case 6:program1();g=1;break;
            case 7:start();return 0;
            default:EXIT();
        }
    }while(option>0&&option<8);

    return 0;
}
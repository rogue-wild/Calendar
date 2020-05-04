#include<cstdlib>
#include<iostream>
#include<iomanip>

using namespace std;
/*
fDay-> First day in current Month
cMonth-> Current Month
nDay-> Number of days
*/
int main(){
 int year, fDay, cMonth=1, nDays;
 cout<<"Enter the year for which you want the calender for: ";
 cin>>year;
 cout<<endl;
 //this will calculate the first day of a year
 int x1, x2, x3;
 x1=(year-1)/4;
 x2=(year-1)/100;
 x3=(year-1)/400;
//start day of the year
 fDay=(year+x1-x2+x3)%7;
 cout<<"Calender: "<<year<<endl;
 cout<<endl;
 //loop over all months in a year
 while(cMonth<=12){
    if (cMonth==1){
        nDays=31;
        cout<<"January"<<endl;
    } else if (cMonth==2){
        if(year%4==0){
            nDays=29;
        }else {
        nDays=28;
        }
        cout<<"February"<<endl;
    }else if (cMonth==3){
        nDays=31;
        cout<<"March"<<endl;
    }else if (cMonth==4){
        nDays=30;
        cout<<"April"<<endl;
    }else if (cMonth==5){
        nDays=31;
        cout<<"May"<<endl;
    }else if (cMonth==6){
        nDays=30;
        cout<<"June"<<endl;
    }else if (cMonth==7){
        nDays=31;
        cout<<"July"<<endl;
    }else if (cMonth==8){
        nDays=31;
        cout<<"August"<<endl;
    }else if (cMonth==9){
        nDays=30;
        cout<<"September"<<endl;
    }else if (cMonth==10){
        nDays=31;
        cout<<"October"<<endl;
    }else if (cMonth==11){
        nDays=30;
        cout<<"November"<<endl;
    }else if (cMonth==12){
        nDays=31;
        cout<<"December"<<endl;
    }
    cout<<" S   M   T   W   T   F   S "<<endl;
    cout<<"____________________________"<<endl;
    int day=1;
    int i=fDay;
    while(i>0){
        cout<<"    ";
        i=i-1;
    }
    //Start creating Calender
    while(day<=nDays){
        cout<<setw(2)<<day<<"  ";
        //if more than five weeks in a month, initialize first day at 0
        if(fDay==6){
            cout<<endl;
            fDay=0;
        }else {
        fDay=fDay+1;
        }
        day=day+1;
        }
        cout<<endl<<endl<<endl;
        cMonth=cMonth+1;
    }
 cout<<endl;
 return 0;

 }








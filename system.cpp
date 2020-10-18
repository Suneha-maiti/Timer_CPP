#include<iomanip>
#include<iostream>
#include<stdlib.h>
#include<unistd.h>
#include<bits/stdtr1c++.h>

//#include<windows.h>
using namespace std;
int main()
{
    int h, s, m ,a , err;
    err=a=0;
    while(err==0){
        cout<<"Enter hour: ";
        cin>>h; cout<<endl;
        cout<<"Enter Minutes: ";
        cin>>m; cout<<endl;
        cout<<"Enter Seconds: ";
        cin>>s; cout<<endl;
        if(h<24 && m<60 && s<60)
        err++;
        else system("clear");
    }
    while(a==0){
        system("clear");
        //cout<<h<<": "<<m<<": "<<s<<endl;
        cout<<setfill(' ')<<setw(55)<<"           TIME          \n";
        cout<<setfill(' ')<<setw(55)<<"-------------------------\n";
        cout<<setfill(' ')<<setw(29);
        cout<<"| "<<setfill('0')<<setw(2)<<h<<": ";
        cout<<setfill('0')<<setw(2)<<m<<": ";
        cout<<setfill('0')<<setw(2)<<s<<" |"<<endl;
        cout<<setfill(' ')<<setw(55)<<"-------------------------\n";
        sleep(1);
        s--;
        if(s==0){s=59; m--;}
        if(m==0){m=59;h--;}
        if(h==0){h=0;}
        
    }
    return 0;
}

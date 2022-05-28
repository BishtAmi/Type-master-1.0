#include<iostream>
#include<chrono>
#include<cmath>
using namespace std;
using namespace std::chrono;
string words;
int main()
{
cout<<"========================================\n";
cout<<"|      WELCOME IN MY TYPINGS ZONE      |\n";
cout<<"========================================\n";
cout<<"\n";
cout<<"1->"<<"ENTER EXACT LENGTH OF STRING YOU WANT TO TYPE\n";
int cnt,length;
cin>>length;
cout<<"2-> YOUR TYPING ZONE IS STARTED\n";
 auto start=high_resolution_clock::now();
 cin>>words;
 auto stop=high_resolution_clock::now();
 auto duration1=duration_cast<seconds>(stop-start);
 cnt=length/4;
 float time1=duration1.count();
 float x=cnt/time1;
 float speed=x*60;
 cout<<"=============================\n";
 cout<<"|  TYPING SPEED LOADING     |\n";
 cout<<"=============================\n";
 cout<<floor(speed)<<" "<<"WORDS PER MINUTE (WPM)"<<"\n";

}


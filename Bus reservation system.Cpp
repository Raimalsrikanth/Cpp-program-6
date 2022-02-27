#include<conio.h>
#include<cstdio>
#include<iostream>
#include<string.h>
#include<cstdlib>
Using namespace std;
Static int p=0;
Class a
{
Char busn[5],driver[10],arrival[5],depart[5],from[10],
Public:
Void install();
Void allotment();
Void empty();
Void show();
Void position(int i);
}
bus [10];
Void Vline (char ch)
{
for (int i=80;i>=0;i--)
Cout<<ch;
}
Void a::install()
{
Cout<<"Enter bus no:";
Cin>>bus[p].busn;
Cout<<"\n Enter driver's name:";
Cin>>bus[p].driver;
Cout<<"\nArrival time:";
Cin>>bus[p].arrival;
Cout<<"\n departure:";
Cin>>bus[p].depart;
Cout<<"\nFrom:\t\t\t";
Cin>>bus[p].from;
Cout<<"\nTo:\t\t\t";
Cin>>bus[p].to;
bus[p].empty();
P++;
}
Void a::allotment()
{
int seat;
Char number[5];
top:
Cout<<"Bus no:";
Cin>>number;
int n;
for(n=0;n<=p;n++)
{
if(strcmp (bus[n].busn,number==0)
break;
}
While(n<=p)
{
Cout<<"\n seat Number:";
Cin>>seat;
if(seat>32)
{
Cout<<"\n There are only 32 seats available in this bus
}
else
{
if(strcmp(bus[n].seat[seat/4][(seat%4-1],"Empty")==0)
{
Cout<<"Enter passenger's name:";
Cin>>bus[n].seat[seat/4][(seat%4)-1];
break;
}
else
Cout <<"The seat no is already reserved.\n";
}
}
if (n>p)
{
Cout<<"Enter correct bus no.\n";
goto top;
}
}
Void a::empty()
{
for(int i=0;i<=8;i++)
{
for(int j=0;j<4;j++)
{
Strcpy(bus[p].seat[i][j],"Empty");
}
}
}
Void a::show()
{
int n;
Char number[5];
Cout<<"Enter bus no:";
Cin>>number;
for(n=0;n<=p;n++)
{
if(strcmp(bus[n].busn,number)==0)
break;
}
While(n<=p)
{
Vline('*');
Cout<<"bus no:\t"<<bus[n].bus n
<<"\n Driver:\t"<<bus[n].driver<<"\t\t Arrival time :\t"
<<bus [n].arrival<<"\t departire time:"<<bus[n].depart
<<\"n From:\t\t"<<bus[n].from<<"\t\t To:\t\t"<<bus[n].to<<"\n";
Vline('*');
bus [0].position(n);
int a=1;
for (int i=0;i<=8;i++)
{
 for(int j=0;j<4;j++)
{
a++;
Cout<<"\n The seat no"<<(a-1)<<"is reserved for"<<bus
}
}
break;
}
if(n>p)
Cout<<"Enter correct bus no:;
}
Void a::position(int 1)
{
int s=0;p=0;
for(int i=0;i<=8;i++)
{
Cout<<"\n";
for(int j=0;j<4;j++)
{
S++;
if(strcmp(bus[1].seat[i][j],"Empty")==0)
{
Cout.width(5);
Cout.fill('');
Cout<<s<<".";
Cout.width(10);
Cout.fill('');
Cout<<bus[1].seat[i][j];
P++;
}
else
{
Cout.width(5);
Cout.fill('');
Cout<<s<<".";
Cout.width(10);
Cout.fill('');
Cout<<bus[1].seat[i][j];
}
}
}
Cout<<"\n\n There are"<cp<c"seats empty in bus no:"<<bus
}
Void a::avail()
{
for(int n=0;n<p;n++)
{
Vline ('*');
Cout <<"Bus no:\t"<cbus[n].busn<<"\n driver:\t"<<bus[n].c
<<"\t\t Arrival time:\t"<<bus[n].arrival<<"\t departure T;
<<bus[n].depart<<"\nForm\t\t"<<bus[n].from<<"\t\t To:\t
<<bus[n].to<<"\n";
Vline('*');
Vline('');
}
}
int main()
{
System("cls");
int w;
While(1)
{
//system("cls");
Cout<<"\n\n\n\n\n";
Cout<<"\t\t\t1.Install\n\t\t\t"
<<"2.Reservation \n\t\t\t"
<<"3.show \n\t\t\t"
<<"4.Buses Available.\n\t\t\t"
<<"5.Exit";
Cout<<"\n\t\t\tEnter your choice :->";
Cin>>w;
Switch(w)
{
Case 1: bus[p].install();
break;
Case 2:bus[p].allotment();
break;
Case 3:bus[0].show();
break;
Case 4:bus[0].avail();
break;
Case 5:exit(0);
}
}
}
Return 0;
}

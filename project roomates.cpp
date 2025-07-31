#include<iostream>
using namespace std;
int totalbill(int *a,int size)
{
	int tb,amount=0;
 cout<<"accept amount each roomate paid "<<endl;
 for (int i=0; i<5; i++)
 {
 	a[i]=i+1;
 	cout<<"roomate number "<<a[i]<<" paid amount "<<"="<<" ";
 	cin>>amount;
 	a[i]=amount;
 	 tb=tb+amount;
 }
 return tb;
}	
int main()
{
 int roomates[5],total,tb;
 float balance;
 cout<<"total rommates are five "<<endl;
 total=totalbill(roomates,5);
 cout<<"totalbill paid by roomates "<<total<<endl;
 cout<<"each roomate should paid "<<total/5<<endl;
 for (int i=0; i<5; i++)
 {
 	balance=roomates[i]-total/5;
 	if(balance>0)
 	{
 		cout<<"roomate "<<i+1<<" "<<"is owed "<<balance<<endl;
	 }
	 else if(balance<0)
	 {
	 cout<<"roomate "<<i+1<<" "<<"owes  "<<-balance<<endl;
	 }
	 else
	 {
	 	cout<<"roomate "<<i+1<<" "<<"bill is settled"<<endl;
	 }
 }
return 0;
}


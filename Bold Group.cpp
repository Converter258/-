#include<iostream>
using namespace std;
int main()
{
	int Accout,password=121312,inpa,money=192112312,out,passwordnew,passwordnew1,op=0,service,in,chance=3,c=1;
	cout<<"Welcome to Bold Bank，Please enter your Bold Account"<<endl;
	cin>>Accout;	
	for(int i=1;i<=1000;i++)
	{
		if(c==0)
		{
			break;
		}	
		if(chance==0)
		{	
			cout<<"U,gei lz get out"<<endl;
			break;	
		}
		cout<<"Please enter your password"<<endl;
		cin>>inpa;
		if(inpa==password)
		{
			for(int m=1;m<=1000;m++)
			{
				if(op==1)
				{
					op=0;
					break;
				}
				
				cout<<"Good,it's time to select your service"<<"1.查询 2.取款 3.存款 4.贷款 5，修改密码 0.退卡"<<endl;
				cin>>service;
				
					
					if(service==1)
					{
						cout<<"Now you have "<<money<<" Bold Coins,thanks for believing Bold Bank!"<<endl;

					}
					if(service==2)
					{
						
						cout<<"You have "<<money<<" Blod Coins,Please enter the number"<<endl;
						for(int l=1;l<=1000;l++)
						{
							cin>>out;
							if(out<=money)
							{
								money=money-out;
								cout<<"Great,you have taken the cash,now you have "<<money<<" Bold Coins,thanks for choosing Bold Bank!"<<endl;
								break;
							}
							if(out>money)
							{
								cout<<"Sorry,you don't have enough money to take,please make sure that you have enough Bold Coins"<<endl;								
							}
						}
						
					}
					if(service==3)
					{
						cout<<"Please enter the number you want to put in and put in the cash"<<endl;
						cin>>in;
						money=in+money;
						cout<<"Now you have "<<money<<" Bold Coins,thank you for choosing Bold Bank!"<<endl;
					}
					if(service==4)
					{
						cout<<"You,gei LZ get out！"<<endl;
					}
					if(service==5)
					{
						cout<<"Please enter your new password!"<<endl;
						
						for(int k=1;k<=100;k++)
						{
							cin>>passwordnew;
							cout<<"Please enter again"<<endl;
							cin>>passwordnew1;
							if(passwordnew==passwordnew1)
							{	
								op=1;
								password=passwordnew1;
								cout<<"All right,your password was changed,please resign in"<<endl;
								break;
							
							}
							if(passwordnew!=passwordnew1)
							{
								cout<<"Please try again"<<endl;
							}
						}
						
					}
					if(service==0)
					{
						
						cout<<"See you!"<<endl;
						c=0;
						break;
					}	
				
					 
				 } 
				 
			}
			if(inpa!=password)
			{	
				chance--;
				cout<<"Sorry,it seems that your password is not correct,you have "<<chance<<" chances left"<<endl;	
			}
			
		}return 0;
	}
	
	
	
	 
 

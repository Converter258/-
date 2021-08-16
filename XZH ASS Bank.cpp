#include<iostream>
using namespace std;
int main()
{
	int password=123123,accout,c=3,password1,survice,return1=2313,survicenum=1,nuqizhi=0,moneyforfuck,con,con2,newpassword1,newpassword2,daikuan,give,go=0,money=100,fuckfuck;
	cout<<"Wlecome to XZH ASS Bank,please enter your Ass ID"<<endl;
	cin>>accout;
	cout<<"please enter your password"<<endl;
	for(int l=1;l<=10000;l++)
	{
		if(go!=0)
		{
			break;
		}
		if(nuqizhi!=0)
		{
			cout<<"cnm you gei lao zi fucking~ out!!!!!"<<endl;
			break;
			
		}
		cin>>password1;
		if(password1==password)
		{
			for(int i=1;i<=10000;i++)
			{
				if(nuqizhi!=0)
				{
					cout<<"cnm you gei lao zi fucking~ out!!!!!"<<endl;
					break;
			
				}
				if(return1>=3000)
				{
					cout<<"Warning:Now we know you need to pay back "<<return1<<" to xzh,please do it soon,or xzh will fuck~ you ass!"<<endl;
				}
				if(survicenum==1)
				{
					cout<<"Good,Now please choose your fucking~survice" <<endl<<"1.查询 2.存款 3.取款 4.修改密码 5.贷款 6.还款 7.自首 0.退卡"<<endl;
				}
				if(survicenum!=1)
				{
					cout<<"Please choose your fucking~survice again"<<endl<<"1.查询 2.存款 3.取款 4.修改密码 5.贷款 6.还款 7.自首 0.退卡"<<endl;
				}
				
				cin>>survice;
				survicenum++;
				if(survice==1)
				{
					cout<<"Oh~yeah you have"<<money<<"fucking ass coins"<<endl<<"And you mother fucker~should return us "<<return1<<" Ass coins!!!fucker~do it now or we will fucking~kill you"<<endl;
				}
				if(survice==2)
				{
					cout<<"fucking~welcome!!!!,thank you for give money to xzh~"<<endl<<"Please enter the money you want to give"<<endl<<"Now you have"<<money<<"Ass coin"<<endl;
					cin>>moneyforfuck;
					if(moneyforfuck<1000)
					{
						cout<<"cnmbsbrnm穷逼伞兵操你妈给老子滚！！！"<<endl; 
						nuqizhi=1;
					}
					if(moneyforfuck>=1000)
					{
						money=money+moneyforfuck; 
						cout<<"Thank you my father!!!!I fucking~ love you!!I am xzh,I am your son!!!!"<<endl<<"Great,now you have "<<money<<" Thank you for give money to xzh!"<<endl;
					}	
				}
				if(survice==3)
				{
					cout<<"No way!!Father!I am your son xzh,don't do this OK,I have 100 boyfriends need to feed!!"<<endl<<"continue??"<<endl<<"Choose 1 for continue,2 for cancel"<<endl;
					cin>>con;
					if(con==1)
					{
						cout<<"You fucking~sure???I'm your son xzh!!!don't do this to me!!!!Please!!!I can do everything for you!!!!!!!!"<<endl<<"continue?????"<<endl<<"Choose 1 for cancel,2 for continue"<<endl;
						cin>>con2;
						if(con2==1)
						{
							cout<<"Thank you father!!!I fucking~love you!!!!!"<<endl;
						}
						if(con2==2)
						{
							for(int a=1;a<=10000;a++)
							{
								cout<<"All right,now I'm your fucking~father,cnmd"<<endl<<"Now fucking~your mother,tell me how much?"<<endl;
								cin>>fuckfuck;
								if(fuckfuck>=money-1)
								{
									cout<<"No way,you even didn't give your father me xzh so much!!!You want to cheat me,you are so humorous my son!Enter again,you should at give me 2 Ass coin at leaset!!!Because I'm 2B'"<<endl;
								}
								if(fuckfuck<money-1)
								{
									cout<<"All right all right,you won!"<<endl<<"Now you have"<<money<<"Ass coins"<<endl;
									break;					
								}
							}
						}
					}
					if(con==2)
					{
						cout<<"Thank you father!!!I fucking~love you!!!!!"<<endl;
					}
				}
				if(survice==4)
				{
					cout<<"Please enter your new password!"<<endl;
					for(int e=1;e<=10000;e++)
					{
						cin>>newpassword1;
						cout<<"Please repeat!"<<endl;
						cin>>newpassword2;
						if(newpassword2==newpassword1)
						{
							password=newpassword1;
							cout<<"Succeed!"<<endl;
							break;
						}
						if(newpassword2!=newpassword1)
						{
							cout<<"They are not the same,please try again!"<<endl;
						}
					}
				}
				if(survice==5)
				{
					cout<<"Welcome!!Xu ge Ass dai kuan is very good!!But you should give it back to me in time!"<<"enter the money you want to have"<<endl;
					cin>>daikuan;
					if(daikuan>=100000)
					{
						cout<<"You want to cheat me?No way,get out fucker~!!!"<<endl;
						nuqizhi=1;
						break;
					}
					if(daikuan<100000)
					{
						cout<<"OK,just remenber to give back to me,OK?"<<endl;
						return1=return1+daikuan;
					}
				}
				if(survice==6)
				{
					cout<<"Good my son,you are fucking~xiao shun,how much do you want to give me?"<<endl;
					cin>>give;
					if(give<=3)
					{
						cout<<"Fuck~you fucker~!!Cheat me??No way,I'm xzh,the king of Ass kingdom!!!"<<endl;
						nuqizhi=1;
						break;
					}
					if(give>return1)
					{
						cout<<"I fucking~love you!!!"<<endl;
						return1=0;
					}
					return1=return1-give;
					if(return1<0)
					{
						return1=0;
					}
					cout<<"All right my son,you have "<<return1<<" need to give now,do it soon,or I will fuck~your ass hole!"<<endl;
				}
				if(survice==7)
				{
					cout<<"All right,you are a lonely son,but our bank is not clean at all,there is too much ass and big shit,so get out!!"<<endl;
					nuqizhi=1;
					break;
				}
				if(survice==0)
				{
					cout<<"Thank you for choosing XZH ASS Bank!See you~"<<endl;
					go=1;
					break;
				}
				
			}
		}
		if(password1!=password)
		{	
			c--;
			if(c==0)
			{
				cout<<"You gei lao zi out!"<<endl;
				break;
			}
			cout<<"please try again,you have "<<c<<" chances"<<endl;
		}
	}
	return 0;

} 

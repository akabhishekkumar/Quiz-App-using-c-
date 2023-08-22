#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int a;

class ARTIFICALINTELLIGENCEQUIZGAME
{
public:
	void USERNAME()  
    {
	char k1[100];
	cout<<"\t Guest....Enter Your Name : ";
	cin>>k1;
	cout<<" \n\t Welcome "<<k1<<endl;
	}
    
     void qalification()  
    {
    char k2[100];
	cout<<"\n\t Guest....Enter Your qalification : ";
	cin>>k2;
	cout<<" \n\t thanks for this information "<<endl;
	}

    void HEADERFILE1() 
	{
		cout<<"\t\t\t\t\t WELCOME TO THE BEST QUIZ GAME IN THE WORLD THIS GAME IS MADE BY ****!!!! ABHISHEK KUMAR !!!!**** "<<endl;
	}

    void GAME_RULES() 
    {
	cout<<"\n\t\t\t\t\t MY GAME HAS A LOT OF RULES AND REGULATION PLEASE PLAY THIS GAME AT YOUR OWN RISK. "<<endl;
    cout<<"\n\t\t\t\t\t IT CAN BECOME MORE AND MORE ADDICTIVE."<<endl;
	cout<<"\n\t\t\t\t\t PLEASE READ ALL THESE RULES AND REGULATIONS CAREFULLY AT YOUR OWN RISK."<<endl;
	cout<<"\n\t\t\t\t\t Please Enter Any Key to Read RULES AND REGULATIONS ."<<endl;
	getch();
	system ("CLS");
	}

    void GAME_RULES_LIST() 
	{

    cout<<"\n\t\t\t\t\t\t RULES AND REGULATIONS ."<<endl;
    cout<<"\n\t\t\t\t\t Rule 1.There Are Total 25 Questions In This Game."<<endl;
	cout<<"\n\t\t\t\t\t Rule 2.Question 1 to Question 10 are of 5 marks each."<<endl;
	cout<<"\n\t\t\t\t\t Rule 3.Question 11 to Question 20 are of 10 marks each."<<endl;
	cout<<"\n\t\t\t\t\t Rule 4.Question 21 to Question 25 are of 20 marks each."<<endl;
	cout<<"\n\t\t\t\t\t RULE 5.Press A , B , C or D To Answer Any Question."<<endl;
	cout<<"\n\t\t\t\t\t RULE 6.It is compulsory to give all the answers in A,b,c,d ."<<endl;
	cout<<"\n\t\t\t\t\t RULE 7.if you give different characters it will be wrong Answer."<<endl;
	cout<<"\n\t\t\t\t\t RULE 8.Attempting all the questions are compulsory."<<endl;
    cout<<"\n\t\t\t\t\t RULE 9.you cannot leave any question in blank condition."<<endl;
	cout<<"\n\t\t\t\t\t RULE 10.All questions are of 5,10,20 marks .You will get 5,10,20 marks for correcting any question."<<endl;
	cout<<"\n\t\t\t\t\t ---> ARE YOU READY TO PLAY THIS GAME THEN PLEASE ENTER ANY KEY "<<endl; 

	getch();
	system ("CLS");
	}

	void FOOTERFILE() 
    {
	cout<<"\t\t\t\t\t RESULTS "<<endl;
	}
    
    void RESULTDECLARED() 
    {

	if (a==250) 
	cout<<" \t\n ........You are extremely intelligent Your Score is 100 %.";
	if(a==245) 
	cout<<" \t\n .......You are extremely intelligent Your Score is 98 %  .";
	if(a==240) 
    cout<<" \t\n ........You are extremely intelligent Your Score is 96 %.";
    if (a==235) 
	cout<<" \t\n ........You are extremely intelligent Your Score is 94 %.";
	if(a==230) 
	cout<<" \t\n .......You are very intelligent Your Score is 92 %  .";
	if(a==225) 
    cout<<" \t\n .......You are very intelligent Your Score is 90 %  .";
	if(a==220) 
	cout<<" \t\n .......You are very intelligent Your Score is 88 %  .";
	if(a==215) 
	cout<<" \t\n .......You are very very GOOD. Your Score is 86 %  .";
	if(a==210) 
	cout<<" \t\n .......You are very very GOOD. Your Score is 84 %  .";
    if(a==205) 
	cout<<" \t\n ........You are very GOOD. Your Score is 82 %  .";
	if(a==200) 
	cout<<" \t\n .......You are very GOOD. Your Score is 80 %  .";
	if(a==195) 
	cout<<" \t\n .......You are GOOD Your Score is 78 %  .";
	if(a==190) 
	cout<<" \t\n .......You are GOOD Your Score is 76 %  .";
	if(a==185) 
	cout<<" \t\n ........You are VERY GREAT. Your Score is 74 %  .";
	if(a==180) 
	cout<<" \t\n .......You are VERY GREAT. Your Score is 72 %  .";
    if(a==175) 
	cout<<" \t\n ........You are GREAT. Your Score is 70 %  .";
	if(a==170) 
	cout<<" \t\n .......You are GREAT. Your Score is 68 %  .";
	if(a==165) 
	cout<<" \t\n .......You are GREAT. Your Score is 66 %  .";
	if(a==160) 
	cout<<" \t\n .......You are VERY NICE. Your Score is 64 %  .";
	if(a==155) 
	cout<<" \t\n .......You are VERY NICE. Your Score is 62 %  .";
	if(a==150) 
	cout<<" \t\n .......You are NICE. Your Score is 60 %  .";
	if(a==145)  
	cout<<" \t\n .......You are NICE. Your Score is 58 %.";
	if(a==140) 
	cout<<" \t\n .......You are NICE Your Score is 56 %  .";
	if(a==135) 
	cout<<" \t\n .......You are average Your Score is 54 %  .";
    if(a==130) 
	cout<<" \t\n ........You are average Your Score is 52 %  .";
	if(a==125) 
	cout<<" \t\n .......You are average Your Score is 50 %  .";
    if(a==120) 
	cout<<" \t\n .......You are average Your Score is 48 %  .";
	if(a==115) 
	cout<<" \t\n .......You are average Your Score is 46 %  .";
	if(a==110) 
	cout<<" \t\n .......You are average Your Score is 44 %  .";
	if (a==105) 
	cout<<" \t\n .......Your marks are very low. Your Score is 42 %  .";
	if(a==100)  
	cout<<" \t\n .......Your marks are very low. Your Score is 40 %.  ";
	
    else if(a<=95)
	cout<<"\n Your marks are very low. you should work on your skills and learn more and work hard.... Not even ( 40 % ) marks you achive";	
	
	}
	
    void GAMEFINISH() 
    {
    cout<<"\n\n\n*****!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*****"<<endl;
	cout<<"\t\t\t\t   GAME FINISH "<<endl;
    cout<<"*****!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*****"<<endl;
	}

	void ENJOY() 
    {
    cout<<"\t\t\t I HOPE YPU ARE ENJOYING MY GAME."<<endl;
    cout<<"*****!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!*****"<<endl;
	}
    

    };
    int main()
    {
	char k2;
	ARTIFICALINTELLIGENCEQUIZGAME object1;
	object1.USERNAME();
	object1.qalification();
	object1.HEADERFILE1();
    object1.GAME_RULES();
	object1.GAME_RULES_LIST();

    cout<<"\n \t This is the first Round of my QUIZ GAME. "<<endl;
    cout<<"\n\t Question 1 to Question 10 are of 5 marks each. "<<endl;
	cout<<"\n \t Attempting all the questions is compulsory, you cannot skip any question. "<<endl;
	getch();
	system ("CLS");

    // Q1
	cout<<"\n\t Q1.According to Forbes release 2022 there are many billionaires in WORld. WHO is the richest man of'WORld'? \n\t a.Mukesh Ambani \n\t b.Ratan Tata \n\t c.Elon Musk \n\t d.Gautam Adani"<<endl;
	cin>>k2;
	if(k2=='C'||k2=='c')
	{
		a=a+5;
		cout<<" \t Press Enter! ";
	}
	else
	{
	    cout<<" \t Sorry you entered the wrong answer the correct answer is c. Batter luck Next Time. "<<endl;
	    cout<<" \t Press Enter! ";
	}
	getch();
	system ("CLS");
	object1.HEADERFILE1();
    
	// Q2
    cout<<"\t Q2.Which is the bigest company in the world in 2022? \n\t a.Apple \n\t b.Reliance \n\t c.Tesla \n\t d.Saudi Aramco"<<endl;
	cin>>k2;
	if(k2=='D'||k2=='d')
	{
		a=a+5;
        cout<<" \t Press Enter! ";

	}
    else
	{
	cout<<" \t Sorry you entered the wrong answer the correct answer is d. Batter luck Next Time. "<<endl;
	cout<<" \t Press Enter! ";
	}
	getch();
	system ("CLS");
	object1.HEADERFILE1();
    
    // Q3
	cout<<"\t Q3. Russia is the largest country in the world by area, so tell me how much area does Russia have? \n\t a.17.1 million km² \n\t b.25.1 million km² \n\t c.10.1 million km² \n\t d.12.1 million km²"<<endl;
	cin>>k2;
	if(k2=='A'||k2=='a')
	{
		a=a+5;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry you entered the wrong answer the correct answer is a. Batter luck Next Time "<<endl;
	cout<<" \t Press Enter! ";
	}
	getch();
	system ("CLS");
	object1.HEADERFILE1();

    // Q4
	cout<<"\t Q4. Where has the world's lowest temperature ever been found and how much has been found ? \n\t a.Russia(-109.4°C) \n\t b.Antarctica iceberg (-89.4°C)  \n\t c.Germany(-98.4°C) \n\t d.America(-55.4°C) "<<endl;
	cin>>k2;
	if(k2=='B'||k2=='b')
	{
		a=a+5;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry you entered the wrong answer the correct answer is b. Batter luck Next Time "<<endl;
	cout<<" \t Press Enter! ";
	}
	getch();
	system ("CLS");
	object1.HEADERFILE1();

    // Q5
	cout<<"\t Q5. Who is the Father of our Nation ? \n\t a.Narendra Modi \n\t b.Mahatma Gandhi \n\t c.Rahul Gandhi \n\t d.Jawaharlal Nehru"<<endl;
	cin>>k2;
	if(k2=='B'||k2=='b')
	{
		a=a+5;
		cout<<" \t Press Enter! ";
	}
    else
	{
	cout<<" \t Sorry you entered the wrong answer the correct answer is b. Batter luck Next Time "<<endl;
	cout<<" \t Press Enter! ";
	}
	getch();
	system ("CLS");
	object1.HEADERFILE1();

    // Q6
	cout<<"\t Q6. Who is known as Father of Indian Constitution? \n\t a.Dr B R Ambedkar \n\t b.Mahatma Gandhi \n\t c.Dr Rajendra Prasad \n\t d.Jawaharlal Nehru"<<endl;
	cin>>k2;
	if(k2=='A'||k2=='a')
	{
		a=a+5;
		cout<<" \t Press Enter! ";
	}
    else
	{
	cout<<" \t Sorry you entered the wrong answer the correct answer is a. Batter luck Next Time "<<endl;
	cout<<" \t Press Enter! ";
	}
	getch();
	system ("CLS");
	object1.HEADERFILE1();

	// Q7
	cout<<" \t Q7. Who was the first Prime Minister of India ? \n\t a.Narendra Modi \n\t b.Mahatma Gandhi \n\t c.Rahul Gandhi \n\t d.Jawaharlal Nehru"<<endl;
	cin>>k2;
	if(k2=='D'||k2=='d')
	{
		a=a+5;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry you entered the wrong answer the correct answer is d. Batter luck Next Time "<<endl;
	cout<<" \t Press Enter! ";
	}
	getch();
	system ("CLS");
	object1.HEADERFILE1();

    // Q8
	cout<<"\t Q8. Which is the heavier metal of periodic table ? \n\t a.Silver Metal  \n\t b.Osmium Metal \n\t c.Gold Metal \n\t d.Aluminium Metal "<<endl;
	cin>>k2;
	if(k2=='B'||k2=='b')
	{
		a=a+5;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry you entered the wrong answer the correct answer is b. Batter luck Next Time "<<endl;
	cout<<" \t Press Enter! ";
	}
	getch();
	system ("CLS");
	object1.HEADERFILE1();

    // Q9
	cout<<"\t Q9. 1024 Kilobytes is equal to ? \n\t a.1 Megabyte (MB) \n\t b.1 Gigabyte (GB) \n\t c.1 Terabyte (TB) \n\t d.1 Petabyte (PB) "<<endl;
	cin>>k2;
	if(k2=='A'||k2=='a')
	{
		a=a+5;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry you entered the wrong answer the correct answer is a. Batter luck Next Time "<<endl;
	cout<<" \t Press Enter! ";
	}
	getch();
	system ("CLS");
	object1.HEADERFILE1();

    // Q10
	cout<<"\t Q10. How many Cricket ODI world cups does India have ? \n\t a.India has 8 cricket world cups \n\t b.India has 5 cricket world cups \n\t c.India has 2 cricket world cups \n\t d.India has 1 cricket world cups"<<endl;
	cin>>k2;
	if(k2=='C'||k2=='c')
	{
		a=a+5;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry you entered the wrong answer the correct answer is c. Batter luck Next Time "<<endl;
	cout<<" \t Press Enter! ";
	}
	getch();
	system ("CLS");
	object1.HEADERFILE1();
  
	cout<<"\n \t This is the Second Round of my QUIZ GAME.  "<<endl;
    cout<<"\n\t Question 11 to Question 20 are of 10 marks each. "<<endl;
	cout<<"\n \t Attempting all the questions is compulsory, you cannot skip any question. "<<endl;
	getch();
	system ("CLS");

	// Q11
	cout<<"\n\t Q11.Who has the right to transfer any case anywhere in India ? \n\t a.High Court \n\t b.Panchayat \n\t c.Supreme Court \n\t d.Local Court"<<endl;
	cin>>k2;
	if(k2=='C'||k2=='c')
	{
		a=a+10;
		cout<<" \t Press Enter! ";
	}
	else
	{
	    cout<<" \t Sorry you entered the wrong answer the correct answer is c. Batter luck Next Time. "<<endl;
	    cout<<" \t Press Enter! ";
	}
	getch();
	system ("CLS");
	object1.HEADERFILE1();
    
	// Q12
    cout<<"\t Q12.Highest capacity of the storage are -? \n\t a.Megabyte \n\t b.Terabyte \n\t c.Zettabyte \n\t d.Yottabyte"<<endl;
	cin>>k2;
	if(k2=='D'||k2=='d')
	{
		a=a+10;
        cout<<" \t Press Enter! ";

	}
    else
	{
	cout<<" \t Sorry you entered the wrong answer the correct answer is d. Batter luck Next Time. "<<endl;
	cout<<" \t Press Enter! ";
	}
	getch();
	system ("CLS");
	object1.HEADERFILE1();
    
    // Q13
	cout<<"\t Q13.'Dual citizenship is a feature of which of the following?  \n\t a.Federal Government \n\t b.Unitary Government \n\t c.Parliamentary government \n\t d.President-ruled government"<<endl;
	cin>>k2;
	if(k2=='A'||k2=='a')
	{
		a=a+10;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry you entered the wrong answer the correct answer is a. Batter luck Next Time "<<endl;
	cout<<" \t Press Enter! ";
	}
	getch();
	system ("CLS");
	object1.HEADERFILE1();

    // Q14
	cout<<"\t Q14. IC chips used in computers are usually made of:? \n\t a.Lead \n\t b.Silicon \n\t c.Chromium \n\t d.Gold "<<endl;
	cin>>k2;
	if(k2=='B'||k2=='b')
	{
		a=a+10;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry you entered the wrong answer the correct answer is b. Batter luck Next Time "<<endl;
	cout<<" \t Press Enter! ";
	}
	getch();
	system ("CLS");
	object1.HEADERFILE1();

    // Q15
	cout<<"\t Q15.Which of the following is not an example of an Operating System? \n\t a.Windows 98 \n\t b.BSD Unix \n\t c.Microsoft Office XP \n\t d.Red Hat Linux"<<endl;
	cin>>k2;
	if(k2=='C'||k2=='c')
	{
		a=a+10;
		cout<<" \t Press Enter! ";
	}
    else
	{
	cout<<" \t Sorry you entered the wrong answer the correct answer is c. Batter luck Next Time "<<endl;
	cout<<" \t Press Enter! ";
	}
	getch();
	system ("CLS");
	object1.HEADERFILE1();

    // Q16
	cout<<"\t Q16.Information travels between the components of the motherboard through? \n\t a.BUS \n\t b.CMOS \n\t c.Flash memory \n\t d.Peripherals"<<endl;
	cin>>k2;
	if(k2=='A'||k2=='a')
	{
		a=a+10;
		cout<<" \t Press Enter! ";
	}
    else
	{
	cout<<" \t Sorry you entered the wrong answer the correct answer is a. Batter luck Next Time "<<endl;
	cout<<" \t Press Enter! ";
	}
	getch();
	system ("CLS");
	object1.HEADERFILE1();

	// Q17
	cout<<" \t Q17.What is DVD? \n\t a.Dynamic Video Disc \n\t b.Dynamic Versatile Disk \n\t c.Digital Versatile Disc \n\t d.Digital Video Disc"<<endl;
	cin>>k2;
	if(k2=='D'||k2=='d')
	{
		a=a+10;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry you entered the wrong answer the correct answer is d. Batter luck Next Time "<<endl;
	cout<<" \t Press Enter! ";
	}
	getch();
	system ("CLS");
	object1.HEADERFILE1();

    // Q18
	cout<<"\t Q18.The main memory of the computer is called ? \n\t a.Primary Memory \n\t b.internal memory \n\t c.Primary Storage \n\t d.all of these "<<endl;
	cin>>k2;
	if(k2=='D'||k2=='d')
	{
		a=a+10;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry you entered the wrong answer the correct answer is d. Batter luck Next Time "<<endl;
	cout<<" \t Press Enter! ";
	}
	getch();
	system ("CLS");
	object1.HEADERFILE1();

    // Q19
	cout<<"\t Q19.Which of the following is not a hardware processing chip?\n\t a.Java \n\t b.Processing chip \n\t c.printer \n\t d.mouse "<<endl;
	cin>>k2;
	if(k2=='A'||k2=='a')
	{
		a=a+10;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry you entered the wrong answer the correct answer is a. Batter luck Next Time "<<endl;
	cout<<" \t Press Enter! ";
	}
	getch();
	system ("CLS");
	object1.HEADERFILE1();

    // Q20
	cout<<"\t Q20.What is the full form of ISDN? \n\t a.Input Service Digital Network \n\t b.Integrated Switch Digital Network \n\t c.Integrated Services Digital Network \n\t d.Input Switch Digital Network"<<endl;
	cin>>k2;
	if(k2=='C'||k2=='c')
	{
		a=a+10;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry you entered the wrong answer the correct answer is c. Batter luck Next Time "<<endl;
	cout<<" \t Press Enter! ";
	}
	getch();
	system ("CLS");
	object1.HEADERFILE1();

    cout<<"\n \t This is the FINAL Round of my QUIZ GAME.  "<<endl;
    cout<<"\n\t Question 21 to Question 25 are of 20 marks each. "<<endl;
	cout<<"\n \t Attempting all the questions is compulsory, you cannot skip any question. "<<endl;
	getch();
	system ("CLS");

   // Q21
	cout<<"\n\t Q21.What is the world's smallest country ? \n\t a.denmark \n\t b.swiden \n\t c.Vatican City  \n\t d.bhutan"<<endl;
	cin>>k2;
	if(k2=='C'||k2=='c')
	{
		a=a+20;
		cout<<" \t Press Enter! ";
	}
	else
	{
	    cout<<" \t Sorry you entered the wrong answer the correct answer is c. Batter luck Next Time. "<<endl;
	    cout<<" \t Press Enter! ";
	}
	getch();
	system ("CLS");
	object1.HEADERFILE1();
    
	// Q22
    cout<<"\t Q22.Which is the 'rainiest' place in the world.? \n\t a.Newyork in america \n\t b.Berlin in germany \n\t c.Lahore in pakistan \n\t d.Mawsynram in Meghalaya"<<endl;
	cin>>k2;
	if(k2=='D'||k2=='d')
	{
		a=a+20;
        cout<<" \t Press Enter! ";

	}
    else
	{
	cout<<" \t Sorry you entered the wrong answer the correct answer is d. Batter luck Next Time. "<<endl;
	cout<<" \t Press Enter! ";
	}
	getch();
	system ("CLS");
	object1.HEADERFILE1();
    
    // Q23
	cout<<"\t Q23.A steam engine that produced continued rotary motion was patented by ' James Watt ' in 1781. This steam engine was power of ? \n\t a.10 horsepower (7,500 W) \n\t b.15 horsepower (1,500 W) \n\t c.25 horsepower (2,500 W) \n\t d.100 horsepower (10000 W)."<<endl;
	cin>>k2;
	if(k2=='A'||k2=='a')
	{
		a=a+20;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry you entered the wrong answer the correct answer is a. Batter luck Next Time "<<endl;
	cout<<" \t Press Enter! ";
	}
	getch();
	system ("CLS");
	object1.HEADERFILE1();

    // Q24
	cout<<"\t Q24.Which city is known as the home of the world's oldest oil paintings? \n\t a.city in Russia(moscow) \n\t b.city in Afghanistan (Bamyan).  \n\t c.city in Germany(berlin) \n\t d.city in pakistan(lahore) "<<endl;
	cin>>k2;
	if(k2=='B'||k2=='b')
	{
		a=a+20;
		cout<<" \t Press Enter! ";
	}
	else
	{
	cout<<" \t Sorry you entered the wrong answer the correct answer is b. Batter luck Next Time "<<endl;
	cout<<" \t Press Enter! ";
	}
	getch();
	system ("CLS");
	object1.HEADERFILE1();

    // Q25
	cout<<"\t Q25. Video sharing company and online platform 'YouTube' officilly launche date ? \n\t a.Dec 25, 2015, \n\t b.Dec 15, 2005, \n\t c.Dec 23, 2003, \n\t d.Dec 5, 2010,"<<endl;
	cin>>k2;
	if(k2=='B'||k2=='b')
	{
		a=a+20;
		cout<<" \t Press Enter! ";
	}
    else
	{
	cout<<" \t Sorry you entered the wrong answer the correct answer is b. Batter luck Next Time "<<endl;
	cout<<" \t Press Enter! ";
	}
	getch();
	system ("CLS");

	object1.FOOTERFILE();
	object1.RESULTDECLARED();
    object1.GAMEFINISH();
	object1.ENJOY();
	
	getch();
 	return 0;
} 
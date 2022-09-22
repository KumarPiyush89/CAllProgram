#include<stdio.h>
void zero(int*w,int*h)
{
	*w=0;
	*h=0;
	
}
 void Heart_Rate(int speed,int w,int h)
 {
 	//   Stright upto 
 	for(int i=0;i<=350;i++)
 	{
 		for(int j=0;j<3;j++)
 		{
 			line(0,300+j,0+i,300+j);
		}
		delay(speed);
	 }
	 zer0(&w,&h);
	 //up upto 10
		for(int i=0;i<=10;i++)
		{
			for(int j=0;j<3;j++)
			{
				line(350+j,300,350+w+j,300-h);
			}
			if(i%2==0)
			{
				w++;
			}	
			h++;
			delay(speed);
		}
		zero(&w,&h);
		//Down upto 30
		for(int i=0;i<=30;i++)
		{
			for(int j=0;j<3;j++)
			{
				line(355+j,290,355+j+w,290+h);
			}
			if(i%4==0)
			{
				w++;
			}
			h++;
			delay(speed);
		}	 
		zer0(&w,&h);
		
		// up upto 150
		for(int i=0;i<=150;i++)
		{
			for(int j=0;j<3;j++)
			{
				line(362+j,320,362+j+w,320-h);
			}
			if(i%10==0)
			{
				w++;
			}
			h++;
			delay(speed);
		}
		zero(&w,&h);
		
		//down upto 400
		for(int i=0;i<=300;i++)
		{
			for(int j=0;j<3;j++)
			{
				line(377+j,170,377+w+j,170+h);
			}
			if(i%10==0)
			{
				w++;
			}
			h++;
			delay(speed);
		}
		zero(&w,&h);
		//u upto 180
		for(int i=0;i<=180;i++)
		{
			for(int j=0;j<3;j++)
			{
				line(407+j,407+w+j,470-h);
			}
			if(i%10==0)
			{
				w++;
			}
			h++;
			delay(speed);
		}
		zero(&w,&h);
		//down upto 10
		for(int i=0;i<=20;i++)
		{
			for(int j=0;j<3;j++)
			{
				line(425+j,290,425+w+j,290+h);
			}
			if(i%2==0)
			{
				w++;
			}
			h++;
			delay(speed);
		}
		zer0(&w,&h);
		//up upto 40
		for(int i=0;i<=40;i++)
		{
			for(int j=0;j<3;j++)
			{
				line(435+j,310,435+w+j,310-h);
			}
			if(i%4==0)
			{
				w++;
			}
			h++;
			delay(speed);
		}
		zero(&w,&h);
		//down upto 40
		for(int i=0;i<=40;i++)
		{
			for(int j=0;j<3;j++)
			{
				line(445+j,270,445+w+j,270+h);
			}
			if(i%8==0)
			{
				w++;
			}
			h++;
			delay(speed);
		}
		zero(&w,&h);
		//Straight upto 10
		for(int i=0;i<=10;i++)
		{
			for(int j=0;j<3;j++)
			{
				line(450,310+j,450+w,310+j);
			}
			w++;
			delay(speed);
		}
		zero(&w,&h);
		//down upto 30
		for(int i=0;i<30;i++)
		{
			for(int j=0;j<3;j++)
			{
				line(460+j,310,460+w+j,310+h);
			}
			if(i%8==0)
			{
				w++;
			}
			h++;
			delay(speed);
		}
		zero(&w,&h);
		//down upto 30
		for(int i=0;i<=30;i++)
		{
			for(int j=0;j<3;j++)
			{
				line(464+j,340,464+w+j,340-h);
			}
			if(i%8==0)
			{
				w++;
			}
			h++;
			delay(speed);
		}
		zero(&w,&h);
		//straight upto end
		for(int i=0;i<=240;i++)
		{
			for(int j=0;j<3;j++)
			{
				line(468,310+j,468+w,310+j);
			}
			w++;
			delay(speed);
		}
}
int main()
{
//	intwindow(700,600,"Heart RateMonitor",);
	int n=0;
	int w=0,h=0;
	setcolor(LIGHTGREEN);
	while(n<=10)
	{
		Heart_Rate(2,w,h);
		cleardevice();
		delay(10);
		n++;
	}
	getch();
	closegraph();
	 }	 
	 
 
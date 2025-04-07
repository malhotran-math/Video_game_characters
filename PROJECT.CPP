#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<fstream.h>
#include<stdio.h>
#include<string.h>


//
void main()
{	clrscr();
	int a,n,m,o,p,b1,b2,b3,b4,b5,b6,b7,b8,b9,b10,c1,c2,c3,c4,d1,d2,d3,d4,d5,d6,d7;
	

	cout<<endl<<endl;
	cout<<"Hello User,"<<endl<<endl<<endl;
	cout<<"Welcome to the database of some of your favourite heroes and villians!"<<endl;
	cout<<"Here you would find a wide range of characters of various franchises."<<endl;
	cout<<"We have only selected the main and the well known franchises.    "<<endl;
	cout<<"Select one and take a peek of your favourite characters!! :D"<<endl<<endl;
	cout<<"Press 1 to continue"<<endl;
	P:
	cin>>a;
	if(a==1)
	{
	 H:

				FILE *fz;
				char z1;
				fz=fopen("main.txt","r");
				while(1)
					{
					 z1=fgetc(fz);
					 if(z1==EOF)
					    break;
					 delay(10);
					 printf("%c",z1);
					}
				fclose(fz);
	}
	else
	{
	 cout<<"Please press 1"<<endl;
	 goto P;
	}
	cin>>n;

	clrscr();
	switch(n)
		{
			case 1: B:  FILE *fa;
				char f1;
				fa=fopen("DClist.txt","r");
				while(1)
					{
					 c1=fgetc(fa);
					 if(c1==EOF)
					    break;
					 delay(10);
					 printf("%c",c1);
					}
				fclose(fa);

				cin>>m;
				if(m>0&&m<99)
			       {	switch(m)
					{
					 case 1: clrscr(); FILE * F1;
						 char c1a;
						 F1=fopen("Batman.txt","r");
						 while(1)
						      {   c1a=fgetc(F1);
							  if(c1a==EOF)
							     break;
							  delay(15);
							  printf("%c",c1a);
						      }
						 fclose(F1);
						 cin>>b1;
						 switch(b1)
							{ case 102: clrscr(); goto B;
							  case 101: clrscr(); goto H;
							  default: clrscr(); goto E;
							}

					 case 2: clrscr(); FILE *F2;
						 char c1b;
						 F2=fopen("Superman.txt","r");
						 while(1)
							{  c1b=fgetc(F2);
							   if(c1b==EOF)
								break;
								delay(15);
							   printf("%c",c1b);
							}
						 fclose(F2);
						 cin>>b2;
						 switch(b2)
							{ case 102: clrscr(); goto B;
							  case 101: clrscr(); goto H;
							  default: clrscr(); goto E;
							}
					case 3: clrscr(); FILE *F3;
						 char c1c;
						 F3=fopen("flash.txt","r");
						 while(1)
							{  c1c=fgetc(F3);
							   if(c1c==EOF)
								break;
								delay(15);
							   printf("%c",c1c);
							}
						 fclose(F3);
						 cin>>b3;
						 switch(b3)
							{ case 102: clrscr(); goto B;
							  case 101: clrscr(); goto H;
							  default: clrscr(); goto E;
							}
					case 4: clrscr(); FILE *F4;
						 char c1d;
						 F4=fopen("wowo.txt","r");
						 while(1)
							{  c1d=fgetc(F4);
							   if(c1d==EOF)
								break;
								delay(15);
							   printf("%c",c1d);
							}
						 fclose(F4);
						 cin>>b4;
						 switch(b4)
							{ case 102: clrscr(); goto B;
							  case 101: clrscr(); goto H;
							  default: clrscr(); goto E;
							}
					case 5: clrscr(); FILE *F5;
						 char c1e;
						 F5=fopen("gl.txt","r");
						 while(1)
							{  c1e=fgetc(F5);
							   if(c1e==EOF)
								break;
								delay(15);
							   printf("%c",c1e);
							}
						 fclose(F5);
						 cin>>b5;
						 switch(b5)
							{ case 102: clrscr(); goto B;
							  case 101: clrscr(); goto H;
							  default: clrscr(); goto E;
							}
					case 6: clrscr(); FILE *F6;
						 char c1f;
						 F6=fopen("death.txt","r");
						 while(1)
							{  c1f=fgetc(F6);
							   if(c1f==EOF)
								break;
								delay(15);
							   printf("%c",c1f);
							}
						 fclose(F6);
						 cin>>b6;
						 switch(b6)
							{ case 102: clrscr(); goto B;
							  case 101: clrscr(); goto H;
							  default: clrscr(); goto E;
							}
					case 7: clrscr(); FILE *F7;
						 char c1g;
						 F7=fopen("joker.txt","r");
						 while(1)
							{  c1g=fgetc(F7);
							   if(c1g==EOF)
								break;
								delay(15);
							   printf("%c",c1g);
							}
						 fclose(F7);
						 cin>>b7;
						 switch(b7)
							{ case 102: clrscr(); goto B;
							  case 101: clrscr(); goto H;
							  default: clrscr(); goto E;
							}
					case 8: clrscr(); FILE *F8;
						 char c1h;
						 F8=fopen("harqui.txt","r");
						 while(1)
							{  c1h=fgetc(F8);
							   if(c1h==EOF)
								break;
								delay(15);
							   printf("%c",c1h);
							}
						 fclose(F8);
						 cin>>b8;
						 switch(b8)
							{ case 102: clrscr(); goto B;
							  case 101: clrscr(); goto H;
							  default: clrscr(); goto E;
							}

					 case 9: clrscr(); FILE *F9;
						 char c1i;
						 F9=fopen("lex.txt","r");
						 while(1)
							{
							 c1i=fgetc(F9);
							 if(c1i==EOF)
							 break;
							 delay(15);
							 printf("%c",c1i);
							}
						 fclose(F9);
						 cin>>b9;
						 switch(b9)
							{ case 102: clrscr(); goto B;
							  case 101: clrscr(); goto H;
							  default: clrscr(); goto E;
							}
					case 10: clrscr(); FILE *F10;
						 char c1j;
						 F10=fopen("sines.txt","r");
						 while(1)
							{  c1j=fgetc(F10);
							   if(c1j==EOF)
								break;
								delay(15);
							   printf("%c",c1j);
							}
						 fclose(F10);
						 cin>>b10;
						 switch(b10)
							{ case 102: clrscr(); goto B;
							  case 101: clrscr(); goto H;
							  default: clrscr(); goto E;
							}

					 }
			       }
			if(m>=100)
				{	switch(m)
					{
					 case 101: clrscr(); goto H;

					 default: clrscr(); goto E;
					}
				}

			case 2: clrscr();
				A:  FILE *fb;
				char g1;
				fb=fopen("dlist.txt","r");
				while(1)
					{
					 d1=fgetc(fb);
					 if(d1==EOF)
					    break;
					 delay(10);
					 printf("%c",d1);
					}
				fclose(fb);
				cin>>o;
				if(o>0&&o<99)
			       	{
				switch(o)
				{
					 case 1: clrscr(); FILE * G1;
						 char d1a;
						 G1=fopen("yoda.txt","r");
						 while(1)
						      {   d1a=fgetc(G1);
							  if(d1a==EOF)
							     break;
							  delay(15);
							  printf("%c",d1a);
						      }
						 fclose(G1);
						 cin>>c1;
						 switch(c1)
							{ case 102: clrscr(); goto A;
							  case 101: clrscr(); goto H;
							  default: clrscr(); goto E;
							}

					 case 2: clrscr(); FILE *G2;
						 char d1b;
						 G2=fopen("darky.txt","r");
						 while(1)
							{  d1b=fgetc(G2);
							   if(d1b==EOF)
								break;
								delay(15);
							   printf("%c",d1b);
							}
						 fclose(G2);
						 cin>>c2;
						 switch(c2)
							{ case 102: clrscr(); goto A;
							  case 101: clrscr(); goto H;
							  default: clrscr(); goto E;
							}
					case 3: clrscr(); FILE *G3;
						 char d1c;
						 G3=fopen("luky.txt","r");
						 while(1)
							{  d1c=fgetc(G3);
							   if(d1c==EOF)
								break;
								delay(15);
							   printf("%c",d1c);
							}
						 fclose(G3);
						 cin>>c3;
						 switch(c3)
							{ case 102: clrscr(); goto A;
							  case 101: clrscr(); goto H;
							  default: clrscr(); goto E;
							}
					case 4: clrscr(); FILE *G4;
						 char d1d;
						 G4=fopen("jacky.txt","r");
						 while(1)
							{  d1d=fgetc(G4);
							   if(d1d==EOF)
								break;
								delay(15);
							   printf("%c",d1d);
							}
						 fclose(G4);
						 cin>>c4;
						 switch(c4)
							{ case 102: clrscr(); goto A;
							  case 101: clrscr(); goto H;
							  default: clrscr(); goto E;
							}
					}
			 }

			if(o>=100)
				{	switch(o)
					{
					 case 101: clrscr(); goto H;

					 default: clrscr(); goto E;
					}
				}
			case 3: C:  FILE *fc;
				char e1;
				fc=fopen("mlist.txt","r");
				while(1)
					{
					 e1=fgetc(fc);
					 if(e1==EOF)
					    break;
					 delay(10);
					 printf("%c",e1);
					}
				fclose(fc);

				cin>>p;
				if(p>0&&p<99)
			       {	switch(p)
					{
					 case 1: clrscr(); FILE * H1;
						 char d1a;
						 H1=fopen("ca.txt","r");
						 while(1)
						      {   d1a=fgetc(H1);
							  if(d1a==EOF)
							     break;
							  delay(15);
							  printf("%c",d1a);
						      }
						 fclose(H1);
						 cin>>d1;
						 switch(d1)
							{ case 102: clrscr(); goto C;
							  case 101: clrscr(); goto H;
							  default: clrscr(); goto E;
							}

					 case 2: clrscr(); FILE *H2;
						 char d1b;
						 H2=fopen("IRONMAN.txt","r");
						 while(1)
							{  d1b=fgetc(H2);
							   if(d1b==EOF)
								break;
								delay(15);
							   printf("%c",d1b);
							}
						 fclose(H2);
						 cin>>d2;
						 switch(d2)
							{ case 102: clrscr(); goto C;
							  case 101: clrscr(); goto H;
							  default: clrscr(); goto E;
							}
					case 3: clrscr(); FILE *H3;
						 char d1c;
						 H3=fopen("ULTRON.txt","r");
						 while(1)
							{  d1c=fgetc(H3);
							   if(d1c==EOF)
								break;
								delay(15);
							   printf("%c",d1c);
							}
						 fclose(H3);
						 cin>>d3;
						 switch(d3)
							{ case 102: clrscr(); goto C;
							  case 101: clrscr(); goto H;
							  default: clrscr(); goto E;
							}
					case 4: clrscr(); FILE *H4;
						 char d1d;
						 H4=fopen("LOKI.txt","r");
						 while(1)
							{  d1d=fgetc(H4);
							   if(d1d==EOF)
								break;
								delay(15);
							   printf("%c",d1d);
							}
						 fclose(H4);
						 cin>>d4;
						 switch(d4)
							{ case 102: clrscr(); goto C;
							  case 101: clrscr(); goto H;
							  default: clrscr(); goto E;
							}
					case 5: clrscr(); FILE *H5;
						 char d1e;
						 H5=fopen("HULK.txt","r");
						 while(1)
							{  d1e=fgetc(H5);
							   if(d1e==EOF)
								break;
								delay(15);
							   printf("%c",d1e);
							}
						 fclose(H5);
						 cin>>d5;
						 switch(d5)
							{ case 102: clrscr(); goto C;
							  case 101: clrscr(); goto H;
							  default: clrscr(); goto E;
							}
					case 6: clrscr(); FILE *H6;
						 char d1f;
						 H6=fopen("THOR.txt","r");
						 while(1)
							{  d1f=fgetc(H6);
							   if(d1f==EOF)
								break;
								delay(15);
							   printf("%c",d1f);
							}
						 fclose(H6);
						 cin>>d6;
						 switch(d6)
							{ case 102: clrscr(); goto C;
							  case 101: clrscr(); goto H;
							  default: clrscr(); goto E;
							}
					case 7: clrscr(); FILE *H7;
						 char d1g;
						 H7=fopen("THANOS.txt","r");
						 while(1)
							{  d1g=fgetc(H7);
							   if(d1g==EOF)
								break;
								delay(15);
							   printf("%c",d1g);
							}
						 fclose(H7);
						 cin>>d7;
						 switch(d7)
							{ case 102: clrscr(); goto C;
							  case 101: clrscr(); goto H;
							  default: clrscr(); goto E;
							}
				}

			}
			if(p>=100)
				{	switch(p)
					{
					 case 101: clrscr(); goto H;

					 default: clrscr(); goto E;
					}
				}

		 


		}

	getch();
	E:
}

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
void table();
void information();
int gd=DETECT,gm,i;
char b;
void main()
{
table();
getch();
cleardevice();
information();
getch();
}

void table()
{
initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
 settextstyle(0,EMPTY_FILL,5);
setcolor(BLUE);
outtextxy(20,10,"PERIODIC TABLE");
setcolor(WHITE);   //periods
line(595,100,630,100);
line(0,100,35,100);
line(0,130,70,130);
line(420,130,630,130);
line(0,160,70,160);
line(420,160,630,160);
line(0,190,630,190);
line(0,220,630,220);
line(0,250,630,250);
line(0,280,630,280);
line(0,310,630,310);
//groups

line(0,100,0,310);
line(35,100,35,310);
line(70,130,70,310);
line(105,190,105,310);
line(140,190,140,310);
line(175,190,175,310);
line(210,190,210,310);
line(245,190,245,310);
line(280,190,280,310);
line(315,190,315,310);
line(350,190,350,310);
line(385,190,385,310);
line(420,130,420,310);
line(455,130,455,310);
line(490,130,490,310);
line(525,130,525,310);
line(560,130,560,310);
line(595,100,595,310);
line(630,100,630,310);
settextstyle(0,EMPTY_FILL,1);
setcolor(WHITE);
//group no

outtextxy(15,90,"1");
outtextxy(50,90,"2");
outtextxy(85,90,"3");
outtextxy(120,90,"4");
outtextxy(155,90,"5");
outtextxy(190,90,"6");
outtextxy(225,90,"7");
outtextxy(260,90,"8");
outtextxy(295,90,"9");
outtextxy(325,90,"10");
outtextxy(360,90,"11");
outtextxy(395,90,"12");
outtextxy(430,90,"13");
outtextxy(465,90,"14");
outtextxy(500,90,"15");
outtextxy(535,90,"16");
outtextxy(605,90,"18");
outtextxy(570,90,"17");
   //elements name
outtextxy(10,105,"1.");
outtextxy(10,120,"H");

outtextxy(10,135,"3.");
outtextxy(10,150,"Li");

outtextxy(10,165,"11.");
outtextxy(10,180,"Na");

outtextxy(10,195,"19.");
outtextxy(10,210,"K");

outtextxy(10,225,"37.");
outtextxy(10,240,"Rb");

outtextxy(10,255,"55.");
outtextxy(10,270,"Cs");

outtextxy(10,285,"88.");
outtextxy(10,300,"Fr");

outtextxy(45,135,"4.");
outtextxy(45,150,"Be");

outtextxy(45,165,"12.");
outtextxy(45,180,"Mg");

outtextxy(45,195,"20.");
outtextxy(45,210,"Ca");

outtextxy(45,225,"38.");
outtextxy(45,240,"Sr");

outtextxy(45,255,"56.");
outtextxy(45,270,"Ba");

outtextxy(45,285,"88.");
outtextxy(45,300,"Ra");

outtextxy(80,195,"21.");
outtextxy(80,210,"Sc");

outtextxy(80,225,"39.");
outtextxy(80,240,"Y");

outtextxy(80,255,"57-");
outtextxy(80,270,"71" );

outtextxy(80,285,"89-");
outtextxy(80,300,"103");

outtextxy(115,195,"22.");
outtextxy(115,210,"Ti");

outtextxy(115,225,"40.");
outtextxy(115,240,"Zr");

outtextxy(115,255,"72.");
outtextxy(115,270,"Hf" );

outtextxy(110,285,"104.");
outtextxy(115,300,"Rf");

outtextxy(150,195,"23.");
outtextxy(150,210,"V");

outtextxy(150,225,"41.");
outtextxy(150,240,"Nb");

outtextxy(150,255,"73.");
outtextxy(150,270,"Ta" );

outtextxy(145,285,"105.");
outtextxy(150,300,"Db");

outtextxy(185,195,"24.");
outtextxy(185,210,"Cr");

outtextxy(185,225,"42.");
outtextxy(185,240,"Mo");

outtextxy(185,255,"74.");
outtextxy(185,270,"W" );

outtextxy(180,285,"106.");
outtextxy(185,300,"Sg");

outtextxy(220,195,"25.");
outtextxy(220,210,"Mn");

outtextxy(220,225,"43.");
outtextxy(220,240,"Tc");

outtextxy(220,255,"75.");
outtextxy(220,270,"Re" );

outtextxy(215,285,"107.");
outtextxy(220,300,"Bh");

outtextxy(255,195,"26.");
outtextxy(255,210,"Fe");

outtextxy(255,225,"44.");
outtextxy(255,240,"Ru");

outtextxy(255,255,"76.");
outtextxy(255,270,"Os" );

outtextxy(250,285,"108.");
outtextxy(255,300,"Hs");

outtextxy(290,195,"27.");
outtextxy(290,210,"Co");

outtextxy(290,225,"45.");
outtextxy(290,240,"Rh");

outtextxy(290,255,"77.");
outtextxy(290,270,"Ir" );

outtextxy(285,285,"109.");
outtextxy(290,300,"Mt");

outtextxy(325,195,"28.");
outtextxy(325,210,"Ni");

outtextxy(325,225,"46.");
outtextxy(325,240,"Pd");

outtextxy(325,255,"78.");
outtextxy(325,270,"Pt" );

outtextxy(320,285,"110.");
outtextxy(325,300,"Ds");

outtextxy(360,195,"29.");
outtextxy(360,210,"Cu");

outtextxy(360,225,"47.");
outtextxy(360,240,"Ag");

outtextxy(360,255,"79.");
outtextxy(360,270,"Au" );

outtextxy(355,285,"111.");
outtextxy(360,300,"Rg");

outtextxy(395,195,"30.");
outtextxy(395,210,"Zn");

outtextxy(395,225,"48.");
outtextxy(395,240,"Cd");

outtextxy(395,255,"80.");
outtextxy(395,270,"Hg" );

outtextxy(390,285,"112.");
outtextxy(395,300,"Cn");

outtextxy(435,135,"5.");
outtextxy(435,150,"B");

outtextxy(430,165,"13.");
outtextxy(430,180,"Al");

outtextxy(430,195,"31.");
outtextxy(430,210,"Ga");

outtextxy(430,225,"49.");
outtextxy(430,240,"In");

outtextxy(430,255,"81.");
outtextxy(430,270,"Tl" );

outtextxy(425,285,"113.");
outtextxy(425,300,"Uut");

outtextxy(465,135,"6.");
outtextxy(465,150,"C");

outtextxy(465,165,"14.");
outtextxy(465,180,"Si");

outtextxy(465,195,"32.");
outtextxy(465,210,"Ge");

outtextxy(465,225,"50.");
outtextxy(465,240,"Sn");

outtextxy(465,255,"82.");
outtextxy(460,270,"Pb" );

outtextxy(460,285,"114.");
outtextxy(460,300,"Fl");

outtextxy(500,135,"7.");
outtextxy(500,150,"N");

outtextxy(500,165,"15.");
outtextxy(505,180,"P");

outtextxy(500,195,"33.");
outtextxy(500,210,"As");

outtextxy(500,225,"51.");
outtextxy(500,240,"Sb");

outtextxy(500,255,"83.");
outtextxy(500,270,"Bi" );

outtextxy(495,285,"115.");
outtextxy(495,300,"Uup");

outtextxy(535,135,"8.");
outtextxy(540,150,"O");

outtextxy(535,165,"16.");
outtextxy(540,180,"S");

outtextxy(535,195,"34.");
outtextxy(535,210,"Se");

outtextxy(535,225,"52.");
outtextxy(535,240,"Te");

outtextxy(535,255,"84.");
outtextxy(535,270,"Po" );

outtextxy(530,285,"116.");
outtextxy(535,300,"Lv");

outtextxy(570,135,"8.");
outtextxy(575,150,"F");

outtextxy(570,165,"17.");
outtextxy(570,180,"Cl");

outtextxy(570,195,"35.");
outtextxy(570,210,"Br");

outtextxy(570,225,"53.");
outtextxy(575,240,"I");

outtextxy(570,255,"85.");
outtextxy(570,270,"At" );

outtextxy(565,285,"117.");
outtextxy(565,300,"Uus");

outtextxy(605,105,"2.");
outtextxy(605,120,"He");

outtextxy(605,135,"10.");
outtextxy(605,150,"Ne");

outtextxy(605,165,"18.");
outtextxy(605,180,"Ar");

outtextxy(605,195,"36.");
outtextxy(605,210,"Kr");

outtextxy(605,225,"54.");
outtextxy(605,240,"Xe");

outtextxy(605,255,"86.");
outtextxy(605,270,"Rn" );

outtextxy(600,285,"118.");
outtextxy(600,300,"Uuo");

//lanthenoids actinoids
line(105,380,630,380);
line(105,410,630,410);
line(105,440,630,440);
line(105,380,105,440);
line(140,380,140,440);
line(175,380,175,440);
line(210,380,210,440);
line(245,380,245,440);
line(280,380,280,440);
line(315,380,315,440);
line(350,380,350,440);
line(385,380,385,440);
line(420,380,420,440);
line(455,380,455,440);
line(490,380,490,440);
line(525,380,525,440);
line(560,380,560,440);
line(595,380,595,440);
line(630,380,630,440);
//block name

line(0,85,70,85);
line(75,175,415,175);
line(75,175,75,178);
line(415,175,415,178);
line(70,85,70,88);
line(0,85,0,88);
line(70,85,70,88);
line(420,85,630,85);
line(420,85,420,88);
line(630,85,630,88);
line(105,365,630,365);
line(105,365,105,370);
line(630,365,630,370);
//elements of lenthenoids and actenoids
outtextxy(115,385,"57.");
outtextxy(115,400,"La.");

outtextxy(115,415,"89.");
outtextxy(115,430,"Ac");

outtextxy(150,385,"58.");
outtextxy(150,400,"Ce");

outtextxy(150,415,"90.");
outtextxy(150,430,"Th");

outtextxy(185,385,"59.");
outtextxy(185,400,"Pr");

outtextxy(185,415,"91.");
outtextxy(185,430,"Pa");

outtextxy(220,385,"60.");
outtextxy(220,400,"Nd");

outtextxy(220,415,"92.");
outtextxy(225,430,"U");

outtextxy(255,385,"61.");
outtextxy(255,400,"Pm");

outtextxy(255,415,"93.");
outtextxy(255,430,"Np");

outtextxy(290,385,"62.");
outtextxy(290,400,"Sm");

outtextxy(290,415,"94.");
outtextxy(290,430,"Pu");

outtextxy(325,385,"63.");
outtextxy(325,400,"Eu");

outtextxy(325,415,"95.");
outtextxy(325,430,"Am");

outtextxy(360,385,"64.");
outtextxy(360,400,"Gd");

outtextxy(360,415,"96.");
outtextxy(360,430,"Cm");

outtextxy(395,385,"65.");
outtextxy(395,400,"Tb");

outtextxy(395,415,"97.");
outtextxy(395,430,"Bk");

outtextxy(430,385,"66.");
outtextxy(430,400,"Dy");

outtextxy(430,415,"98.");
outtextxy(430,430,"Cf");

outtextxy(465,385,"67.");
outtextxy(465,400,"Ho");

outtextxy(465,415,"99.");
outtextxy(465,430,"Es");

outtextxy(500,385,"68.");
outtextxy(500,400,"Er");

outtextxy(495,415,"100.");
outtextxy(500,430,"Fm");

outtextxy(535,385,"69.");
outtextxy(535,400,"Tm");

outtextxy(530,415,"101.");
outtextxy(535,430,"Md");

outtextxy(570,385,"70.");
outtextxy(570,400,"Yb");

outtextxy(565,415,"102.");
outtextxy(570,430,"No");

outtextxy(605,385,"71.");
outtextxy(605,400,"Lu");

outtextxy(600,415,"103.");
outtextxy(605,430,"Lr");


 settextstyle(0,EMPTY_FILL,1);
setcolor(RED);
outtextxy(8,75,"s-block");
outtextxy(500,75,"p-block");
outtextxy(210,165,"d-block");
outtextxy(330,355,"f-block");
setcolor(YELLOW);
outtextxy(0,460,"Press enter to continue...");


settextstyle(0,EMPTY_FILL,1);
setcolor(GREEN);
outtextxy(0,390,"Lanthanides");
outtextxy(0,420,"Actinides");
}
void information()
{
int a;
printf("\n\t\t**********LONG FORM OF PERIODIC TABLE*********\t");
printf("\"----------------------------------------------------------------------------");
printf("\n1. TERMS RELATED TO PERIODIC TABLE");
printf("\n----------------------------------------------------------------------------");

clrscr();
printf("\n           **********TERMS RELATED TO THE PERIODIC TABLE**********");
printf("\n-------------------------------------------------------------------------------");
printf("\n 1.  Periodic tab      \t\t\t\t 2.  Element");
printf("\n 3.  Atom              \t\t\t\t 4.  Nucleus");
printf("\n 5.  Proton            \t\t\t\t 6.  Neutron");
printf("\n 7.  Electron          \t\t\t\t 8.  Energy level");
printf("\n 9.  Orbital           \t\t\t\t 10. Valence electron ");
printf("\n 11. Periods           \t\t\t\t 12. Groups");
printf("\n 13. Ionisation        \t\t\t\t 14. Cation");
printf("\n 15. Anion             \t\t\t\t 16. Atomic no.");
printf("\n 17. Mass no.          \t\t\t\t 18. Metal");
printf("\n 19. Non-metal         \t\t\t\t 20. Metalloid");
printf("\n 21. Alkali family     \t\t\t\t 22. Alkali earth metal");
printf("\n 23. Calchogen         \t\t\t\t 24. Halogen");
printf("\n 25. Noble gas         \t\t\t\t 26. Isotope");
printf("\n 27. Lanthanide        \t\t\t\t 28. Actinides");
printf("\n 29. Exit");
printf("\n==============================================================================");
do
{
printf("\n\nEnter your choice...  " ) ;
scanf("\n%d",&i);

if(i==1)
{
printf("\nPeriodic table => The periodic table is a tabular arrangment of the chemical");
printf("\n                  elements, ordered by their atomic number, electron ");
printf("\n                  configration and reoccuring chemical properties.");
printf("\n-------------------------------------------------------------------------------");
}

 else if(i==2)
	    {
printf("\n Element => A fundamental substance that has a unique atomic number on the");
printf("\n            periodic table. ");
printf("\n-------------------------------------------------------------------------------");
 }
 else if(i==3)
 {
printf("\n Atom => The smallest particle that has the properties of an element.");
printf("\n-------------------------------------------------------------------------------");
}
else if(i==4)
{
printf("\n Nucleus => The center of an atom; made up of protons and neutrons.");
printf("\n-------------------------------------------------------------------------------");
}
else if(i==5)
{
printf("\n Proton => A positively charged subatomic particle in the nucleus ");
printf("\n           of an atom.");
printf("\n-------------------------------------------------------------------------------");
}
else if(i==6)
{
printf("\n Neutron => A neutral subatomic particle in the nucleus of an atom.");
printf("\n-------------------------------------------------------------------------------");
}
else if(i==7)
{
printf("\n Electron => A negatively charged subatomic particle found in the energy");
printf("\n             level of an atom.");
printf("\n-------------------------------------------------------------------------------");
}
else if(i==8)
{
printf("\n Energy level => Any of the possible energies an electron may have in an");
printf("\n                 atom.");
printf("\n-------------------------------------------------------------------------------");
}
else if(i==9)
{
printf("\n Orbital => A region in an atom where there is a high probability. " );
printf("\n            of finding electrons.");
printf("\n-------------------------------------------------------------------------------");
}
else if(i==10)
{
printf("\n Valance electron => An electron in an outermost energy level of an atom.");
printf("\n-------------------------------------------------------------------------------");
}
else if(i==11)
{
printf("\n Periods => A horizontal row of element in the periodic table");
printf("\n-------------------------------------------------------------------------------");
}
else if(i==12)
{
printf("\n Group => A vertical column of element in the periodic table");
printf("\n-------------------------------------------------------------------------------");
}
else if(i==13)
{
printf("\n Ionization => The process of adding electrons to or removing electrons");
printf("\n               from an atoms or group of atoms.");
printf("\n-------------------------------------------------------------------------------");
}
else if(i==14)
{
printf("\n Cations => An ion with positive(+ve) charge.");
printf("\n -------------------------------------------------------------------------------");
}
else if(i==15)
{
printf("\n Anion => An ion with negative(-ve) charge.");
printf("\n-------------------------------------------------------------------------------");
}
else if(i==16)
{
printf("\n Atomic no. => The number of protons in the nucleus of an atom.");
printf("\n-------------------------------------------------------------------------------");
}
else if(i==17)
{
printf("\n Mass number => The total number of protons and neutrons in the nucleus");
printf("\n                of an atom.");
printf("\n-------------------------------------------------------------------------------");
}
else if(i==18)
{
printf("\n Metal => The elements that are good conductors of heat and electricity.");
printf("\n-------------------------------------------------------------------------------");
}
else if(i==19)
{
printf("\n Non-metal => The elements that are usually poor conductors of heat");
printf("\n              and elecricity.");
printf("\n-------------------------------------------------------------------------------");
}
else if(i==20)
{
printf("\n Metalloid => An element that has the properties of both metal and");
printf("\n              non metal.");
printf("\n-------------------------------------------------------------------------------");
}
else if(i==21)
{
printf("\n Alkali family => Group 1 elements. (H,LI,NA,K,RB,CS,FR");
printf("\n-------------------------------------------------------------------------------");
}
else if(i==22)
{
printf("\n Alkaline earth metal family => Group 2 elements.");
printf("\n				(Be,Mg,Ca,Sr,Ba,Ra)");
printf("-------------------------------------------------------------------------------");
}
else if(i==23)
{
printf("\n Chalcogen family => Group 16 elements.");
printf("\n                     (C,Si,Ge,Sn,Pb,Uuq");
printf("\n-------------------------------------------------------------------------------");
}
else if(i==24)
{
printf("\n Halogen family => Group 17 elements.");
printf("\n                   (F,Cl,Br,I,At) ");
printf("\n-------------------------------------------------------------------------------");
}
else if(i==25)
{
printf("\n Noble gas family => Group 18 elements.");
printf("\n                     (He,Ne,Ar,Kr,Xe,Rn");
printf("\n-------------------------------------------------------------------------------");
}
else if(i==26)
{
printf("\n Isotope => A different form of an element that varies by");
printf("\n             number neutrons in the nucleus.");
printf("\n-------------------------------------------------------------------------------");
}
else if(i==27)
{
printf("\n Lanthanide => Lanthanide are a family of 15 chemical elements");
printf("\n               whose atomic numbers range from 57 to 71");
printf("\n-------------------------------------------------------------------------------");
}
else if(i==28)
{
printf("\n Actinides => Actinides consists of a family of 14 elements that");
printf("\n              range in atomic numbers from 89 to 103.");
printf("\n-------------------------------------------------------------------------------");
}
else if(i==29)
{
exit(0);
printf("\n-------------------------------------------------------------------------------");
}
else
printf("\n invalid choice");
printf("\n Press 'O' or 'o' to continue... or any key to exit...");
scanf("%s",&b);
}
while(b=='o'||b=='O');
}


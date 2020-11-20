#include<stdio.h>
#include<string.h>
struct proshop
{
char name[10];
int Bw,Aw,Pew,Pcw;
int Br,Ar,Per,Pcr;
}shop;
void main()
{
FILE *fc;
fc=fopen("project1.txt","w");
int books,A4,Pens,Pencils,x,i,n,j,k;
printf("Enter the number of students");
scanf("%d",& n);
fprintf(fc,"\t\t\t\tWELCOME TO THE SHOP");
printf("\nThe name is %s", shop.name);
printf("\nThe numbers of books,A4,Pens,Pencils");
scanf("%d",& books);
scanf("%d",& A4);
scanf("%d",& Pens);
scanf("%d",& Pencils);
for(k=1;k<=n;k++)
{
fprintf(fc,"\n\n\t\tNAME\tBooks\tA4s\tPens\tPencils");
fprintf(fc,"\n\t\t\t%d\t%d\t%d\t%d",books,A4,Pens,Pencils);
fprintf(fc,"\n________________________________________________________________________________________________________________________________");
printf("Enter the name");
gets(shop.name);
fprintf(fc,"\n%s",shop.name);
for(i=1;i<=2;i++)
{

printf("\nEnter the choice");
scanf("%d",&x);
switch(x)
{
case 1:
printf("\nOnly %d number of books is available",books);
printf("So enter any valid number under %d",books);
scanf("%d",&shop.Bw);
for(j=1;j<=shop.Bw;j++)
{
books--;
}
fprintf(fc,"\n\t\t\t%d(%d)\t%d(0)\t%d(0)\t%d(0)\t",books,shop.Bw,A4,Pens,Pencils);
break;
case 2:
printf("\nOnly %d number of A4 is available",A4);
printf("\nSo enter any valid number under %d",A4);
scanf("%d",&shop.Aw);
for(j=1;j<=shop.Aw;j++)
{
A4--;
}
fprintf(fc,"\n\t\t\t%d(0)\t%d(%d)\t%d(0)\t%d(0)",books,A4,shop.Aw,Pens,Pencils);
break;
case 3:
printf("\nOnly %d number of Pens is available",Pens);
printf("\nSO enter any valid number under %d",Pens);
scanf("%d",& shop.Pew);
for(j=1;j<=shop.Pew;j++)
{
Pens--;
}
fprintf(fc,"\n\t\t\t%d(0)\t%d(0)\t%d(%d)\t%d",books,A4,Pens,shop.Pew,Pencils);
break;
case 4:
printf("\nOnly %d number of pencils is avilable",Pencils);
printf("\nSo enter any valid  number under %d",Pencils);
scanf("%d",& shop.Pcw);
for(j=1;j<=shop.Pcw;j++)
{
Pencils--;
}
fprintf(fc,"\n\t\t\t%d(0)\t%d(0)\t%d(0)\t%d(%d)",books,A4,Pens,Pencils,shop.Pcw);
break;
default :printf("Enter any valid number fron 1 to 4");
break;
}}

if(books<=5)
{
printf("\nThe order needs to be placed");
printf("\nEnter the number of books required");
scanf("%d",& shop.Br);
books=books+shop.Br;
printf("\nThe new number of books is %d",books);
}
if(A4<=5)
{
printf("\nThe order needs to be placed ");
printf("\nEnter the number of A4 required");
scanf("%d",& shop.Ar);
A4=A4+shop.Ar;
printf("\nThe new number of books is %d",A4);
}
if(Pens<=0)
{
printf("\nThe order needs to be placed");
printf("\nEnter the number of pens to be placed");
scanf("%d",&shop.Per);
Pens=Pens+shop.Per;
printf("\nThe new number of books is %d",Pens);
}
if(Pencils<=5)
{
printf("\nThe order needs to be placed");
printf("\nEnter the number of pencils to be placed");
scanf("%d",&shop.Pcr);
Pencils=Pencils+shop.Pcr;
printf("\nThe new number of pencils is %d",Pencils);
}
if(books>5 && A4>5 && Pens>5 && Pencils>5)
{
printf("\nThe number of objects is greater the 5");
}
fprintf(fc,"\n\n\t\t\t\tThe new number of stationary after placing orders");
fprintf(fc,"\n\t\t\t%d\t%d\t%d\t%d",books,A4,Pens,Pencils);
}
fclose(fc);
}


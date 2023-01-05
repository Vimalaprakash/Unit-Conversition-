#include <stdio.h>
void display_option();
void Length();
void Mass();
void Volume();
int main()
{
	int op;
	printf("1.Length\n");
	printf("2.Mass\n");
	printf("3.Volume\n");
	printf("Enter the Option:");
	scanf("%d",&op,"\n");
	switch(op){
		case 1:
			Length();
			break;
		case 2:
			Mass();
			break;
		case 3:
			Volume();
			break;
		default:
			printf("Entered Option is Worng\n");
	}
	
}
void Mass(){
	int op;
	printf("1.Kilogram to Gram\n");
	printf("2.Gram to Kilogram\n");
	printf("3.Gram to Centigram\n");
	printf("4.Centigram to Gram\n");
	printf("5.Garm to Millgram\n");
	printf("6.Milligram to Gram\n");
	printf("Enter the Option:");
	scanf("%d",&op,"\n");
	switch(op){
		case 1:
			printf("Kilogram to Gram\n");
			float a,b;
			printf("Enter the Kilogram:");
			scanf("%f",&a,"\n");
			b=a*1000;
			printf("Result:");
			printf("%.1f g",b);
			break;
		case 2:
			printf("Garm to Kilogram\n");
			float c,d;
			printf("Enter the Garm:");
			scanf("%f",&c);
			d=c/1000;
			printf("Result:");
			printf("%.4f k",d);
			break;
		case 3:
			printf("Gram to Centigram\n");
			float e,f;
			printf("Enter the Gram:");
			scanf("%f",&e);
			f=e*100;
			printf("Result:");
			printf("%.1f cg",f,"\n");
			break;
		case 4:
			printf("Centigram to Gram\n");
			float g,h;
			printf("Enter the Centigram");
			scanf("%f",&g,"\n");
			h=g/100;
			printf("Result:");
			printf("%.4f g",h,"\n");
			break;
		case 5:
			printf("Gram to Millgram\n");
			float i,j;
			printf("Enter the gram:");
			scanf("%f",&i,"\n");
			j=i*1000;
			printf("Result:");
			printf("%.1f mg",j,"\n");
			break;
		case 6:
			printf("Milligram to Gram\n");
			float k,l;
			printf("Enter the Milligram:");
			scanf("%f",&k,"\n");
			l=k/1000;
			printf("Result");
			printf("%.4f g",l,"\n");
			break;
			default:
				printf("Entered Option is worng\n");
	}
}
void Length(){
	int op;
	printf("1.Kilometer to Meter\n");
	printf("2.Meter to Kilometer\n");
	printf("3.Meter to Centimeter\n");
	printf("4.Centimeter to Meter\n");
	printf("5.Meter to Millimeter\n");
	printf("6.Millimeter to Meter\n");
	printf("Enter the Option:");
	scanf("%d",&op,"\n");
	switch(op){
		case 1:
			printf("Kilometer to Meter\n");
			float a,b;
			printf("Enter the Kilometer:");
			scanf("%f",&a,"\n");
			b=a*1000;
			printf("Result:");
			printf("%.1f m",b,"\n");
			break;
		case 2:
			printf("Meter to Kilometer\n");
			float c,d;
			printf("Enter the Meter:");
			scanf("%f",&c,"\n");
			d=c/1000;
			printf("Result");
			printf("%.4f k",d,"\n");
			break;
		case 3:
			printf("Meter to Centimeter\n");
			float e,f;
			printf("Enter the Meter:");
			scanf("%f",&e,"\n");
			f=e*100;
			printf("Result:");
			printf("%.1f cm",f,"\n");
			break;
		case 4:
			printf("Centimeter to Meter\n");
			float g,h;
			printf("Enter the Centimeter:");
			scanf("%f",&g,"\n");
			h=g/100;
			printf("Result:");
			printf("%.4f m",h,"\n");
			break;
		case 5:
			printf("Meter to Millimeter\n");
			float i,j;
			printf("Enter the Meter:");
			scanf("%f",&i,"\n");
			j=i*1000;
			printf("Result:");
			printf("%.1f mm",j,"\n");
			break;
		case 6:
			printf("Millimeter to Meter\n");
			float k,l;
			printf("Enter the Millimeter:");
			scanf("%f",&k,"\n");
			l=k/1000;
			printf("Result:");
			printf("%.4f m",l,"\n");
			break;
		default:
			printf("Entered Option is wrong\n");
	}	
}
void Volume(){
	printf("1.Kilolitre to Litre\n");
	printf("2.Litre to Kilolitre\n");
	printf("3.Litre to Centiliter\n");
	printf("4.Centiliter to Liter\n");
	printf("5.Liter to Milliliter\n");
	printf("6.Milliter to Liter\n");
	int op;
	printf("Enter the Option:");
	scanf("%d",&op,"\n");
	switch(op){
		case 1:
			printf("Kilolitre to Litre\n");
			float a,b;
			printf("Enter the Kiloliter:");
			scanf("%f",&a,"\n");
			b=a*1000;
			printf("Result:");
			printf("%.1f l",b,"\n");
			break;
		case 2:
			printf("Litre to Kilolitre\n");
			float c,d;
			printf("Enter the Litre:\n");
			scanf("%f",&c);
			d=c/1000;
			printf("Result:");
			printf("%.4f kl",d,"\n");
			break;
		case 3:
			printf("Litre to Centilitre\n");
			float e,f;
			printf("Enter the Litre");
			scanf("%f",&e);
			f=e*100;
			printf("Result:");
			printf("%.1f cl",f,"\n");
			break;
		case 4:
			printf("Centilitre to litre\n");
			float g,h;
			printf("Enter the Centilitre:");
			scanf("%f",&g,"\n");
			h=g/100;
			printf("Result:");
			printf("%4.f l",h,"\n");
			break;
		case 5:
			printf("Liter to Millitre\n");
			float i,j;
			printf("Enter the Liter:");
			scanf("%f",&i,"\n");
			j=i*1000;
			printf("Result:");
			printf("%.1f ml",j,"\n");
			break;
		case 6:
			printf("Millitre to Liter\n");
			float k,l;
			printf("Enter the Millitre:");
			scanf("%f",&k,"\n");
			l=k/1000;
			printf("Result:");
			printf("%.4f l",l,"\n");
			break;
		default:
			printf("Entered input in wrong");
	}
	
	
}

#include<stdio.h> 

int main(){

	int day, month, year, sum, leap;  

	printf("-----------------------------------\n");	

	printf("請輸入西元幾年幾月幾日：");  

	scanf("%d%d%d",&year,&month,&day);

	printf("-----------------------------------\n");

	switch(month)

	{   

		case 1:sum = 0;break;    

		case 2:sum = 31;break; //ERROR01   

		case 3:sum = 59;break; //ERROR02   

		case 4:sum = 90;break; //ERROR03  

		case 5:sum = 120;break;  

		case 6:sum = 151;break;   

		case 7:sum = 181;break;   

		case 8:sum = 212;break;  

		case 9:sum = 243;break;  

		case 10:sum = 273;break; 

		case 11:sum = 304;break; 

		case 12:sum = 334;break; 

		default:printf("data error!");break; 

	}

	    sum = sum + day;

	if(year%400==0||(year%4==0&&year%100!=0))

	{  

		leap = 1; //ERROR04 

	}

	else{

		leap = 0; //ERROR05

	}

	if(leap == 1&&month > 2){  

		sum++;  

	}

	printf("這一天是這一年的第%d天",sum);

}

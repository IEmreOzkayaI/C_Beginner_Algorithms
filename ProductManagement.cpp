#include <stdio.h>
//int main(){
//	FILE *fp;
//	fp=fopen("Goods.txt","w");
//	int pnumber=1;
//	char pname[30];
//	float price;
//	int oquantity;
//	printf("*** This program get information up to number entered 0 ***\n\n");
//	while(pnumber!=0)
//	{
//		printf("Enter Product Number :");
//		scanf("%d",&pnumber);
//		
//		printf("Enter Product Name :");
//		scanf("%s",pname);
//		
//		printf("Enter price :");
//		scanf("%f",&price);;
//		
//		printf("Enter order quantity :");
//		scanf("%d",&oquantity);
//		
//		printf("\n");
//		
//		if(pnumber!=0)
//		fprintf(fp,"%d %s %.2f %d ",pnumber,pname,price,oquantity);
//	}
//	fclose(fp);
//	return 0 ;
//}
int main(){
	FILE *fp;
	fp=fopen("Goods.txt","r");
	int pnumber=1;
	char pname[30];
	float price;
	int oquantity;
	printf("*** This program get information up to number entered 0 ***\n\n");
	while(!feof(fp))
	{
		printf("Enter Product Number :");
		fscanf(fp,"%d",&pnumber);
		printf("%d\n",pnumber);
		printf("Enter Product Name :");
		fscanf(fp,"%s",&pname);
		printf("%s\n",pname);
		printf("Enter price :");
		fscanf(fp,"%f",&price);;
		printf("%.2f\n",price);
		printf("Enter order quantity :");
		fscanf(fp,"%d",&oquantity);
		printf("%d",oquantity);
		printf("\n\n");
		
	}
	fclose(fp);
	return 0 ;
}

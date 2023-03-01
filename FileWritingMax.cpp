#include <stdio.h>


//int main(){
//	FILE *fp;
//	int i ;
//	fp = fopen("FileOpening.txt","w");
//	// Bu dosya çaðýrým þekli her veri alýndýðýnda bir öncekini silmektedir.
//	int num;
//	printf("Please Enter Values : \n");
//	for(i = 0 ; i < 5 ; i ++){
//		scanf("%d",&num);
//		fprintf(fp,"%d\n",num);
//		// bu da dosyaya yazdýrma þeklidir.
//	}
//	fclose(fp);
//	return 0 ;
//}

//int main(){
//	FILE *fp;
//	int i ;
//	fp = fopen("FileOpening.txt","a");
//	// Bu dosya çaðýrým þekli her veri alýndýðýnda bir öncekini de tutmaktadýr tek deðiþen "w" yerine "a" yazýlýr.
//	int num;
//	printf("Please Enter Values : \n");
//	for(i = 0 ; i < 5 ; i ++){
//		scanf("%d",&num);
//		fprintf(fp,"%d\n",num);
//		// bu da dosyaya yazdýrma þeklidir.
//	}
//	fclose(fp);
//	return 0 ;
//}

//int main(){
//	FILE *fp;
//	int i ;
//	fp = fopen("FileOpening.txt","r");
//	// Bu dosya çaðýrým þekli her dosyada bulunan veriyi ekrana çekmektedir.
//	int num;
//	printf("Please Enter Values : \n");
////	for(i = 0 ; i < 5 ; i ++){
////		fscanf(fp,"%d",&num);
////		// bu da dosyaya çaðrým þeklidir.
////		printf("%d \n",num);
////		// dosyadan alýnan her datayý yazýrma komutudur.
////	
//// BU DURUMUN AYNISINI WHÝLE ÝLE DE YAPABÝLÝRÝZ.
//	while(!feof(fp)){
//		fscanf(fp,"%d",&num);
//		// bu da dosyaya çaðrým þeklidir.
//		printf("%d \n",num);
//		// dosyadan alýnan her datayý yazýrma komutudur.
//	}
//	fclose(fp);
//	return 0 ;
//}


int main(){
	FILE *fp,*fp1;
//	fp = fopen("MidtermExam.txt","r");
	fp1 = fopen("MidtermBigger60.txt","r");
	int notes=1,max=0;
	int cntr=0 ;
//	printf("If you enter 0 program will be stop !!!\n\n");
//	while(notes!=0)
//	{
//		printf("Please Enter Midterm's Notes : ");
//		scanf("%d",&notes);
//		printf("\n");
//		if(notes!=0) fprintf(fp,"%d ",notes);
//		else if(notes==0)  fprintf(fp,"%d",notes);	
//	
//}
	//Bu kýsma kadar kullanýcýdan veri alýp dosyaya yazdýrdýk.
	// Burdan sonra dosyadaki veriyi alýp not ortalamasýný hesaplayacaðýz.
	
//	while(!feof(fp)){
//		
//		fscanf(fp,"%d",&notes);
////		 bu da dosyaya çaðrým þeklidir.
//		cntr++;
//		printf("%d\n",notes);
////		 dosyadan alýnan her datayý yazýrma komutudur.
//		if(notes>=60)
//			fprintf(fp1,"%d ",notes);
//		
//	}
	while(!feof(fp1)){
		
		fscanf(fp1,"%d",&notes);
//		 bu da dosyaya çaðrým þeklidir.
		cntr++;
		printf("%d\n",notes);
//		 dosyadan alýnan her datayý yazýrma komutudur.
}

	
//	fclose(fp);
	fclose(fp1);
		
	return 0 ;

}




#include <stdio.h>


//int main(){
//	FILE *fp;
//	int i ;
//	fp = fopen("FileOpening.txt","w");
//	// Bu dosya �a��r�m �ekli her veri al�nd���nda bir �ncekini silmektedir.
//	int num;
//	printf("Please Enter Values : \n");
//	for(i = 0 ; i < 5 ; i ++){
//		scanf("%d",&num);
//		fprintf(fp,"%d\n",num);
//		// bu da dosyaya yazd�rma �eklidir.
//	}
//	fclose(fp);
//	return 0 ;
//}

//int main(){
//	FILE *fp;
//	int i ;
//	fp = fopen("FileOpening.txt","a");
//	// Bu dosya �a��r�m �ekli her veri al�nd���nda bir �ncekini de tutmaktad�r tek de�i�en "w" yerine "a" yaz�l�r.
//	int num;
//	printf("Please Enter Values : \n");
//	for(i = 0 ; i < 5 ; i ++){
//		scanf("%d",&num);
//		fprintf(fp,"%d\n",num);
//		// bu da dosyaya yazd�rma �eklidir.
//	}
//	fclose(fp);
//	return 0 ;
//}

//int main(){
//	FILE *fp;
//	int i ;
//	fp = fopen("FileOpening.txt","r");
//	// Bu dosya �a��r�m �ekli her dosyada bulunan veriyi ekrana �ekmektedir.
//	int num;
//	printf("Please Enter Values : \n");
////	for(i = 0 ; i < 5 ; i ++){
////		fscanf(fp,"%d",&num);
////		// bu da dosyaya �a�r�m �eklidir.
////		printf("%d \n",num);
////		// dosyadan al�nan her datay� yaz�rma komutudur.
////	
//// BU DURUMUN AYNISINI WH�LE �LE DE YAPAB�L�R�Z.
//	while(!feof(fp)){
//		fscanf(fp,"%d",&num);
//		// bu da dosyaya �a�r�m �eklidir.
//		printf("%d \n",num);
//		// dosyadan al�nan her datay� yaz�rma komutudur.
//	}
//	fclose(fp);
//	return 0 ;
//}


int main(){
	FILE *fp;
	fp = fopen("MidtermExam.txt","r");
	int notes=1,sum=0;
	float av ;
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
	//Bu k�sma kadar kullan�c�dan veri al�p dosyaya yazd�rd�k.
	// Burdan sonra dosyadaki veriyi al�p not ortalamas�n� hesaplayaca��z.
	
	while(!feof(fp)){
		
		fscanf(fp,"%d",&notes);
//		 bu da dosyaya �a�r�m �eklidir.
		cntr++;
		printf("%d\n",notes);
//		 dosyadan al�nan her datay� yaz�rma komutudur.
		sum=sum + notes;
		
	}
	
	fclose(fp);
	av = sum / (cntr-1) ;
	printf("Sum %d ",sum);
	printf("Counter %d ",cntr-1);
	printf("Avarage %.2f ",av);
	return 0 ;

}




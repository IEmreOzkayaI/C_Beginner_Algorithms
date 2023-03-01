//#include <stdio.h>
//// Bu struct yapı oluşturmanın ilk yoludur.
//struct Student{
//	char name[20];
//	char surname[20];
//	int studentNumber;
//};
//
//int main(){
//	struct Student student0 = {"Emre","Ozkaya",1905};
//	printf("%s %s %d",student0.name,student0.surname,student0.studentNumber);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//// Bu struct yapı oluşturmanın ikinci yoludur. String ifadeler içerdiğinde direk yazamam strcpy yapmam gerekir.
//struct Student{
//	char name[20];
//	char surname[20];
//	int studentNumber;
//}student;
//
//int main(){
//	student ;
//	strcpy(student.name,"Emre");
//	strcpy(student.surname,"Ozkaya");
//	student.studentNumber = 1905 ;
//	printf("%s %s %d",student.name,student.surname,student.studentNumber);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//// Bu struct yapı oluşturmanın üçüncü yoludur.birbilerine eşitlersem diğerindeki tüm değerler öbürünede geçer.
//struct Student{
//	char name[20];
//	char surname[20];
//	int studentNumber;
//}student,student1;
//
//int main(){
//	student ;
//	strcpy(student.name,"Emre");
//	strcpy(student.surname,"Ozkaya");
//	student.studentNumber = 1905 ;
//	student1 = student;
//	printf("%s %s %d",student.name,student.surname,student.studentNumber);
//	printf("\n\n");	
//	printf("%s %s %d",student1.name,student1.surname,student1.studentNumber);
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//// Bu struct yapı oluşturmanın üçüncü yoludur.birbilerine eşitlersem diğerindeki tüm değerler öbürünede geçer.
//struct Student{
//	char name[20];
//	char surname[20];
//	int studentNumber;
//};
//
//int main(){
//	struct Student student = {"Emre","OZKAYA",1905};
//	struct Student student1 = student ;
//	
//	printf("%s %s %d\n",student.name,student.surname,student.studentNumber);
//	printf("%s %s %d",student1.name,student1.surname,student1.studentNumber);
//
//
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//// Bu struct yapı oluşturmanın üçüncü yoludur.birbilerine eşitlersem diğerindeki tüm değerler öbürünede geçer.
//struct Adress{
//	char cad[15];
//	char mah[15];
//	char sok[15];
//	char apt[15];
//};
//
//struct Student{
//	char name[20];
//	char surname[20];
//	int studentNumber;
//	struct Adress adress;
//};
//
//
//
//int main(){
//	struct Student student0 = {"Emre","Ozkaya",1905,"Alibey"};
//	strcpy(student0.adress.apt,"Yonca");
//	//Bu iki şekilde de eklenebilir ister direk yaz ister ayrı ekle iç içe olsa bile.Tek fark yazdırırken adresi belirle onun dışında aynı
//	
//	printf("%s %s %d %s %s\n",student0.name,student0.surname,student0.studentNumber,student0.adress.cad,student0.adress.apt);
//
//
//
//	return 0;
//}


//#include <stdio.h>
//// Bu struct yapı oluşturmanın üçüncü yoludur.birbilerine eşitlersem diğerindeki tüm değerler öbürünede geçer.
//
//struct Student{
//	char name[20];
//	char surname[20];
//	int studentNumber;
//	
//};
//
//
//
//int main(){
//	struct Student student0[3];
//	int i ;
//	for(i=0;i<3;i++)
//	{
//		printf("Enter Information of %d student : ",i+1);
//		scanf("%s %s %d",&student0[i].name,&student0[i].surname,&student0[i].studentNumber);
//	}
//	printf("\n");
//		for(i=0;i<3;i++)
//	{
//		printf(" Information of %d student : %s %s %d \n",i+1,student0[i].name,student0[i].surname,student0[i].studentNumber);
//	}
//	
//	return 0;
//}




#include <stdio.h>
// Bu struct yapı oluşturmanın üçüncü yoludur.birbilerine eşitlersem diğerindeki tüm değerler öbürünede geçer.

struct Student{
	char name[20];
	char surname[20];
	int studentNumber;
	
};

void get(struct Student student){
	printf("Information Of Student : %s %s %d",student.name,student.surname,student.studentNumber);
}

struct Student getInformation(){
	struct Student infrmtn;
	printf("Enter Informations : ");
	scanf("%s %s %d",&infrmtn.name,&infrmtn.surname,&infrmtn.studentNumber);
	
	return infrmtn ;
}
int main(){
	
	struct Student student = getInformation();
	printf("Information Of Student : %s %s %d",student.name,student.surname,student.studentNumber);

	
	return 0;
}


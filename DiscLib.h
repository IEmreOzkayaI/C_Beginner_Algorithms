
void disc(float a , float b ,float c){
  float x1,x2,d;
  if (a==0) {
    printf("It is not 2nd degree!\n");

  }
else{
d=(b*b)-(4*a*c);
if (d<0) {
  printf("No real roots\n" );
}
else if(d==0){
  x1=(-b)/2*a;
  x2=x1;
  printf("There are two equal roots : %f %f\n",x1,x2);
}
else{
  x1=((-b)-sqrt(d))/2*a;
  x2=((-b)+sqrt(d))/2*a;
  printf("There are two different roots %f %f\n",x1,x2);
}

}

}

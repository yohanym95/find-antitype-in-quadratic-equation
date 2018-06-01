#include<stdio.h>
#include<math.h>
 int main(){
 	float a,b,c,y,x,v,x1,x2,e,d;
 	float m,n;
 	printf("give your value for a : ");
 	scanf("%f", &a);
 	printf("give your value for b : ");
 	scanf("%f", &b);
 	printf("give your value for c : ");
 	scanf("%f", &c);
 	
	 
 	y= a*x*x+b*x+c;
 	v= b*b-4*a*c;
 	m=sqrt(v);
 
 	x1=(-b+m)/(2*a);
 	x2=(-b-m)/(2*a);
 	
 	if(v>0){
	 	printf("positive: %f %f\n",x1,x2);
	 }else if(v==0){
 	    printf("postive and zero : %f %f\n",x1,x2);	
 	}else{
	 	printf("negative no antitype: %f %f\n",x1,x2);
	 }
	 printf("%f",m);
	 printf("%f",n);
	 
 	
 	
 	
 	
 	
 	
 }

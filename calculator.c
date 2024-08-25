#include<stdio.h>
#include<math.h>
#include<string.h>
                         
//Function for addition
double addition(int var1, int var2){
double sum=var1+var2;
printf("sum= %lf\n",sum);

}

//function for subtraction
double subtraction(int var1,int var2){
double difference;
if(var1>var2){
difference=var1-var2;
}else{
difference=var2-var1;
}
printf("\ndifference= %lf",difference);
}

//function for multiplication
double multiplication(int var1, int var2){
double product=var1*var2;
printf("product= %lf\n",product);
}

//Function for division
double division(int var1, int var2){
double quotient=var1/var2;
printf("quotient= %lf\n",quotient);
}

//Function for squareroot
double squareroot(int var1){
double root=sqrt(var1);
printf("squareroot= %lf",root);
}

//function for square
double squared(int var1){
double square=pow(var1,2);
printf("square= %lf",square);
}

int main() {

char calculate;   //storing operators 
int num,num1,num2;
char trig[4];
double angle;

printf("+ for Addition\n");
printf("- for Subtraction\n");
printf("* for Multiplication\n");
printf("/ for Division\n");
printf("^ for square\n");
printf("s for squareroot\n");
printf("t for trigonometry\n");


printf("Choose an operation: ");
scanf(" %c",&calculate);

if(calculate=='+' || calculate=='-'|| calculate=='*' || calculate=='/'){
printf("Enter two numbers: ");
scanf("%d %d",&num1 ,&num2);


switch(calculate){  //switch for choosing operators
case'+' :
addition(num1,num2);  //Addition function call
break;
case'-':
subtraction(num1,num2); //Subtraction function call
break;
case'*':
multiplication(num1,num2); //multiplication function call
break;
case'/':
division(num1,num2); // Division function call
break;
default:
break;
}
}
else if(calculate=='s'){
printf("Enter Number: ");
scanf("%d",&num);
squareroot(num); //Squareroot function call

}
else if(calculate=='^'){
printf("Enter Number: ");
scanf("%d",&num);
squared(num);  //square function call
}
else if(calculate=='t'){
printf("Enter trig function(cos,sin,tan): ");
scanf("%3s", &trig);

printf("Enter  the angle in degrees= ");
scanf("%lf",&angle);
double radians=angle*(M_PI/180);
printf("Angle in radians= %lf\n",radians);

if(strcmp(trig,"cos")==0){          ////////////////////////////////////////////
printf("cos(%lf)=%lf",angle,cos(radians));    
}
else if(strcmp(trig,"sin")==0){
printf("sin(%lf)=%lf",angle,sin(radians)); 
}                                                                         //trig function statements
else if(strcmp(trig,"tan")==0){
printf("tan(%lf)=%lf",angle,tan(radians)); 
}
else{
printf("Invalid trigonometric function\n");
}
}                    ////////////////////////////////////////////////
else{
printf("Invalid  Input");
}

return 0;

}

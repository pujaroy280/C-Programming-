//Program 1 
// Example program 
#include <iostream> 
#include <string> 
using namespace std; 
//program 2 
// print your address 
int main(){ 
cout<<"\tJoe\\\'\t'Jessie\n"; 
return 0; 
} 
//Program 2 
// Example program 
#include <iostream> 
#include <string> 
using namespace std; 
//program 2 
// print your address 
int main(){ 
cout<<"My address is \n"; 
cout<<"300 jay st\n"; 
cout<<"brooklyn NY 11204\n"; 
return 0; 
} 
//Program 3 
// Example program 
#include <iostream> 
#include <string> 
using namespace std; 
//program 2 
// print your address
int main(){ 
cout<<"My address is \n 50 34th 47st.\n queens NY 11377\n"; return 0; 
} 
//Program 4 
// Example program 
#include <iostream> 
#include <string> 
using namespace std; 
int main(){ 
cout <<"\tJoe\"\"\\\\Jessy\t/\\\"\n"; 
return 0; 
} 
//Program 5 
// Example program 
#include <iostream> 
#include <string> 
int main(){ 
std::cout << "\t 5+9="; 
std::cout<< 5+9; 
return 0; 
return 0; 
} 
//Program 6 
// Example program 
#include <iostream> 
#include <string> 
int main(){ 
std::cout<<"\t"<<5<<"+"<<9<<"="<<5+9<<"\n"; 
return 0; 
}
//Program 7 
// Example program 
#include <iostream> 
#include <string> 
int main(){ 
std::cout<<"\t"; 
std::cout<<5; 
std::cout<<"+"; 
std::cout<<9; 
std::cout<<"="; 
std::cout<< 5+9; 
std::cout<<"\n"; 
return 0; 
} 
//Program 8 
// Example program 
#include <iostream> 
#include <string> 
using namespace std; 
//program 8 
// tp print the following output using variables // 5+9=14 
int main() 
{ int a,b; 
a=5; 
b=9; 
cout<<"\t"; 
cout<<a<<"+"<<b<<"="<<a+b<<endl; return 0; 
} 
//Program 9 
// Example program 
#include <iostream> 
#include <string> 
using namespace std; 
//program 9 other verson of program5
// tp print the following output using variables // 5+9=14 
int main() 
{ int a,b,sum; 
a=5; 
b=9; 
sum=a+b; 
cout<<"\t"; 
cout<<a<<"+"<<b<<"="<<sum<<endl; return 0; 
} 
//Program 10 
// Example program 
#include <iostream> 
#include <string> 
using namespace std; 
//program 10 other verson of program5 // tp print the sum of 5 and 9 
int main() 
{ int a,b,sum; 
a=5; 
b=9; 
sum=a+b; 
cout<<"\t"; 
cout<<"the sum is "<<sum<<endl; return 0; 
} 
//Program 11 
// Example program 
#include <iostream> 
#include <string> 
using namespace std; 
//program 11 is program 10 using cin // tp print the sum of 5 and 9 
int main()
{ int a,b,sum; 
cout<<"enter a number"; 
cin>>a; 
cout<<"enter another number"; 
cin>>b; 
sum=a+b; 
cout<<"\t"; 
cout<<"the sum is "<<sum<<endl; 
return 0; 
} 
//Program 12 
// Example program 
#include <iostream> 
#include <string> 
using namespace std; 
//program 12 is program 11 using one cin // tp print the sum of 5 and 9 
int main() 
{ int a,b,sum; 
cout<<"enter two number"; 
cin>>a>>b; 
sum=a+b; 
cout<<"\t"; 
cout<<"the sum is "<<sum<<endl; 
return 0; 
} 
//Program 13 
// Example program 
#include <iostream> 
#include <string> 
using namespace std; 
//program 13 
// tp print the sumand the product of any two numbers 
int main() 
{ int a,b,sum,prod; 
cout<<"enter two number";
cin>>a>>b; 
sum=a+b; 
prod=a*b; 
cout<<"\t"; 
cout<<"the sum is "<<sum<<endl; 
cout<<"the product is"<<prod<<endl; 
return 0; 
} 
//Program 14 
// Example program 
#include <iostream> 
#include <string> 
using namespace std; 
//program 14 
// tp print the sum,the product and the difference of any two numbers 
int main() 
{ int a,b,sum,prod,diff; 
cout<<"enter two number"; 
cin>>a>>b; 
sum=a+b; 
prod=a*b; 
diff=a-b; 
cout<<"\t"; 
cout<<"the sum is "<<sum<<endl; 
cout<<"\tthe product is"<<prod<<endl; 
cout<<"\tthe difference is"<<diff<<endl; 
return 0; 
} 
//Program 15 
// Example program 
#include <iostream> 
#include <string> 
using namespace std; 
//program 15 
// print the larger number of 2 distint number using only if and else statement int main(){
int a,b; 
cout<<"Enter two distint numbers"; 
cin>>a>>b; 
if (a>b) 
cout<<a<<" is larger \n"; 
if(b>a) 
cout<<b<<" is larger \n"; 
if (a==b) 
cout<<"you entered the same number, try again\n"; return 0; 
} 
//Program 16 
linear equations program C++ 
#include < iostream > 
using namespace std; 
int main() { 
{ 
float a,b,x; 
cout<< "Enter 2 coefficients: " ; 
cin>>a>>b; 
if (a== 0 ) 
if (b== 0 ) 
cout<< "All solutions \n " ; 
Else 
cout<< "No solutions \n " ; 
else { 
cout<< "one solutions \n " ; 
x=-b/a; 
cout<< "x= " <<x<<endl; 
} 
} 
return 0 ; 
} 
//Program 17 
#include < iostream > 
#include < math.h > 
using namespace std;
int main() 
{ 
double a,b,c,x,D,x1,x2; cout<< "Enter value for a: " ; cin>>a; 
cout<< "Enter value for b: " ; cin>>b; 
cout<< "Enter value for c: " ; cin>>c; 
if (a== 0 ) 
if (b== 0 ) 
if (c== 0 ) 
cout<< "all solutions \n " ; else { 
cout<< "no solutions \n " ; } 
Else 
{ 
cout<< "linear equation \n " ; x=-c/b; 
cout<< "x= " <<x<<endl; } 
else { 
D=b*b- 4 *a*c; 
if (D< 0 ) 
cout<< "no solution/n" ; else { 
if (D== 0 ) 
cout<< "double solution" ; 
x=-b/( 2 *a); 
cout<< "x= " <<x<<endl; { 
cout<< "two solutions \n " ; x1=(-b+sqrt(D)/ 2 *a); 
x2=(-b-sqrt(D)/ 2 *a); 
cout<< "x1= " <<x1<<endl; cout<< "x2= " <<x2<<endl;
} 
} 
} 
return 0 ; 
} 
//Program 18 
#include < iostream > 
#include < math.h > 
using namespace std; 
int main() 
{ 
double a,b,c,x,D,x1,x2; 
cout<< "Enter 3 coefficients: " ; cin>>a>>b>>c; 
if ((a== 0 )&&(b== 0 )&&(c== 0 )) cout<< "all solutions \n " ; if ((a== 0 )&&(b== 0 )&&(c!= 0 )) cout<< "no solutions \n " ; if ((a== 0 )&&(b!= 0 )){ 
cout<< "linear solution \n " ; x=-c/b; 
cout<< "x= " <<x<<endl; 
} 
if (a!= 0 ){ 
D=b*b- 4 *a*c; 
if (D< 0 ) 
cout<< "no solution \n " ; 
if (D== 0 ){ 
cout<< "duplicate solution \n " ; x=-b/( 2 *a); 
cout<< "x= " <<x<<endl; 
} 
if (D> 0 ){ 
cout<< "two solutions \n " ; x1=(-b+sqrt(D)/ 2 *a); 
x2=(-b-sqrt(D)/ 2 *a); 
cout<< "x1= " <<x1<<endl;
cout<< "x2= " <<x2<<endl; 
} 
} 
return 0 ; 
} 
While loop programs 
// program 19 to print number from 1 - 19 using while loop #include < iostream > 
using namespace std; 
int main() { 
int w; 
w= 1 ; //initial value 
while (w<= 19 ){ //condition 
cout<<w<< " " ; 
w=w+ 1 ; //terminator 
} 
return 0 ; 
} 
// program 20 to print number from 19 - 1 using while loop #include < iostream > 
using namespace std; 
int main() { 
int w; 
w= 19 ; //initial value 
while (w>= 1 ){ //condition 
cout<<w<< " " ; 
w=w- 1 ; //terminator 
} 
return 0 ; 
} 
// program 21 to print even number from 1 to 19 using while loop #include < iostream > 
using namespace std;
int main() { 
int w; 
w= 1 ; //initial value 
while (w<= 19 ){ //condition 
if (w% 2 == 0 ) 
cout<<w<< " " ; 
w=w+ 1 ; //terminator 
} 
return 0 ; 
} 
// program 22 to print odd number from 2 to 20 using while loop #include < iostream > 
using namespace std; 
int main() { 
int w; 
w= 2 ; //initial value 
while (w<= 20 ){ //condition 
if (w% 2 != 0 ) //odd when not = to 0 
cout<<w<< " " ; 
w=w+ 1 ; //terminator 
} 
return 0 ; 
} 
// program 23 to print multiple of 5 from 1 to 23 using while loop 
#include < iostream > 
using namespace std; 
int main() { 
int w; 
w= 1 ; //initial value 
while (w<= 23 ){ //condition 
if (w% 5 == 0 ) //multiple of 5 
cout<<w<< " " ; 
w=w+ 1 ; //terminator 
} 
return 0 ;
} 
// program 24 to print numbers that are not multiples of 3 from 1 to 28 using while loop 
#include < iostream > 
using namespace std; 
int main() { 
int w; 
w= 1 ; //initial value 
while (w<= 28 ){ //condition 
if (w% 3 != 0 ) //not multiples of 3 
cout<<w<< " " ; 
w=w+ 1 ; //terminator 
} 
return 0 ; 
} 
// program 25 to print the sum of numbers 1 to 19 using while loop 
#include < iostream > 
using namespace std; 
int main() { 
int w,sum; 
w= 1 ; //initial value 
sum= 0 ; 
while (w<= 19 ){ //condition 
sum=sum+w; 
w=w+ 1 ; //terminator 
} 
cout<< " the sum is " <<sum<<endl; 
return 0 ; 
} 
// program 26 to print the sum of even numbers from numbers 1 to 19 using while loop 
#include < iostream > 
using namespace std; 
int main() {
int w, sum; 
w= 1 ; //initial value 
sum= 0 ; 
while (w<= 19 ){ //condition 
if (w% 2 == 0 ) 
sum=sum+w; 
w=w+ 1 ; //terminator 
} 
cout<< " the sum of even number is: " <<sum<<endl; 
return 0 ; 
} 
// program 27 to print the sum of odd numbers from numbers 2 to 18 using while loop 
#include < iostream > 
using namespace std; 
int main() { 
int w, sum; 
w= 2 ; //initial value 
sum= 0 ; 
cout<< "program 27 to print the sum of odd numbers from numbers 2 to 18 using while loop \n " ; 
while (w<= 18 ){ //condition 
if (w% 2 != 0 ) 
sum=sum+w; 
w=w+ 1 ; //terminator 
} 
cout<< " the sum of odd number is: " <<sum<<endl; 
return 0 ; 
} 
// program 28 to print the following list : -3,2,10,5, and 7 
#include < iostream > 
using namespace std; 
int main() { 
int w, num;
w= 1 ; //initial value 
cout<< "enter the number from the list" ; 
while (w<= 5 ){ //condition 
cin>>num; 
cout<<num<<endl; 
w++; //same as w=w+1 
} 
return 0 ; 
} 
// program 29 to print the sum of following list : -3,2,10,5, and 7 #include < iostream > 
using namespace std; 
int main() { 
int w,sum,num; 
w= 1 ; 
sum= 0 ; 
cout<< "enter the number from the list" ; 
while (w<= 5 ){ //condition 
cin>>num; 
sum=sum+num; 
w++; //same as w=w+1 
} 
cout<< " the sum is of the list is: " <<sum<<endl; 
return 0 ; 
} 
// program 30 to print the sum of positive numbers from the following list : -3,2,-10,-5, and 7 
#include <iostream> 
using namespace std; 
int main() { 
int w,sum,num; 
w=1; 
sum=0; 
cout<<"enter the number from the list"; 
while(w<=5){//condition 
cin>>num;
if(num>=0) 
sum=sum+num; 
w++;//same as w=w+1 
} 
cout<<" the sum of positive number from the list is: "<<sum<<endl; return 0; 
} 
// program 31 to print oly the first and last number from the following list : -3,2,-10,-5, and 7 
#include <iostream> 
using namespace std; 
int main() { 
int w,sum, num; 
w=1; 
cout<<"enter the number from the list"; 
while(w<=5){//condition 
cin>>num; 
if(w==1) 
cout<<"the first number is: "<<num<<endl; 
w++;//same as w=w+1 
} 
cout<<"the last number is "<<num<<endl; 
return 0; 
} 
// program 32 to print only the positive odd numbers from the following list : -3,2,-10,-5, and 7 
//using the logical operators 
#include <iostream> 
using namespace std; 
int main() { 
int w,num; 
w=1; 
cout<<"enter the number from the list"; 
while(w<=5){//condition 
cin>>num; 
if((num>=0)&&(num%2!=0))
cout<<num<<endl; 
w++;//same as w=w+1 
} 
return 0; 
} 
// program 33 to print only the negative even numbers //from the following list -30,233,-13, -52, and -76 //using the logical operators 
#include <iostream> 
using namespace std; 
int main() { 
int w,num; 
w=1; 
cout<<"enter the number from the list: "; 
while(w<5){//condition 
cin>>num; 
if((num<=0)&&(num%2==0)&&(num>-31)&&(num<-5)) cout<<num<<endl; 
w++;//same as w=w+1 
} 
return 0; 
} 
// program 34 is program 19 using for loop 
#include < iostream > 
using namespace std; 
int main() { 
int i; 
for (i= 0 ;i<= 19 ;i++) //condition 
cout<<i<<endl; 
return 0 ; 
} 
// program 35 is program 20 
#include < iostream > 
using namespace std;
int main() { 
int i; 
for (i= 19 ;i>= 1 ;i--) //condition cout<<i<< " " ; 
return 0 ; 
} 
//program 36 is program 21 #include < iostream > 
using namespace std; 
int main() { 
int i; 
for (i= 1 ;i<= 19 ;i++){ //condition if (i% 2 == 0 ) 
cout<<i<< " " ; 
} 
return 0 ; 
} 
// program 37 is program 22 #include < iostream > 
using namespace std; 
int main() { 
int i; 
for (i= 2 ;i<= 20 ;i++) //condition if (i% 2 != 0 ) //odd when not = to 0 cout<<i<< " " ; 
return 0 ; 
} 
// program 38 is program 23 #include < iostream > 
using namespace std; 
int main() { 
int i; 
for (i= 1 ;i<= 23 ;i++) //condition
if (i% 5 == 0 ) //multiple of 5 cout<<i<< " " ; 
return 0 ; 
} 
// program 39 is program 24 #include < iostream > 
using namespace std; 
int main() { 
int i; 
for (i= 1 ;i<= 28 ;i++) //condition if (i% 3 != 0 ) //not multiples of 3 cout<<i<< " " ; 
return 0 ; 
} 
// program 40 is program 25 #include <iostream> 
using namespace std; 
int main() { 
int i,sum; 
sum=0; 
for(i=1;i<=19;i++)//condition sum=sum+i; 
cout<<" the sum is "<<sum<<endl; return 0 ; 
} 
// program 41 is program 26 #include <iostream> 
using namespace std; 
int main() { 
int i, sum; 
sum=0; 
for(i=1;i<=19;i++)//condition if(i%2==0)
sum=sum+i; 
cout<<" the sum of even number is: "<<sum<<endl; 
return 0; 
} 
// program 42 is program 27 
#include <iostream> 
using namespace std; 
int main() { 
int i, sum; 
sum=0; 
cout<<"program 41 to print the sum of odd numbers from numbers 2 to 18 using while loop\n"; 
for(i=2;i<=18;i++) 
if(i%2!=0) 
sum=sum+i; 
cout<<" the sum of odd number is: "<<sum<<endl; 
return 0; 
} 
// program 43 is program 28 using for loop 
#include < iostream > 
using namespace std; 
int main() { 
int i, num; 
cout<< "enter the number from the list" ; 
for (i= 1 ;i<= 5 ;i++) //condition 
cin>>num; 
cout<<num<<endl; 
return 0 ; 
} 
// program 44 is program 29 using while loop 
#include < iostream > 
using namespace std; 
int main() { 
int i,sum,num;
sum= 0 ; 
cout<< "enter the number from the list" ; 
for (i= 1 ;i<= 5 ;i++){ //condition 
cin>>num; 
sum=sum+num; 
} 
cout<< " the sum is of the list is: " <<sum<<endl; 
return 0 ; 
} 
// program 45 is program 30 using for loop 
#include < iostream > 
using namespace std; 
int main() { 
int i,sum,num; 
sum= 0 ; 
cout<< "enter the number from the list" ; 
for (i= 1 ;i<= 5 ;i++){ 
cin>>num; 
if (num>= 0 ) 
sum=sum+num; 
} 
cout<< " the sum of positive number from the list is: " <<sum<<endl; return 0 ; 
} 
// program 46 is program 31 using for loop 
#include < iostream > 
using namespace std; 
int main() { 
int i,sum, num; 
cout<< "enter the number from the list" ; 
for (i= 1 ;i<= 5 ;i++){ //condition 
cin>>num; 
if (i== 1 ) 
cout<< "the first number is: " <<num<<endl; 
} 
cout<< "the last number is " <<num<<endl;
return 0 ; 
} 
// program 47 is program 32 using for loop 
#include <iostream> 
using namespace std; 
int main() { 
int i,num; 
cout<<"enter the number from the list"; 
for(i=1;i<=5;i++){//condition 
cin>>num; 
if((num>=0)&&(num%2!=0)) 
cout<<num<<endl; 
} 
return 0; 
} 
// program 48 is program 33 using for loop 
#include <iostream> 
using namespace std; 
int main() { 
int i,num; 
cout<<"enter the number from the list: "; 
for(i=1;i<5;i++){//condition 
cin>>num; 
if((num<=0)&&(num%2==0)&&(num>-31)&&(num<-5)) cout<<num<<endl; 
} 
return 0; 
} 
Do while loop programs 
// program 49 is program 34 using the do while loop #include < iostream > 
using namespace std; 
int main() 
{
int w= 1 ; 
do { 
cout<<w<<endl; 
w++; 
} while (w<= 19 ); 
} 
// program 50 is program 35 using the do while loop #include < iostream > 
using namespace std; 
int main() { 
int w; 
w= 19 ; //initial value 
do { 
cout<<w<< " " ; 
w=w- 1 ; //terminator 
} while (w>= 1 ); 
return 0 ; 
} 
// program 51 is program 21 using the do while loop #include < iostream > 
using namespace std; 
int main() { 
int w; 
w= 1 ; 
do { 
if (w% 2 == 0 ) 
cout<<w<< " " ; 
w=w+ 1 ; //terminator 
} while (w<= 19 ); 
return 0 ; 
} 
// program 52 is program 22 using the do while loop #include < iostream > 
using namespace std;
int main() { 
int w; 
w= 2 ; 
do { 
if (w% 2 != 0 ) //odd when not = to 0 
cout<<w<< " " ; 
w=w+ 1 ; //terminator 
} while (w<= 20 ); 
return 0 ; 
} 
// program 53 is program 23 using the do while loop #include < iostream > 
using namespace std; 
int main() { 
int w; 
w= 1 ; //initial value 
do { 
if (w% 5 == 0 ) //multiple of 5 
cout<<w<< " " ; 
w=w+ 1 ; //terminator 
} while (w<= 23 ); 
return 0 ; 
} 
// program 54 is program 24 using the do while loop #include < iostream > 
using namespace std; 
int main() { 
int w; 
w= 1 ; //initial value 
do { 
if (w% 3 != 0 ) //not multiples of 3 
cout<<w<< " " ; 
w=w+ 1 ; //terminator 
} while (w<= 28 ); 
return 0 ; 
}
// program 55 is program 25 using the do while loop #include < iostream > 
using namespace std; 
int main() { 
int w,sum; 
w= 1 ; //initial value 
sum= 0 ; 
do { 
sum=sum+w; 
w=w+ 1 ; 
} while (w<= 19 ); 
cout<< " the sum is " <<sum<<endl; 
return 0 ; 
} 
// program 56 is program 26 using the do while loop #include < iostream > 
using namespace std; 
int main() { 
int w, sum; 
w= 1 ; //initial value 
sum= 0 ; 
do { 
if (w% 2 == 0 ) 
sum=sum+w; 
w=w+ 1 ; 
} while (w<= 19 ); 
cout<< " the sum of even number is: " <<sum<<endl; return 0 ; 
} 
// program 57 is program 27 using the do while loop #include < iostream > 
using namespace std; 
int main() { 
int w, sum;
w= 2 ; //initial value 
sum= 0 ; 
cout<< "program 27 to print the sum of odd numbers from numbers 2 to 18 using while loop \n " ; 
do { 
if (w% 2 != 0 ) 
sum=sum+w; 
w=w+ 1 ; 
} while (w<= 18 ); 
cout<< " the sum of odd number is: " <<sum<<endl; 
return 0 ; 
} 
// program 58 is program 28 using the do while loop 
#include < iostream > 
using namespace std; 
int main() { 
int w, num; 
w= 1 ; //initial value 
cout<< "enter the number from the list" ; 
do { 
cin>>num; 
cout<<num<<endl; 
w++; //same as w=w+1 
} while (w<= 5 ); 
return 0 ; 
} 
// program 59 is program 29 using the do while loop 
#include < iostream > 
using namespace std; 
int main() { 
int w,sum,num; 
w= 1 ; 
sum= 0 ; 
cout<< "enter the number from the list" ; 
do { 
cin>>num;
sum=sum+num; 
w++; //same as w=w+1 
} while (w<= 5 ); 
cout<< " the sum is of the list is: " <<sum<<endl; 
return 0 ; 
} 
// program 60 is program 30 using the do while loop 
#include < iostream > 
using namespace std; 
int main() { 
int w,sum,num; 
w= 1 ; 
sum= 0 ; 
cout<< "enter the number from the list" ; 
do { 
cin>>num; 
if (num>= 0 ) 
sum=sum+num; 
w++; //same as w=w+1 
} while (w<= 5 ); 
cout<< " the sum of positive number from the list is: " <<sum<<endl; return 0 ; 
} 
// program 61 is program 31 using the do while loop 
#include < iostream > 
using namespace std; 
int main() { 
int w,sum, num; 
w= 1 ; 
cout<< "enter the number from the list" ; 
do { 
cin>>num; 
if (w== 1 ) 
cout<< "the first number is: " <<num<<endl; 
w++; //same as w=w+1 
} while (w<= 5 );
cout<< "the last number is " <<num<<endl; return 0 ; 
} 
// program 62 is program 32 using the do while loop #include < iostream > 
using namespace std; 
int main() { 
int w,num; 
w= 1 ; 
cout<< "enter the number from the list" ; do { 
cin>>num; 
if ((num>= 0 )&&(num% 2 != 0 )) 
cout<<num<<endl; 
w++; //same as w=w+1 
} while (w<= 5 ); 
return 0 ; 
} 
// program 63 is program 48 using the do while loop // program 33 to print only the negative even numbers //from the following list -30,233,-103, -52, and -76 //using the logical operators 
#include < iostream > 
using namespace std; 
int main() { 
int num; 
int w= 1 ; 
cout<< "enter the number from the list: " ; do { 
cin>>num; 
if ((num >=- 50 ) && (num<- 5 )) 
if ((num% 2 == 0 ) &&(num <= 0 )) 
cout<<num<<endl; 
w++; 
} while (w<= 5 ); 
return 0 ;
} 
// program 64 multiple if else if 
#include < iostream > 
using namespace std; 
int main() { 
int a; 
cout<< "Enter a number " ; 
cin>>a; 
if (a == 3 ) //switch (a){ 
// case 3: 
cout<< "three \n " ; //cout<<"three\n"; //break; 
else if (a == 5 ) //case 5; 
cout<< "five \n " ; //cout<<"five\n"; //break; 
else if (a == 7 ) //case 7 
cout<< "seven \n " ; //out<<"seven\n"; //break; 
else //default 
cout<< "invalid \n " ; //cout<<"invalid\n"; //break; 
return 0 ; 
} 
// program 65 multiple if else if 
#include < iostream > 
using namespace std; 
int main() 
{ int a; 
cout<< "Enter a number " ; 
cin>>a; 
switch (a){ 
case 3 : 
cout<< "three \n " ; 
break ;
case 5 : 
cout<< "five \n " ; 
break ; 
case 7 : 
cout<< "seven \n " ; 
break ; 
default : 
cout<< "invalid \n " ; 
break ;} 
return 0 ; 
} 
// program 66 multiple if else if #include < iostream > 
using namespace std; 
int main() 
{ int x; 
cout<< "Enter a number " ; cin>>x; 
switch (x){ 
case 10 : 
cout<< "JOE \n " << "JESSY \n " ; break ; 
case 0 : 
cout<< "ADAM \n " ; 
break ; 
case 7 : 
cout<< "100 \n " ; 
break ; 
default : 
cout<< "-99 \n " ; 
break ;} 
return 0 ;
} 
// program 67 using nested loop 
#include < iostream > 
using namespace std; 
int main() 
{ int i,j; 
for (i= 1 ;i<= 3 ;i++) 
for (j= 2 ;j<= 4 ;j++) 
cout<< "i= " <<i<< " j=" <<j<<endl; 
return 0 ; 
} 
// program 68 using nested loop 
#include < iostream > 
using namespace std; 
int main() 
{ int i,j,k; 
for (i= 1 ;i<= 2 ;i++) 
for (j= 2 ;j<= 4 ;j++) 
for (k= 1 ;k< 3 ;k++) 
cout<< "i= " <<i<< " j=" <<j<< " k=" <<k<<endl; return 0 ; 
} 
#include <iostream> 
using namespace std; 
//program 69 to change scores to letter grades 
int main() 
{ 
 float G; 
 cout<<"Enter your score "; 
 cin>>G; 
 if (G>=90){ 
 cout<<"Your Grade is A\n";
 } 
 else if (G>=80){ 
 cout<<"Grade B\n"; 
 } 
 else if (G>=70){ 
 cout<<"Grade C\n"; 
 } 
 else if (G>=60){ 
 cout<<"Grade D\n"; 
 } 
 else{ 
 cout<<"Grade F\n"; 
 } 
 return 0; 
} 
#include <iostream> 
using namespace std; 
//program 70 to change scores to letter grades using switch case 
int main() 
{ 
 int x; 
 cout<<"Enter your score "; 
 cin>>x; 
 switch (x){ 
 case 100:{ 
 cout<<"Your Grade is A\n"; 
 break; 
 } 
 case 99:{ 
 cout<<"Grade C\n"; 
 break; 
 } 
 case 98:{
 cout<<"Grade C\n";  break; 
 } 
 case 97:{ 
 cout<<"Grade C\n";  break; 
 } 
 case 96:{ 
 cout<<"Grade C\n";  break; 
 } 
 case 95:{ 
 cout<<"Grade C\n";  break; 
 } 
 case 94:{ 
 cout<<"Grade C\n";  break; 
 } 
 case 93:{ 
 cout<<"Grade C\n";  break; 
 } 
 case 92:{ 
 cout<<"Grade C\n";  break; 
 } 
 case 91:{ 
 cout<<"Grade C\n";  break; 
 } 
 case 90:{ 
 cout<<"Grade C\n";  break; 
 } 
 case 89:{ 
 cout<<"Grade C\n";  break; 
 } 
 case 88:{
 cout<<"Grade C\n";  break; 
 } 
 case 87:{ 
 cout<<"Grade C\n";  break; 
 } 
 case 86:{ 
 cout<<"Grade C\n";  break; 
 } 
 case 85:{ 
 cout<<"Grade C\n";  break; 
 } 
 case 84:{ 
 cout<<"Grade C\n";  break; 
 } 
 case 83:{ 
 cout<<"Grade C\n";  break; 
 } 
 case 82:{ 
 cout<<"Grade C\n";  break; 
 } 
 case 81:{ 
 cout<<"Grade C\n";  break; 
 } 
 case 80:{ 
 cout<<"Grade B\n";  break; 
 } 
 case 79:{ 
 cout<<"Grade C\n";  break; 
 } 
 case 78:{
 cout<<"Grade C\n";  break; 
 } 
 case 77:{ 
 cout<<"Grade C\n";  break; 
 } 
 case 76:{ 
 cout<<"Grade C\n";  break; 
 } 
 case 75:{ 
 cout<<"Grade C\n";  break; 
 } 
 case 74:{ 
 cout<<"Grade C\n";  break; 
 } 
 case 73:{ 
 cout<<"Grade C\n";  break; 
 } 
 case 72:{ 
 cout<<"Grade C\n";  break; 
 } 
 case 71:{ 
 cout<<"Grade C\n";  break; 
 } 
 case 70:{ 
 cout<<"Grade C\n";  break; 
 } 
 case 69:{ 
 cout<<"Grade C\n";  break; 
 } 
 case 68:{
 cout<<"Grade C\n";  break; 
 } 
 case 67:{ 
 cout<<"Grade C\n";  break; 
 } 
 case 66:{ 
 cout<<"Grade C\n";  break; 
 } 
 case 65:{ 
 cout<<"Grade C\n";  break; 
 } 
 case 64:{ 
 cout<<"Grade C\n";  break; 
 } 
 case 63:{ 
 cout<<"Grade C\n";  break; 
 } 
 case 62:{ 
 cout<<"Grade C\n";  break; 
 } 
 case 61:{ 
 cout<<"Grade C\n";  break; 
 } 
 case 60:{ 
 cout<<"Grade D\n";  break; 
 } 
 default:{ 
 cout<<"Grade F\n";  } 
}
 return 0; 
} 
Program 71 
// program 17 remastered with while loop 
#include < iostream > 
#include<cmath>// this is for sqrt 
using namespace std; 
int main() 
{ 
double a,b,c,x,D,x1,x2; 
cout<<”This program solves many equations as needed including none\n”; cout<<”Enter -99 if you don’t have an equation; otherwise enter any other number\n”; Int w; 
cin>w; 
while(w!=-99){ 
cout<< "Enter value for a: " ; 
cin>>a; 
cout<< "Enter value for b: " ; 
cin>>b; 
cout<< "Enter value for c: " ; 
cin>>c; 
if (a== 0 ) 
if (b== 0 ) 
if (c== 0 ) 
cout<< "all solutions \n " ; 
else { 
cout<< "no solutions \n " ; 
} 
else 
{ 
cout<< "linear equation \n " ; 
x=-c/b; 
cout<< "x= " <<x<<endl; 
} 
else { 
D=b*b- 4 *a*c; 
if (D< 0 )
cout<< "no solution/n" ; 
else { 
if (D== 0 ) 
coût<<"double solution" ; 
x=-b/( 2 *a); 
cout<< "x= " <<x<<endl; 
{ 
cout<< "two solutions \n " ; 
x1=(-b+sqrt(D)/ 2 *a); 
x2=(-b-sqrt(D)/ 2 *a); 
cout<< "x1= " <<x1<<endl; 
cout<< "x2= " <<x2<<endl; 
} 
} 
cout<<”to stop enter -99 otherwise to continue enter any other number”; cin>>w; 
} 
cout<<” see you next time\n”; 
return 0 ; 
} 
// program 70 a shorter way 
#include < iostream > 
using namespace std; 
int main() 
{ int G; 
 cout<<"Enter scores: "; 
 cin>>G; 
 switch(G/10) { 
 case 10: 
 case 9: 
 cout<<"Your grade is A\n"; 
 break; 
 case 8: 
 cout<<"Your grade is B\n"; 
 break; 
 case 7: 
 cout<<"Your grade is C\n";
 break; 
 case 6: 
 cout<<"Your grade is D\n"; 
 break; 
 default: 
 cout<<"Your grade is F\n"; 
 break;} 
return 0; 
} 
Program 72 
// Program 72 using Predefined functions 
// All predefined functions are already defined in <cmath> library, you just have to call it #include < iostream > 
//include<cmath>this is for predefined functions like sqrt found in library <cmath> using namespace std; 
int main() { 
cout<< “pow(5,6) = “<<pow(5,6)<<endl;//returns exponential result first argument raised to the second 
cout<< “sqrt(100) = “<<sqrt(100)<<endl;// returns the square root of a given argument cout<< “abs(90) = “<<abs(90)<<endl;//returns the absolute of the argument cout<< “isdigit = “<<isdigit(123)<<endl;// check if the value is a digit 
cout<< “fmod = “<<fmod(10, 4)<<endl;//returns remainder after dividing the first argument by the second 
cout<< “log10(90) = “<<log10(90)<<endl;//returns log of the argument cout<< “floor(89,45) = “<<floor(89,45)<<endl;//returns the largest integer value not greater than the given value 
cout<< “rand() = “<<rand()<<endl;//generates and returns a random number cout<< “sin(30) = “<<sin(30)<<endl;//returns the sin value of the argument 
return 0; 
// program 73 function 
#include < iostream > 
using namespace std; 
void welcome();// function prototype
int main() { 
cout<< “ Hello there\n”; 
welcome();//function call 
cout<< “Good Luck\n”; 
return 0; 
} 
Void welcome() {//function definition 
cout<<”Welcome to the world of functions\n”; 
} 
// program 74 function (without parameters to print the sum and the product of two numbers) 
#include <iostream> 
using namespace std; 
int main() 
{ 
void sum(); 
void prod(); 
cout<<"The sum is\n"; 
sum(); 
cout<<"The product is\n"; 
prod(); 
} 
void sum(){ 
int a,b; 
cout<<"Enter two numbers: "; 
cin>>a>>b; 
cout<<"The sum is: "<<a+b<<"\n\n"; 
} 
void prod(){ 
int a,b; 
cout<<"Enter two numbers: "; 
cin>>a>>b; 
cout<<"The product is: "<<a*b<<"\n\n"; 
}
// program 75 program 74 with parameters 
#include <iostream> 
using namespace std; 
int sum (int x, int y); 
int prod (int x, int y);\\ actual parameter 
int main (){ 
int a,b; 
cout<<”Enter 2 numbers”<<endl; 
cin>>a>>b; 
cout<<”The sum is “<<sum(a,b)<<endl; 
cout<<”The product is “<<prd(a,b)<<endl; 
return 0; 
} 
int sum (int x, int y)\\formal parameter{ 
 int z = x+y; 
 z=x+y; 
 return z; 
int prod (int a1, b1){ 
 int m; 
 m=a1*b1; //synonym parameter 
 return m; 
} 
// program 76 using functions to solve linear equation #include <iostream> 
using namespace std; 
void allsol(); 
void nosol(); 
float onesol(float, float); 
int main() { 
cout<<”\t\t\t\t SOLVING A LINEAR EQUATION\n\n\n”; float a,b; 
cout<< “Enter 2 coefficients: “; 
cin>>a>>b; 
If (a==0) 
if(b==0)
allsol(); 
Else 
nosol(); 
else{ 
cout<<”One solution\n\n”; 
cout<<”x = “<<onesol(a,b)<<endl; 
} 
 cout<<”\n\n\n”; 
return 0; 
} 
void allsol() { 
cout<<”ALL solutions\n\n\n”; 
} 
void nosol(){ 
cout<<”There are no solution\n\n\n”; 
} 
float onesol(float a1, float b1){ 
 return (-b1/a1); 
 } 
#include <iostream> 
#include <cmath> 
using namespace std; 
//Program 77 - Program designed to solve a quadratic equation //with a, b and b and c as input. 
void allsol(); 
void nosol(); 
float onesol(float, float); 
float duplsol(float, float); 
float twosol1(float, float, float); 
float twosol2(float, float, float); 
int main() { 
float a, b, c; 
int k = 0; 
float D; 
cout << "Press any number except -999, if you have an equation to solve: "; cin >> k; 
cout << "Enter 3 co-efficients:\t"; 
cin >> a >> b >> c; 
while (k != -999) {
if (a == b) 
if (b == 0) 
if (c == 0) 
allsol(); 
else 
nosol(); 
else { 
cout << "Linear solution\n"; 
cout << "x = " << onesol(b, c) << endl; 
} 
else { 
D = pow(b,2) - (4 * a*c); 
if (D < 0) 
nosol(); 
else if (D == 0) { 
cout << "Duplicate Solution\n"; 
cout << "x = " << duplsol(a, b) << endl; 
} 
else { 
cout << "Quadratic Equation\n"; 
cout << "x = " << twosol1(a, b, c) << " and " << " x = " << twosol2(a, b, c) << endl; } 
} 
cout << "To stop enter -999, otherwise enter any other value to continue\n\n\n"; cin >> k; 
} 
return 0; 
} 
void allsol() { 
cout << "All solutions\n\n"; 
} 
void nosol() { 
cout << "No solution\n\n\n";} 
float onesol(float b1, float c1) { 
float x; 
x = -c1 / b1; 
return x; 
} 
float duplsol(float a1, float b1) { 
float x;
x = b1 / (2 * a1); 
return x; 
} 
float twosol1(float a1, float b1, float c1) { float x1, D; 
D = pow(b1, 2) - (4 * a1*c1); 
x1 = (-b1 + sqrt(D)) / (2 * a1); 
return x1; 
} 
float twosol2(float a2, float b2, float c2) { float x2, D; 
D = pow(b2, 2) - (4 * a2*c2); 
x2 = (-b2 - sqrt(D)) / (2 * a2); 
return x2; 
} 
// program 78 sending parameters by reference #include <iostream> 
using namespace std; 
Void f(int &x, int y){ 
x=88; 
y=99; 
} 
Int main() { 
Int a,b; 
a=22; 
b=33; 
cout<<”a= “<<a<<”b= “<<b<<endl; f(a,b); 
cout<<”a= “<<a<<”,b= “<<b<<endl; return 0; 
} 
// program 79 sending parameters by value #include <iostream> 
using namespace std; 
Void f(int x, int y){ 
x=88;
y=99; 
} 
Int main() { 
Int a,b; 
a=22; 
b=33; 
cout<<”a= “<<a<<”b= “<<b<<endl; 
f(a,b); 
cout<<”a= “<<a<<”,b= “<<b<<endl; 
return 0; 
} 
// program 80 sending parameter a by value and b by reference #include <iostream> 
using namespace std; 
Void f(int x, int& y){ 
x=88; 
y=99; 
} 
Int main() { 
Int a,b; 
a=22; 
b=33; 
cout<<”a= “<<a<<”b= “<<b<<endl; 
f(a,b); 
cout<<”a= “<<a<<”,b= “<<b<<endl; 
return 0; 
} 
// program 81 sending parameters b by value and a by reference #include <iostream> 
using namespace std; 
Void f(int &x, int y){ 
x=88; 
y=99; 
} 
Int main() { 
Int a,b;
a=22; 
b=33; 
cout<<”a= “<<a<<”b= “<<b<<endl; 
f(a,b); 
cout<<”a= “<<a<<”,b= “<<b<<endl; 
return 0; 
} 
// program 82 
#include <iostream> 
using namespace std; 
//function to compute circumference 
void computingCircumference( double &circumference, double r) { Const double pi = 3.14; 
Circumference = 2*pi*r; 
} 
// function to compute area 
void computingArea(double &area, double r) { 
const double pi = 3.141592; 
area = pi * r*r; 
} 
int main() { 
double r1, a, c; 
cout << "Enter radius" << endl; 
cin >> r1; 
computingArea(a, r1); 
computingCircumference(c, r1); 
cout << "Area = " << a << " , Circumference = " << c << endl; 
system("pause"); 
return 0; 
} 
// program 83 
#include <iostream> 
using namespace std; 
//function to compute circumference and area to compute area 
void computingAreaCircumference( double &circumference, double &area, double r) {
const double pi = 3.14; 
area = pi*r*r; 
Circumference = 2*pi*r; 
} 
} 
int main() { 
double r1, a, c; 
cout << "Enter radius" << endl; 
cin >> r1; 
computingArea(a, c, r1); 
computingCircumference(c, r1); 
cout << "Area = " << a << " , Circumference = " << c << endl; system("pause"); 
return 0; 
} 
// program 84 print and array of 5 numbers 
#include <iostream> 
using namespace std; 
Int main() { 
Int array[5] = {0,1,2,3,4} 
for(int i = 0; i < 5; i++){ 
cout<<array[i]<<endl; 
} 
 return 0; 
} 
// program 85 print the sum of the previous array 
#include <iostream> 
using namespace std; 
Int main() { 
Int sum = 0 
Int array[5] = {0,1,2,3,4}; 
for(int i = 0; i<5; i++){ 
Sum += array[i];
} 
cout<<sum; 
return 0; 
} 
// program 86 print 2D array 
#include <iostream> 
using namespace std; 
#include <iostream> 
using namespace std; 
int main() 
{ 
 int A[3][4] = {{1,3,9,-4},{5,-5,55,66},{-7,2,10,11}} ;  for (int i = 0; i < 3; i++) { 
for (int j = 0;j<4;j++) 
cout<<A[i][j]<<" "; 
cout << endl; 
 } 
} 
// program 87 print sum of the same array #include <iostream> 
using namespace std; 
int main(){ 
 int sum = 0; 
 int A[3][4] = {{1,3,9,-4},{5,-5,55,66},{-7,2,10,11}} ;  for (int i = 0; i < 3; i++) 
for (int j = 0;j<4;j++){ 
sum = sum + A[i][j]; 
 cout << "the sum of 2d array is "<<sum<<"endl"; } 
// program 88 print only the first row of the same array #include <iostream>
using namespace std; 
int main(){ 
 int A[3][4] = {{1,3,9,-4},{5,-5,55,66},{-7,2,10,11}} ;  for (int i = 0; i < 3; i++) 
for (int j = 0;j<4;j++){ 
if (i==0) 
cout<<A[i][j]<<” ”; 
} 
//Program 89 prints only the last column of the same array. #include <iostream> 
using namespace std; 
int main(){ 
 int A[3][4] = {{1,3,9,-4},{5,-5,55,66},{-7,2,10,11}} ;  for (int i = 0; i < 3; i++) 
for (int j = 0;j<4;j++){ 
if (j==3) 
cout<<A[i][j]<<endl; 
} 
 //Program 90 to print only the even number in row 2 of the array #include <iostream> 
using namespace std; 
int main(){ 
 int A[3][4] = {{1,3,9,-4},{5,-5,55,66},{-7,2,10,11}} ;  for (int i = 0; i < 3; i++) 
for (int j = 0;j<4;j++){ 
if (i==1) 
 if (A[i][j] % 2 == 0) 
 cout<<A[i][j]<<" is even\n"; 
} 
}
//Program 91 print the original array then swap the first element with the last element of the array then print the new array 
//{{1,3,9,-4},{5,-5,55,66},{-7,2,10,11}} 
// hit use a temporary variable to swap 
#include <iostream> 
using namespace std; 
int main(){ 
 int A[3][4] = {{1,3,9,-4},{5,-5,55,66},{-7,2,10,11}} ; 
 for (int i = 0; i < 3; i++) 
for (int j = 0;j<4;j++){ 
cout<<A[i][j]<< “”;) 
cout<<endl; 
} 
int temp = A[0][0]; 
A[0][0]=A[2][3] 
A[2][3]=temp; 
cout<< “...........”<<endl; 
cout<< “the new array is \n”; 
for(int i = 0;j<4;j++) 
cout<<A[i][j]<< “”; 
cout<<endl; 
} 
return 0; 
}

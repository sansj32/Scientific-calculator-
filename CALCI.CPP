
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<math.h>

float mult(float num1,float num2);
float add(float num1,float num2);
float sub(float num1,float num2);
float divide(float num1,float num2);
float sqr(float num1);
float cube(float num1);
float sqrt(float num1);
float percentage(float num1,float num2);
float cbrt(float num1);
float lg(float num1);
float lg10(float num1);
float sin(float num1);
float cos(float num1);
float tan(float num1);
float fact(float num1);

#define PI 3.14
#define G 180

int main()
{
    clrscr();
    int choice;
    float num1,num2;
    float j=num1;
    cout<<endl<<"******************\\\\\\ Sanskar's Multi-Purpose Calculator ///******************"<<endl;
    cout<<endl<<"Make a selection:"<<endl;
    cout<<endl<<"1.Division"<<endl;
    cout<<"2.Addition"<<endl;
    cout<<"3.Subtraction"<<endl;
    cout<<"4.Multiplication"<<endl;
    cout<<"5.Square"<<endl;
    cout<<"6.Cube"<<endl;
    cout<<"7.Square Root"<<endl;
    cout<<"8.Percentage"<<endl;
    cout<<"9.Cube Root"<<endl;
    cout<<"10.Logarthimic Values"<<endl;
    cout<<"11.Trigonometric Values"<<endl;
    cout<<"12.Factorial"<<endl;
    cout<<"Press any other key to exit"<<endl;
    cout<<endl<<"Press the no. key: "<<endl;
    cin>>choice;
    switch(choice)
	{
	 case 1:
	  cout<<endl<<"Please enter the two numbers you want to divide: ";
	  cin>>num1>>num2;
	  cin.ignore();
	  if(num2==0)
	   cout<<endl<<"Infinite!"<<endl;
	  else
	   cout<<endl<<" "<<num1<<"/"<<num2<<"="<<divide(num1,num2)<<endl;
	  cout<<endl<<"Run the program again to do more calculation! Thanks for using my program!!!"<<endl;
	  break;
	 case 2:
	  cout<<endl<<"Please enter the two numbers you want to add: ";
	  cin>>num1>>num2;
	  cin.ignore();
	  cout<<endl<<" "<<num1<<"+"<<num2<<"="<<add(num1,num2)<<endl;
	  cout<<endl<<"Run the program again to do more calculation! Thanks for using my program!!!"<<endl;
	  break;
	 case 3:
	  cout<<endl<<"Please enter the two numbers you want to subtract: ";
	  cin>>num1>>num2;
	  cin.ignore();
	  cout<<endl<<" "<<num1<<"-"<<num2<<"="<<sub(num1,num2)<<endl;
	  cout<<endl<<"Run the program again to do more calculation! Thanks for using my program!!!"<<endl;
	  break;
	 case 4:
	  cout<<endl<<"Please enter the two numbers you want to multiply: ";
	  cin>>num1>>num2;
	  cin.ignore();
	  cout<<endl<<" "<<num1<<"*"<<num2<<"="<<mult(num1,num2)<<endl;
	  cout<<endl<<"Run the program again to do more calculation! Thanks for using my program!!!"<<endl;
	  break;
	 case 5:
	  cout<<endl<<"Enter the no.: ";
	  cin>>num1;
	  cin.ignore();
	  cout<<endl<<" "<<num1<<"^2"<<"="<<sqr(num1)<<endl;
	  cout<<endl<<"Run the program again to do more calculation! Thanks for using my program!!!"<<endl;
	  break;
	 case 6:
	  cout<<endl<<"Enter the no.: ";
	  cin>>num1;
	  cin.ignore();
	  cout<<endl<<" "<<num1<<"^3"<<"="<<cube(num1)<<endl;
	  cout<<endl<<"Run the program again to do more calculation! Thanks for using my program!!!"<<endl;
	  break;
	 case 7:
	  cout<<endl<<"Enter the no.: ";
	  cin>>j;
	  cin.ignore();
	  if(j<0)
	   cout<<endl<<"Complex Root!"<<endl;
	  else
	   cout<<endl<<" "<<j<<"^0.5"<<"="<<sqrt(j)<<endl;
	  cout<<endl<<"Run the program again to do more calculation! Thanks for using my program!!!"<<endl;
	  break;
	 case 8:
	   cout<<endl<<"Enter the num. & denom.: ";
	   cin>>num1>>num2;
	   cin.ignore();
	   if(num2==0)
	    cout<<endl<<"Infinite!"<<endl;
	   else
	    cout<<endl<<" "<<num1<<"*100/"<<num2<<"="<<percentage(num1,num2)<<"%"<<endl;
	   cout<<endl<<"Run the program again to do more calculation! Thanks for using my program!!!"<<endl;
	   break;
	 case 9:
	  cout<<endl<<"Enter the no.: ";
	  cin>>j;
	  cin.ignore();
	  if(j<0)
	   cout<<endl<<"Complex Root!"<<endl;
	  else
	   cout<<endl<<" "<<j<<"^0.333"<<"="<<cbrt(j)<<endl;
	  cout<<endl<<"Run the program again to do more calculation! Thanks for using my program!!!"<<endl;
	  break;
	 case 10:
	 {
	  int e;
	  cout<<endl<<"Which log base you want, please signify: "<<endl;
	  cout<<endl<<"1.Lge"<<endl;
	  cout<<"2.Lg10"<<endl;
	  cout<<endl<<"Enter the no. to select Base: "<<endl;
	  cin>>e;
	  switch(e)
	  {
	    case 1:
	    cout<<endl<<"Enter a no.: "<<endl;
	    cin>>j;
	    cin.ignore();
	    if(j<=0)
	     cout<<endl<<"Complex Output!"<<endl;
	    else
	     cout<<endl<<"loge("<<j<<")="<<lg(j)<<endl;
	    break;
	   case 2:
	    cout<<endl<<"Enter a no.: ";
	    cin>>j;
	    cin.ignore();
	    if(j<=0)
	     cout<<endl<<"Complex Output!"<<endl;
	    else
	     cout<<endl<<"log10("<<j<<")="<<lg10(j)<<endl;
	    break;
	   default:
	    cout<<endl<<"Invalid Entry! Bye!!!"<<endl;
	    cin.ignore();
	    break;
	  }
	    cout<<endl<<"Run the program again to do more calculation! Thanks for using my program!!!"<<endl;
	    break;
	}
	 case 11:
	 {
	  int f;
	  cout<<endl<<"Which log base you want, please signify: "<<endl;
	  cout<<endl<<"1.Sin"<<endl;
	  cout<<"2.Cos"<<endl;
	  cout<<"3.Tan"<<endl;
	  cout<<"4.Cosec"<<endl;
	  cout<<"5.Sec"<<endl;
	  cout<<"6.Cot"<<endl;
	  cout<<endl<<"Enter the no. to select Trigo. func.: "<<endl;
	  cin>>f;
	  cout<<endl<<"Enter a no. in terms of Degrees till 360"<<endl;
	  switch(f)
	  {
	    case 1:
	    cout<<endl<<"Enter a no.: "<<endl;
	    cin>>j;
	    cin.ignore();
	    cout<<endl<<"sin("<<j<<")="<<sin(j*3.14/180)<<endl;
	    break;
	   case 2:
	    cout<<endl<<"Enter a no.: "<<endl;
	    cin>>j;
	    cin.ignore();
	    cout<<endl<<"cos("<<j<<")="<<cos(j*3.14/180)<<endl;
	    break;
	   case 3:
	    cout<<endl<<"Enter a no.: "<<endl;
	    cin>>j;
	    cin.ignore();
	    if(j==90||j==270)
	     cout<<endl<<"Infinite!"<<endl;
	    else
	     cout<<endl<<"tan("<<j<<")="<<tan(j*3.14/180)<<endl;
	    break;
	   case 4:
	    cout<<endl<<"Enter a no.: "<<endl;
	    cin>>j;
	    cin.ignore();
	    if(j==0||j==180||j==360)
	     cout<<endl<<"Infinite!"<<endl;
	    else
	     cout<<endl<<"cosec("<<j<<")="<<(sin(j*3.14/180))<<endl;
	    break;
	   case 5:
	    cout<<endl<<"Enter a no.: "<<endl;
	    cin>>j;
	    cin.ignore();
	    if(j==90||j==270)
	     cout<<endl<<"Infinite!"<<endl;
	    else
	     cout<<endl<<"sec("<<j<<")="<<cos(j*3.14/180)<<endl;
	    break;
	   case 6:
	    cout<<endl<<"Enter a no.: "<<endl;
	    cin>>j;
	    cin.ignore();
	    if(j==0||j==180||j==360){
	     cout<<endl<<"Infinite!"<<endl;}
	    else
	     cout<<endl<<"cot("<<j<<")="<<(1/(tan(j*3.14/180)))<<endl;
	    break;

	   default:
	    cout<<endl<<"Invalid Entry! Bye!!!"<<endl;
	    cin.ignore();
	    break;
	  }
	    cout<<endl<<"Run the program again to do more calculation! Thanks for using my program!!!"<<endl;
	    break;
	}
	case 12:
	 cout<<endl<<"Enter a no.: "<<endl;
	 cin>>j;
	 cin.ignore();
	 cout<<endl<<"The Factorial of "<<j<<" = "<<fact(j)<<endl;
	 cout<<endl<<"Run the program again to do more calculation! Thanks for using my program!!!"<<endl;
	 break;

	default:
	 cout<<endl<<"Invalid Entry! Bye!!!"<<endl;
	 cout<<endl<<"Run the program again to do more calculation! Thanks for using my program!!!"<<endl;
	 cin.ignore();
	 break;

      }
	 cin.ignore();
	 return 0;
     }
  float mult(float num1,float num2)
  {
      return (num1*num2);
  }
  float add(float num1,float num2)
  {
    return (num1+num2);
  }
  float sub(float num1,float num2)
  {
   return (num1-num2);
  }
  float divide(float num1,float num2)
  {
   return (num1/num2);
  }
  float sqr(float num1)
  {
   return(num1*num1);
  }
  float cube(float num1)
  {
   return(num1*num1*num1);
  }
  float sqrt(float num1)
  {
   float i=num1;
   i=pow(num1,0.5);
   return(i);
  }
  float percentage(float num1,float num2)
  {
   return((num1*100)/num2);
  }
  float cbrt(float num1)
  {
   float i=num1;
   i=pow(num1,0.3333333333);
   return(i);
  }
  float lg(float num1)
  {
   float i=num1;
   i=log(num1);
   if(num1==1)
    return(0);
   else
    return(i);
  }
  float lg10(float num1)
  {
   float i=num1;
   i=log10(num1);
    if(num1==1)
     return(0);
   return(i);
  }
    float sin(float num1)
  {
   float i=num1;
   float h=0;
   h=PI/G;
   i=(sin(num1*h));
   return(i);
  }
   float cos(float num1)
  {
   float i=num1;
   float e=0;
   e=PI/G;
   i=(cos(num1*e));
   return(i);
  }
   float tan(float num1)
  {
   float i=num1;
   float k=0;
    k=PI/G;
    i=(tan(num1*k));
    return(i);
  }
  float fact(float num1)
  {
   float n=num1,facto=1,i;
   if(n>=0)
   {
    for(i=1;i<=n;i++)
    {
     facto=facto*i;
    }
    return(facto);
   }
   else
     {
    for(i=1;i<=-n;i++)
    {
     facto=facto*i;
    }
    return(-facto);
   }
  }

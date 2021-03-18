#include<iostream>
#include<string>

using namespace std;

template <class T>
void swap(T& x,T& y)
{
     T temp;
     temp=x;
     x=y;
     y=temp;
}
int main()
{
   int a=44 ;
   int b=66 ;
   float s=4.4;
   float t=6.6;
   string mr="George";
   string ms="Martha";
   cout<<"Before swap a: "<<a<<" b: "<<b<<endl;
   swap(a,b);
   cout<<"After swap a: "<<a<<" b: "<<b<<endl;
   cout<<"Before swap s: "<<s<<" t: "<<t<<endl;
   swap( s, t );
   cout<<"After swap s: "<<s<<" t: "<<t<<endl;
   
   cout<<"Before swap mr: "<<mr<<" ms: "<<ms<<endl; 
   swap(mr,ms);
   cout<<"After swap mr: "<<mr<<" ms: "<<ms<<endl;
system("pause");
return 0;
} 
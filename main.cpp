#include<iostream>
using namespace std;
void add(int c, int d){
    cout<<"Ans is : "<< c + d<<" "<<endl;
  }
  int sub ( int f , int e){
    return ( f-e);
    
  }
  int multiply ( int i, int j){
    return ( i*j);
  }  
  float divide (float k , float l){
    return (k/l);
  }  
  float percentage(float m ,float n){
    return ((m/n)*100);
  }
  int squar (int a ){
    return (a*a);
  }
 
int main(){
    char ch;
    cout<<"Enter the operation : ";
    cin>>ch;

    if(ch == '-') {
      int a , b ;
    cout<<"enter the vale of a : "<<endl;
    cin>>a;
    cout<<"enter the vale of b : "<<endl;
    cin>>b;
    cout<<"Ans is :"<<sub(a,b)<<endl;      
    }
    else if(ch == '+'){
      int a , b ;
    cout<<"enter the vale of a : "<<endl;
    cin>>a;
    cout<<"enter the vale of b : "<<endl;
    cin>>b;
      add( a,b );
    }
    else if(ch == '*'){
      int a , b ;
    cout<<"enter the vale of a : "<<endl;
    cin>>a;
    cout<<"enter the vale of b : "<<endl;
    cin>>b;
      cout<<"ans is :"<<multiply(a,b)<<endl;
    }
    else if (ch == '/'){
      float a , b ;
    cout<<"enter the vale of a : "<<endl;
    cin>>a;
    cout<<"enter the vale of b : "<<endl;
    cin>>b;
    cout<<"ans is" << divide(a,b)<<endl;
      
    } 
    else if( ch == '%'){
      float number,total;
      cout<<"Enter your number : ";
      cin>>number;
      cout<<"Enter total number : ";
      cin>>total;

      cout<<"Percentage is : "<<percentage(number,total)<<" "<<endl;
    }
    else if(ch == '^'){
      int a;
      cout<<"enter the value of a:";
      cin>>a;
      cout<<squar(a);
    }
    else cout<<" invalid operatior";
    
}


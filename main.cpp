#include <iostream>
#include<cstdlib>
using namespace std;
#include"NODE.h"
#include"LL.h"
#include"Menu.h"
#include <exception>

class my_cin: public exception
{
virtual const char* what() const throw() {
return "it ’s not a number"; }
} error;

int main(){
  LL *see;
  buyersee saw;
  see=&saw;
  int price,amount,N,N1,check_size,choice,i,check=0;
  string name;
  NODE *t;
   bubble();
  while(N!=3){
    
    try{
    N=Menu(check);
    if(cin.fail())
    {
    throw error;
    }
    check=N;
    
    if(N==1){
      check_size=see->what_size();
      if(check_size==0){
        cout<<"No product found"<<endl;
       }
      else{
        cout<<"Choose product"<<endl;
       see->show_all();
       see->buyorder();
       if(cin.fail())
        {
        throw error;
       }
       
      }
     }
    else if(N==2){
    check_size=see->what_size();
    N1=choice_seller();
    if(cin.fail())
     {
    throw error;
     }
      if(N1==1){
      cout<<"Product Name : ";
      cin>>name;
      cout<<"Amount : ";
      cin>>amount;
      if(cin.fail())
      {
    throw error;
      }
      cout<<"Price : ";
      cin>>price;
      if(cin.fail())
      {
    throw error;
      }
      t=new NODE(name,amount,price);
      see->add_node(t);
      }
      else if(N1==2&&check_size>0){
      see->LL::show_all();
      see->cutorder();
      if(cin.fail())
       {
       throw error;
       }  
      }
      else if(N1==2){
      cout<<"Stock empty"<<endl;
      }
    }
  }
  catch (exception& e) {
        cout << e.what() << endl; 
       
  cin.clear();
  cin.ignore(50,'\n');

  
        }
  }
}
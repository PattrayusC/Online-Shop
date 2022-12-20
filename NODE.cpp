#include <iostream>
using namespace std;
#include"NODE.h"

NODE::NODE(string x,int y,int z){
      name=x;
      amount=y;
      price=z;
      next=NULL;
      cout<<"Adding "<< name<<" "<<amount<<" "<<price<<" to market"<<endl;
      cout<<"Complete\n"<<endl;
}

NODE:: ~NODE(){
      cout<<"Product: "<<name<<" is being deleted"<<endl;
}
NODE* NODE::move_next(){
      return next;
}
void  NODE:: show_node(){
         cout<<"Product: "<<name<<" "<<amount<<" "<<price<<endl;
 }

void  NODE:: show_node_fee(){
  int x;
  x=price+(price*0.1);
         cout<<"Product: "<<name<<" "<<amount<<" "<<x<<endl;
}

void NODE::insert(NODE*& x){
     x->next=this;
     }

int NODE::what_price(){
  return price;
}

int NODE::what_price_buyer(){
  int x;
  x=price+(price*0.1);
  return x;
}

std::string NODE::what_name(){
  return name;
}

int NODE::what_amount(){
  return amount;
}

int NODE::decrease_amount(int x){
  amount-=x;
  return amount;
}
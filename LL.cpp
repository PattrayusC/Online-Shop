#include <iostream>
#include"NODE.h"
#include "LL.h"
using namespace std;

LL::LL(){
       hol=NULL;
       size=0;
}

LL::~LL(){
       int i;
	NODE *t;
	for(i=0;i<size;i++){
		t=hol;
		hol=hol->move_next();
		delete t;
	}
	
}

void LL::show_all(){
     NODE* t=hol;
     int i;
     for(i=0;i<size;i++){
      cout<<i<<" ";
      t->show_node();
	    t=t->move_next();    
     }
}
void LL::add_node(NODE *&A){

          hol->insert(A);
          hol=A;

       size++;

}

int LL::what_size(){
  return size;
}

void LL::cutorder(){
      NODE *run,*gon,*t;
      int kill,j;
      cout<<"Which Order do you want to delete"<<endl;
      cin>>kill;
      while(kill<0||kill>size-1){
        cout<<"Please enter number of order!"<<endl;  
        cout<<"Which Order do you want to delete"<<endl;
        cin>>kill;
      }
      if(kill==0){ //หัวLL
       t=hol;
		   hol=hol->move_next();
		   delete t;
       size--;
      }
      else{ 
        t=hol;     
        for(j=0;j<kill;j++){
          gon=t;    //gon อยู่ก่อน killed
          t=t->move_next();
        }
        run=t->move_next(); //ให้ run ข้าม killed ไป เพื่อไป insert ต่อ linklist
        run->insert(gon);
        delete t; //ลบ killed
        size--;
      }
}

void LL::buyorder(){
    int choice,i,money,ea,total,product_amount;
    NODE *picked,*gon,*run;
    cin>>choice;
    while(choice<0||choice>size-1){
      cout<<"Please enter number of order!"<<endl;  
      cout<<"Choose product order : ";
      cin>>choice;
    }
    if(choice==0){ //หัวLL
      picked=hol;
      picked->show_node_fee();
      cout<<"Enter amount : ";
      cin>>ea;
      product_amount=(picked->what_amount())-ea;
      while(product_amount<0){
        cout<<"Not enough product in stock"<<endl;
        cout<<"Enter amount : ";
        cin>>ea;
        product_amount=(picked->what_amount())-ea;
      }
      total=(picked->what_price_buyer())*ea;
      cout<<"Total price is "<<total<<endl;
      cout<<"Pay : ";
      cin>>money;
      while(money<total){
      cout<<"Not enough money"<<endl;
      cout<<"Pay : ";
      cin>>money;
      }
      cout<<"You have ordered "<<picked->what_name()<<endl;
      cout<<"Change : "<<money-total<<endl;

      product_amount=picked->decrease_amount(ea);

      if(product_amount==0){
        hol=hol->move_next();
        delete picked;
        size--;
      }
    }
    else{
      picked=hol;
      for(i=0;i<choice;i++){
        gon=picked;
        picked=picked->move_next();
      }
      picked->show_node_fee();
      cout<<"Enter amount : ";
      cin>>ea;
      product_amount=(picked->what_amount())-ea;
      while(product_amount<0){
        cout<<"Not enough product in stock";
        cout<<"Enter amount : ";
        cin>>ea;
        product_amount=(picked->what_amount())-ea;
      }
      total=(picked->what_price_buyer())*ea;
      cout<<"Total price is "<<total<<endl;
      cout<<"Pay : ";
      cin>>money;
      while(money<total){
      cout<<"Not enough money"<<endl;
      cout<<"Pay : ";
      cin>>money;
      }
      cout<<"You have ordered "<<picked->what_name()<<endl;
      cout<<"Change : "<<money-total<<endl;

      product_amount=picked->decrease_amount(ea);

      if(product_amount==0){
        run=picked->move_next();
        run->insert(gon);
        delete picked;
        size--;
      }
    }
}



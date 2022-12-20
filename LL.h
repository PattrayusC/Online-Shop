class LL{
protected:
      NODE*hol;
      int size;
public:
       void add_node(NODE*&);
       virtual void show_all();
       void cutorder();
       void buyorder();
       int what_size();
       ~LL();
       LL();
};

class buyersee: public LL{
public:
    void show_all(){
     NODE* t=hol;
     int i;
     for(i=0;i<size;i++){
        std::cout<<i<<" ";
        t->show_node_fee();
	      t=t->move_next();    
     }
}
};
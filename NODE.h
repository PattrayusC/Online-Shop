class NODE{
      int price,amount;
      std::string name;
      NODE* next;
public:
        NODE(std::string,int,int);
        void show_node();
        void show_node_fee();
        void insert(NODE*&);
        int what_price();
        int what_price_buyer();
        int what_amount();
        int decrease_amount(int);
        std::string what_name();
        NODE* move_next();
        ~NODE();
      };

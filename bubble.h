void swap(int *a ,int *b){
int t;
  t=*a;
  *a=*b;
  *b=t;
}

void bubble(){
  int i,j,sorted,a[4],num,ans;
  cout<<"Are you robot"<<endl;
  srand(time(NULL));
  for(i=0;i<=4;i++){
    a[i]=rand() % 9;
    cout<<a[i]<<" ";
    }
  for(i=4;i>=0;i--){
    sorted=0;
    for(j=0;j<i;j++){
      if(a[j]>a[j+1]) {// decending
        swap(&a[j],&a[j+1]);
        sorted=1;
      }
    }
  if(sorted==0) 
    break;
  }
  num=rand()%5+1;
  cout<<endl<<"Which number will be placed in "<<num<<" (order is lowest to highest)"<<endl;
  cin>>ans;
  if(a[num-1]==ans){
    cout<<"Correct"<<endl;
  }
  else{
    cout<<"Program terminated"<<endl;
    exit(0);
  }
}
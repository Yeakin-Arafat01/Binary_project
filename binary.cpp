#include <iostream>
using namespace std;

int main()
{
    int p;
int n[10];
int i,m,div,result,ncount,z;
cout<<"Enter a number: ";
cin>>m;


do{



    if(m%2==0){
            result=0;
            ncount++;


    }
    else if(m%2!=0){

        result=1;
ncount++;
    }
   for(i=ncount-1;i<ncount;i++){
cout<<"result: "<<(n[i]=result)<<endl;
   }

 m=m/2;

}





while(m!=0);



for(i=ncount-1;i>=0;i--){
    cout<<n[i];


}


   return 0;
}

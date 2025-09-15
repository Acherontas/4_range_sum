#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;


int cdi=0;
int fl=0;
int mnu=0;
int m;
int cto=1;
string mn;
long long int cd(long long int n){
    m=n%10;
    cdi+=m;
    fl=-1;
    cto+=1;
    if(n/10==0){
        fl=1;
               if(fl==1){}
               return cdi;   //return 1;
    }
    else
    {
        cd(n/10);
    }
    B:
    return cdi;
}
int cld=0;
int cdis(long long int nn,int dkp)
{
    cdi=0;
         int cdl=cd(nn);
         if(dkp==1){
         cout<<"\n";
         cout<<"Initial sum = " << cdl <<"\n";
         cout<<"\n";}
         cld=cdl;
         if(cdl>9){
             if(dkp==1){
             cout<<"---------Internal Sum -----------\n";}
             cdi=0;
             while(cdl>9){cdi=0;cdl=cd(cdl);
             if(dkp==1){
             cout<<"|---> " << cdl <<"\n";}
             if(cdl<=9){
                 if(dkp==1){
                 cout<<"|---> Exiting with " << cdl <<"\n"; cout<<"--------End of Sum------------\n";}
             break;}
             }
         }
         if(dkp==1){
         cout<<"\n";}
         return cdl;
}


int main(int argc,char** argv)
{
    cout<<"u enter the number to start and the times u want to run as sum or range of pivots \n";
    cout<<"something like that \n";
    //cout<<"enter start number \n";
    long long int x=0;
    //cin>>x;
    x=stoll(argv[1]);
    cout<<"u enter x \n"; cout<<x <<"\n";
    long long int tmp;
    //cout<<"enter times to run \n";
    int tms=0;
    //cin>>tms;
    tms=stoi(argv[2]);
    cout<<"u enter times to run \n"; cout<<tms <<"\n";
    cout<<"\n";

    tmp=x;
   long long int ct_res=0;
   long long int lt_res=0;
   long long int l_res=0;
   long long int xli=0;
    for(int i=0;i<=tms;i++){
         cout<<"using x " << x <<" ";
          for(int y=0;y<=3;y++){
             lt_res=x+1;

          }
           lt_res+=lt_res;
          //cout<<"range end " << lt_res <<"  ";
          xli=(lt_res+1)-x;
          cout<<"range end " << xli << " ";
          //if(i>0){lt_res-=1;}
          l_res=lt_res+1;
          cdi=0;
          ct_res=cdis(l_res,0);
          cout<<"+= " << l_res <<" with ct_res " << ct_res <<"\n";
          x=(lt_res+1)-x;
          x+=1;



    }
    return 0;
}

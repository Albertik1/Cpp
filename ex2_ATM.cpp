#include <iostream>
#include <string.h>
using namespace std;
 int main(){
 int deposit, withdraw, num;
 char pass[12], check[12];
 int result;
 while (cin >> pass >> deposit)
 {
   while(cin >> num)
   {
     if (num==1)
       {
         cin >> check;
         result = strcmp(pass,check);
         if (result==0)
         {
           cout << "Login successfully!" << endl;
         }
         else
         {
           cout << "Password is incorrect." << endl;
         }
       }
     else if (num==2)
     {
       cin >> withdraw;
       deposit-=withdraw;
      if (deposit < 0)
       {
         cout << "Insufficient balance." << endl;
       }
     }
     else if (num ==3)
     {
       cin >> withdraw;
       deposit+=withdraw;

     }
     else if (num==4)
     {
       cout << deposit << endl;
     }
     else if (num==0)
     {
       break;
     }

   }
 }



   return 0;
 }

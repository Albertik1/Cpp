#include <iostream>
using namespace std;

int main()
{
  int num, setn=0;
  while(cin>>num)
  {
    int arr[num];
    for(int i = 0; i < num; i++)
    {
      cin>>arr[i];
    }
    if(num == 0)
    {
      setn = 0;
      break;
    }
    int sum = 0;
    for (int i = 0; i < num; i++)
    {
      sum += arr[i];
    }
    int avg = 0;
    avg = sum/num;
    int r = 0;
    for(int i = 0; i < num; i++)
    {
      if(arr[i]<avg)
      {
        r += avg - arr[i];
      }
    }
    setn++;
    cout<<"Set #"<<setn<<endl;
    cout<<"The minimum number of moves is "<<r<<"."<<endl;
  }
  return 0;
}

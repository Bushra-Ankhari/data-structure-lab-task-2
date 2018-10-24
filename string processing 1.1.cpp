#include<iostream>
using namespace std;

int main()
{

    int i,j,m=0,n=0;
    char arr[]="PEOPLE";
     for( i=1; i<6; i++)
    {
        for(j=0;j<6-i;j++)
        {
            if(arr[j]>arr[j+1])

            {
                char temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                n++;
            }
m++;
        }
    }
    cout<<"After sorting the string : "<<endl;
    for(i=0;i<6;i++)cout<<arr[i]<<"\t";
    cout<<"\nNumber of Comparison : "<<m<<endl;
    cout<<"\nNumber of Interchange : "<<n<<endl;
    return 0;
}

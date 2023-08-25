#include <iostream>
#include<string.h>
#define MAX 100
#define PARITY 100
using namespace std;

int main()
{
    int i,j,seg, flag = 0;
    char arr[MAX], vrc[PARITY], lrc[PARITY];
    cout << "Enter the bit value: " << endl;
    cin >> arr;
    for ( i = 0; i < strlen(arr); i++)
    {
        if (strlen(arr)%i==0)
        {
            flag = 1;
            break;
        }
        else
        {
            flag = 0;
        } 
    }
    if (flag == 1  )
    {
        seg = strlen(arr);
    }
    
    
    return 0;
}
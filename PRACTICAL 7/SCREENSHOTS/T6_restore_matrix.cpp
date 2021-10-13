#include<iostream>
using namespace std;
    
int main ()
{
      int ar[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
      int n = 3;
      cout << "Before reverse:" << endl;
      for (int i = 0; i <= 2; i++)
        {
          for (int j = 0; j <= 2; j++)
    	{
    	  cout << ar[i][j] << " ";
    	}
          cout << endl;
        }
      int count = 0;
      cout << "After reverse:" << endl;
      for (int i = 0; i <= 2; i++)
        {
          for (int j = 0; j <= 2; j++)
    	{
    	  if (count < 5)
    	    {
    	      int temp = ar[i][j];
    	      ar[i][j] = ar[n - i - 1][n - j - 1];
    	      ar[n - i - 1][n - j - 1] = temp;
    	      count++;
    	    }
    	  else
    	    break;
    	}
        }
      for (int i = 0; i <= 2; i++)
        {
          for (int j = 0; j <= 2; j++)
    	{
    	  cout << ar[i][j] << " ";
    	}
          cout << endl;
    
        }
      return 0;
    }

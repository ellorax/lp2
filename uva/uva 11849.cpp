
#include <iostream>
#include <set>
using namespace std;
 
int main ()
{
  int n; 
  int m; 
  int result;
  int temp;
   
  while (true)
  {
        cin >> n >> m;
        if (n == 0 && m == 0)
           break;
         
        set<int> myset;
 
        result = 0;
         
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            myset.insert(temp);
        }
         
        for (int i = 0; i < m; i++)
        {
            cin >> temp;
            int tempSize = myset.size();
            myset.insert(temp);
            if (tempSize == myset.size())
               result++;
        }
         
        cout << result << "\n";
             
  }
   
  return 0;
}

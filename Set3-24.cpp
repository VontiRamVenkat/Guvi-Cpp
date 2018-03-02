 #include <iostream>
 using namespace std;
    int main()
    {
        int i, j, a, n, number[30];
        cout<<"Enter the value of N ";
        cin>>n;
        cout<<"Enter the numbers";
        for (i = 0; i < n; ++i)
            cin>>number[i];
        for (i = 0; i < n; ++i) 
        {
            for (j = i + 1; j < n; ++j)
            {
                if (number[i] > number[j]) 
                {
                    a =  number[i];
                    number[i] = number[j];
                    number[j] = a;
                }
            }
        }
        cout<<"sort\n";
        for (i = 0; i < n; ++i)
            cout<<number[i]<<" ";
            return 0;
    }

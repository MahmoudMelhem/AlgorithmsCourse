/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

#include <time.h> 


using namespace std;
long long fact_1(long long n)
{ if(n==0||n==1)
    return 1;
    else 
    return n*fact_1(n-1);
}
int main()
{
    // لتخزين وقت التوقف endTime لتخزين وقت البدء و المتغير startTime سنستخدم المتغير
    clock_t startTime;
    clock_t endTime;
    startTime = clock();
    long long n=1;
    //cin>>n;
    /*
        for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }

    endTime = clock();

    cout << "fact = " << fact << endl;
	//in iterative method 
	*/
//in recursive method 
long long result=fact_1(n);

    endTime = clock();

    cout << "fact = " << result << endl;

    double time1=double(endTime - startTime) / CLOCKS_PER_SEC;
        cout << "Execution Time in Seconds: " <<time1*1000<<endl;


    return 0;
}
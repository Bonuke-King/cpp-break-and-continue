//break statement used to jump out of a switch statement
//break statement also used to jump out of aloop

#include <iostream>
using namespace std;

int main ()
{
for (int i=0; i<10; i++)
{
    if (i==4)
    {
        break;
    }
    cout << i<< endl <<endl;
}
//cpp continue
//the continue statements breaks on iteration (in the loop)
//if a specified condition occurs and continues with the next iteration in the loop


for (int c=0; c<10; c++)
{
    if (c==4)
    {
        continue;
    }
    cout <<c<<endl<<endl;
}

//break and continue in while loop

int x=0;
while (x<10){
    cout << x<< endl;
    x++;
    if (x==4)
    {
        break;
    }
    cout <<endl<<endl<<endl;
}

int b=0;
while (b<10)
{
    if (b==4)
    {b++;
    continue;
    }
    cout <<b<<endl;
    b++;
    cout <<endl <<endl<<endl;
}


int n=1;
while(n<6)
{
    cout <<n<<endl;
    n++;
    cout <<endl <<endl<<endl;
}



    return 0;
}
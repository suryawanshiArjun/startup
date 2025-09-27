#include <iostream>
using namespace std;
// int maze(int sr,int sc, int er, int ec)
// {
//     if(sr>er || sc>ec) return 0;
//     if(sr==er && sc==ec) return 1;
//     int rightways=maze(sr,sc+1,er,ec);
//     int downways=maze(sr+1,sc,er,ec);
//     return rightways+downways; 
// }
void printpath(int sr,int sc, int er, int ec,string s)
{
    if(sr>er || sc>ec) return;
    if(sr==er && sc==ec) 
    {
        cout<<s<<"\n";
        return ;
    }
    printpath(sr,sc+1,er,ec,s+'R');
    printpath(sr+1,sc,er,ec,s+'D');
}
int maze2(int er,int ec)
{
    if(er<1 ||ec<1) return 0;
    if(er==1 && ec==1) return 1;
    int right=maze2(er,ec-1);
    int down=maze2(er-1,ec);
    return right+down;
}
void printpath2(int er, int ec,string s)
{
    if(er<1 || ec<1) return;
    if(er==1 && ec==1) 
    {
        cout<<s<<"\n";
        return ;
    }
    printpath2(er,ec-1,s+'R');
    printpath2(er-1,ec,s+'D');
}
int main()
{
    // cout<<maze(0,0,2,2)<<"\n"; // for 4 parimeter
    // printpath(0,0,2,2,"");
    cout<<maze2(2,2)<<"\n";
    printpath2(2,2,"");
}
#include<bits/stdc++.h>
using namespace std;
class Counter                                                //base class
{
    protected:                                              //NOTE: not private
        unsigned int count;                                 //count
    public:
        Counter() : count(0)                                //no-arg constructor
        { }
        Counter(int c) : count(c)                           //1-arg constructor
        { }
        unsigned int get_count() const                      //return count
        { 
            return count;                                   //incr count (prefix)
        }
        Counter operator ++ ()                             
        { 
            return Counter(++count);
        }
};
class CountDn : public Counter
{
    public:
        CountDn() : Counter()                          //constructor, no args
        { }
        CountDn(int c) : Counter(c)                    //constructor, 1 arg
        { }
        CountDn operator -- ()                         //decr count (prefix)
        {
            return CountDn(--count); 
        }
};
int main(){
    CountDn c1;                                         //class CountDn
    CountDn c2(100);
    cout << "\nc1=" << c1.get_count();                  //display
    cout << "\nc2=" << c2.get_count();                  //display
    ++c1; ++c1; ++c1;                                   //increment c1
    cout << "\nc1=" << c1.get_count();                  //display it
    --c2; --c2;                                         //decrement c2
    cout << "\nc2=" << c2.get_count();                  //display it
    CountDn c3 = --c2;                                  //create c3 from c2
    cout << "\nc3=" << c3.get_count();                  //display c3
    cout << endl;
    return 0;
}
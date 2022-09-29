#include<bits/stdc++.h>
using namespace std;
class Counter{
    unsigned int count;
    public:
    Counter() : count(0)
    {}
    Counter(int c) : count(c)
    {}
    unsigned int get_count(){
        return count;
    }
    Counter operator ++(){
        ++count;
        return Counter(count);
    }
    Counter operator ++ (int){
        count++;
        return Counter(count);
    }
};
int main(){
    Counter c1, c2;
    cout<<"\nC1="<<c1.get_count();
    cout<<"\nC2="<<c2.get_count();
    ++c1;
    c2=++c1;
    cout<<"\nC1="<<c1.get_count();
    cout<<"\nC2="<<c2.get_count();
    c2=c1++;
    cout<<"\nC1="<<c1.get_count();
    cout<<"\nC2="<<c2.get_count()<<endl;
    return 0;
}
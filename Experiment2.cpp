#include <iostream>
#include <cstdio>
#include <stack>
#include <queue>
#include <string>
#include <map>
#include <set>
#define MAX_N 100
using namespace std;

class users
{
public:
    string l_p_number;
    char enter;
    char exit;
    int stall;
    users(string s): l_p_number(s) {};
    void setup_num(int i) {stall=i;}
};
class stall
{
    int num;
    bool empty;
public:
    stall(int i):empty(true),num(i){};
    bool empty(){return empty;}
    int get_num(){return num;} 
};


stack<stall> e_stall;    //空位
deque<users> w_users;    //等待中的用户
set<string,int> q_users;   //提前退出的用户


void init()
{
    for(int i=0;i<MAX_N;i++)
    {
        stall a(i+1);
        e_stall.push(a);
    }
}

void enter()
{
    users a;
    
    w_users.pop();

}
int main()
{
    char option;
    init();
    while(1)
    {
        scanf("%c",&option);
        if(option=='a')
        {
            string s;
            printf("车牌号： ");
            scanf("%s",s);
            users the_new(s);
            if(!e_stall.empty())
            {
                the_new.setup_num(e_stall.top().get_num()); //有空位
            }
            else
            {
                w_users.push(the_new);
            }
        }
        if(option=='q')
        {
            string s;
            printf("离开\n车牌号： ");
            scanf("%s",s);
            deque::iter
            w_users.find(s);
        }
    }
    return 0;
}
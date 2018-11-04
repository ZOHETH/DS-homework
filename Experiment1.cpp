#include <cstdio>
#include <iostream>
using namespace std;
template <class T>
struct iterator{
    
};
template <class T>
class list
{
  private:
    typedef struct node
    {
        T data;
        struct node *prev;
        struct node *next;
    } Node;
    typedef struct
    {
        Node *head;
        Node *tail;
    } l;
    l *the_list;
    int size;
    int volume;

  public:
    list();
    ~list();
    class iterator
    { //迭代器
      public:
        Node *addr;
        list &outer;
        iterator(list &o, Node *a) : outer(o), addr(a){};
        void operator++(){addr = addr->next};
        bool operator!=(iterator i){return != i->addr};
    };
    void erase(Node *it);
    void push_bcak(T _data);
    iterator &begin();
};

template <class T>
list<T>::list() //构造函数
{
    l *p;
    p = (l *)malloc(sizeof(Node));
    if (p == NULL)
    {
        exit;
    }

    p->head = NULL;
    p->tail = NULL;
    the_list = p;
}
template <class T>
void list<T>::push_bcak(T d)
{
    node *p;
    p = (node *)malloc(sizeof(node));
    p->data = d;
    if (the_list->head == NULL)
    {
        the_list->head = p;
        the_list->tail = p;
        p->prev = NULL;
        p->next = NULL;
    }
    else
    {
        Node *temp = l->tail;
        l->tail = p;
        p->next = NULL;
        p->prev = temp;
    }
}
template <class T>
void list<T>::erase(Node *it) //删除节点
{
    if (it == NULL)
        return;
    if (it == the_list->head)
    {
        the_list->head = it->next;
        if (the_list->head == NULL)
            the_lish->tail = NULL;
    }
    else if (it == the_list->tail)
    {
        the_list->tail = it->prev;
    }
    else
    {
        it_next = it->next;
        it->prev->next = it->next;
        it_next->prev = it->prev;
    }
    free(it);
    return;
}

int main()
{
    int n, m;
    cout << "Josephus Rank\n";
    cout << "n,m\n";
    while (scanf("%d,%d", &n, &m) != EOF)
    {
        list<int> josephus;
        for (int i = 1; i <= n; i++)
        {
            josephus.push_bcak(n);
        }
        list<int>::iterator iter;
        for (iter =)
            cout << "n,m\n";
    }
    return 0;
}
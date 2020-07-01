#include "stack.hpp"

using namespace std;

int main()
{

    Stack stack(4);
    cout <<"Pilha iniciada: " << stack.size() << endl;
    for(int i=0; i<15; i++)
    {
        stack.push(i);
    }

    cout <<"Pilha preechida: " << stack.size() << endl;

    for(int i=0; i<15; i++)
    {
        cout << stack.top() << endl;
        stack.pop();
    }

    if(stack.empty()){
        cout <<"Pilha vazia: " << stack.size() << endl;
    }else{
        cout << "Ainda possui " << stack.size() << " na pilha" << endl;
    }

    return 0;
}

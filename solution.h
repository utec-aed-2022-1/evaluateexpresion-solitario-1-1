#include <iostream>

using namespace std;

struct Result{
    double result;
    bool error;
}


Result evaluate(string input)
{
    try {
        float a;
        float b;
        for(auto it:input){
        if(isdigit(it))
            result.push_front(it-'0');
        }
        
        if(!operador.empty()){
           if(operador.top()=='/'&&(it==*|| it=='+' || it=='-')){
           a=result.front();
           result.pop_front();
           b=result.front();
           result.pop_front;
           result.push_front(b/a);
           operador.pop();
           } else if(operador.top()=='*' &&(it=='+'||it=='-')) {
              a=result.front();
              result.pop_front();
              b=result.front();
              result.pop_front();
              result.push_front(b*a);
              operador.pop();
           }else if(operador.top()=='+'&& it=='-'){
              a=result.front();
              result.pop_front();
              b=result.front();
              result.pop_front();
              result.push_front(b+a);
              operador.pop();
           }else if(it=='-'){
           switch(operador.top()){
               case '/':
               a=result.front();
               result.pop_front();
               b=result.front();
               result.pop_front;
               result.push_front(b/a);
               operador.pop();
                  break;
                   
                case '*':
               a=result.front();
               result.pop_front();
               b=result.front();
               result.pop_front;
               result.push_front(b/a);
               operador.pop();
                  break;
                   
                 case '+':
               a=result.front();
               result.pop_front();
               b=result.front();
               result.pop_front;
               result.push_front(b/a);
               operador.pop();
                  break;
                   
                   case '-':
               a=result.front();
               result.pop_front();
               b=result.front();
               result.pop_front;
               result.push_front(b/a);
               operador.pop();
                  break;
           }
          }
        }
        else{
           operador.push(it);
        }
        catch(...){
            cout<<"No es correcto"<<endl; 
        }
        retunr *result.begin();
     }

    return Result();
}

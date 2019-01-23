#include <iostream>

using namespace std;

int fact (int N)
{
    if(N==0)
    {
        return 0;
    }
    
    if(N==1)
    {
        return 1;
    }
    
    return N* fact (N-1);
}


int main()
{
    setlocale(LC_ALL, "ru");
    cout<<"Для выхода используйте |quit|"<<endl;
    cout<<"Теперь вы можете найти факториал любого числа"<<endl;
    cout<<"Просто введите число"<<endl;
    cout<<endl;
    int q;
    cin>>q;
    cout<<"Факториал равен - "<<fact (q)<<endl;
    
    
    
    string answer;
    tryagain:
    cout<<endl;
    cout<<"Формула?"<<endl;
    cin>>answer;
    
    if(answer=="yes")
    {
      cout<<"---------------------"<<endl;
      cout<<"N * fact (N-1);"<<endl; 
      cout<<"---------------------"<<endl;
      return 0;
    }
    
     
     if(answer=="quit")
    {
       return 0;
    }
    
     if(answer=="no")
    {
            cout<<endl;
       cout<<"Bye bye"<<endl; 
           cout<<endl;
       return 0;
    }
 
     if (answer!="yes")
    {
       cout<<"Попробуй еще раз"<<endl; 
       goto tryagain;
    }
         if (answer!="no")
    {
       cout<<"Попробуй еще раз"<<endl; 
       goto tryagain;
    }
return 0;
}



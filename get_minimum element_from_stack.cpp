int _stack :: getMin()
{
   //Your code here
   stack<int>s1;
   if(s.empty())
   {
       return -1;
   }
   else
   {
       s1=s;
   int x=s1.top();
   int min=x;
   s1.pop();
   if(!s1.empty())
   {
   while(!s1.empty())
   {
       if(min>s1.top())
       {
           min=s1.top();
       }
       s1.pop();
   }
   return min;
   }
   else
   return x;
   }
}
/*returns poped element from stack*/
int _stack ::pop()
{
   //Your code here
   if(s.empty())
   {
       return -1;
   }
   else
   {
       int x=s.top();
   s.pop();
   return x;
   }
  // return -1;
}
/*push element x into the stack*/
void _stack::push(int x)
{
   //Your code here
   s.push(x);
}

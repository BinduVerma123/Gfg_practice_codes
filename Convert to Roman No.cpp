void convertToRoman(int n)
{
//Your code here
int num[]={1,4,5,9,10,40,50,90,100,400,500,900,1000};
string rom[]={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
int i=12;
while(n>0)
{
   int d=n/num[i];
   n=n%num[i];
   while(d--)
   {
     cout << rom[i];  
   }
   i--;
}
}

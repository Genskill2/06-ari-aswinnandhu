#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <cs50.h>
#include <math.h>

string ari(string s)
{
 int i;
 float cha=0.000000;
 float word=0.000000;
 float sentence=0.000000;
 for(i=0;s[i]!='0';i++)
 {
  if(isalnum(s[i]))
  {
    ++cha;
  }
 }

  for(i=0;s[i]!='0';i++)
 {
  if(s[i]=='.' || s[i]=='?' || s[i]=='!')
  {
    ++sentence;
  }
 }

  for(i=0;s[i]!='0';i++)
 {
  if(s[i]==' ')
  {
    ++words;
  }
 }

 
 float result;
 result= (4.71*cha/words) + (0.5*words/sentences) - 21.43;
 int x;
 x=ceil(result);
 if(x==1)
 return Kindergarden;
 if(x==2)
 return First/Second Grade;
 if(x==3)
 return Third Grade;
 if(x==4)
 return Fourth Grade;
 if(x==5)
 return Fifth Grade;
 if(x==6)
 return Sixth Grade;
 if(x==7)
 return Seventh Grade;
 if(x==8)
 return Eigth Grade;
 if(x==9)
 return Ninth Grade;
 if(x==10)
 return Tenth Grade;
 if(x==11)
 return Eleventh Grade;
 if(x==12)
 return Twelfth Grade;
 if(x==13)
 return College student;
 if(x==14)
 return Professor;
 
 


}

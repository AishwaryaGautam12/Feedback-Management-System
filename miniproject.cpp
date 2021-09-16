#include<iostream>
#include<string>
using namespace std;
class feedback
{
string name;
int roll;
string clss;
string div;
public:
feedback();
void accept();
};
class oop:public feedback
{
int a,b,c;
public:
void calculate()
{
cout<<"The teacher covers the entire syllabus?"<<endl;
cout<<"enter 1 for excellent"<<endl<<"enter 2 for good"<<endl<<"enter 3 for poor"<<endl;
cin>>a;
switch(a)
{
case 1:
cout<<"excellent"<<endl;
break;
case 2:
cout<<"good"<<endl;
break;
case 3:
cout<<"poor"<<endl;
break;
default:
cout<<"invalid choice"<<endl;
}
cout<<"The teacher discusses topics in detail?"<<endl;
cout<<"enter 1 for excellent"<<endl<<"enter 2 for good"<<endl<<"enter 3 for poor"<<endl;
cin>>b;
switch(b)
{
case 1:
cout<<"excellent"<<endl;
break;
case 2:
cout<<"good"<<endl;
break;
case 3:
cout<<"poor"<<endl;
break;
default:
cout<<"invalid choice"<<endl;
}
cout<<"The teacher communicates clearly?"<<endl;
cout<<"enter 1 for excellent"<<endl<<"enter 2 for good"<<endl<<"enter 3 for poor"<<endl;
cin>>c;
switch(c)
{
case 1:
cout<<"excellent"<<endl;
break;
case 2:
cout<<"good"<<endl;
break;
case 3:
cout<<"poor"<<endl;
break;
default:
cout<<"invalid choice"<<endl;
}
}
};
class ppl:public feedback
{
int a,b,c;
public:
void calculate()
{
cout<<"The teacher covers the entire syllabus?"<<endl;
cout<<"enter 1 for excellent"<<endl<<"enter 2 for good"<<endl<<"enter 3 for poor"<<endl;
cin>>a;
switch(a)
{
case 1:
cout<<"excellent"<<endl;
break;
case 2:
cout<<"good"<<endl;
break;
case 3:
cout<<"poor"<<endl;
break;
default:
cout<<"invalid choice"<<endl;
}
cout<<"The teacher discusses topics in detail?"<<endl;
cout<<"enter 1 for excellent"<<endl<<"enter 2 for good"<<endl<<"enter 3 for poor"<<endl;
cin>>b;
switch(b)
{
case 1:
cout<<"excellent"<<endl;
break;
case 2:
cout<<"good"<<endl;
break;
case 3:
cout<<"poor"<<endl;
break;
default:
cout<<"invalid choice"<<endl;
}
cout<<"The teacher communicates clearly?"<<endl;
cout<<"enter 1 for excellent"<<endl<<"enter 2 for good"<<endl<<"enter 3 for poor"<<endl;
cin>>c;
switch(c)
{
case 1:
cout<<"excellent"<<endl;
break;
case 2:
cout<<"good"<<endl;
break;
case 3:
cout<<"poor"<<endl;
break;
default:
cout<<"invalid choice"<<endl;
}
}
};
class deld:public feedback
{
int a,b,c;
public:
void calculate()
{
cout<<"The teacher covers the entire syllabus?"<<endl;
cout<<"enter 1 for excellent"<<endl<<"enter 2 for good"<<endl<<"enter 3 for poor"<<endl;
cin>>a;
switch(a)
{
case 1:
cout<<"excellent"<<endl;
break;
case 2:
cout<<"good"<<endl;
break;
case 3:
cout<<"poor"<<endl;
break;
default:
cout<<"invalid choice"<<endl;
}
cout<<"The teacher discusses topics in detail?"<<endl;
cout<<"enter 1 for excellent"<<endl<<"enter 2 for good"<<endl<<"enter 3 for poor"<<endl;
cin>>b;
switch(b)
{
case 1:
cout<<"excellent"<<endl;
break;
case 2:
cout<<"good"<<endl;
break;
case 3:
cout<<"poor"<<endl;
break;
default:
cout<<"invalid choice"<<endl;
}
cout<<"The teacher communicates clearly?"<<endl;
cout<<"enter 1 for excellent"<<endl<<"enter 2 for good"<<endl<<"enter 3 for poor"<<endl;
cin>>c;
switch(c)
{
case 1:
cout<<"excellent"<<endl;
break;
case 2:
cout<<"good"<<endl;
break;
case 3:
cout<<"poor"<<endl;
break;
default:
cout<<"invalid choice"<<endl;
}
}
};
feedback::feedback()
{
name="abc";
roll=1;
clss="sybtech";
div="D";
}
void feedback::accept()
{
cout<<"enter your name:"<<endl;
getline(cin,name);
cout<<"enter your roll number:"<<endl;
cin>>roll;
cout<<"enter your class:"<<endl;
cin>>clss;
cout<<"enter your division:"<<endl;
cin>>div;
}
int main()
{
int n;
feedback f;
oop o;
ppl p;
deld d;
f.accept();
cout<<"To fill the feedback form"<<endl;
while(1)
{
cout<<"enter 1 for oop"<<endl<<"enter 2 for ppl"<<endl<<"enter 3 for deld"<<endl<<"enter 4 for exit"<<endl;
cin>>n;
switch(n)
{
case 1:
o.calculate();
break;
case 2:
p.calculate();
break;
case 3:
d.calculate();
break;
case 4:
cout<<"Thank you for giving your feedback"<<endl;
return 0;
default:
cout<<"invalid choice"<<endl;
}
}
}



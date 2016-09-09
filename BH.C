#include<stdio.h>
#include<malloc.h>
struct node
{
char n;
int degree;
struct node* parent;
struct node* child;
struct node* sibling;
}*H,*Hr;
struct node *make_heap()
{
struct node *p;
p=NULL;
return p;
}
struct node *create_node(int ele)
{
struct node *np;
np=(struct node*)malloc(sizeof(struct node));
np->n=ele;
return np;
}
struct node *bi_link(struct node *y, struct node *z)
{
y->parent=z;
y->sibling=z->child;
z->child=y;
z->degree=z->degree+1;
}
struct node *heap_merge(struct node *H1,struct node *H2)
{
struct node* H=make_heap();
struct  node* y;
struct  node* z;
struct  node* a;
struct node* b;
y=H1;
z=H2;
if(y!=NULL)
{
if(z!=NULL&&y->degree<=z->degree)
H=y;
else if(z!=NULL&&y->degree>z->degree)
H=z;
else
H=y;
}
else
H=z;
while(y!=NULL&&z!=NULL)
{
if(y->degree<z->degree)
{
y=y->sibling;
}
else if(y->degree==z->degree)
{
a=y->sibling;
y->sibling=z;
y=a;
}
else
{
b=z->sibling;
z->sibling=y;
z=b;
}
}
return H;
}
struct node *heap_union(struct node *H1,struct node *H2)
{
struct node *prev_x,*next_x,*x;
struct node *H=make_heap();
H=heap_merge(H1,H2);
if(H==NULL)
return H;
prev_x=NULL;
x=H;
next_x=x->sibling;
while(next_x!=NULL)
{
if(x->degree!=next_x->degree ||(next_x->sibling!=NULL&&(next_x->sibling)->degree==x->degree))
{
prev_x=x;
x=next_x;
}
else
{
if(x->n <= next_x->n)
{
x->sibling=next_x->sibling;
bi_link(next_x,x);
}
else
{
if(prev_x==NULL)
H=next_x;
else
prev_x->sibling=next_x;
bi_link(x,next_x);
x=next_x;
}
}
next_x=x->sibling;
}
return H;
}
struct node *insert(struct node *h,struct node *x)
{
struct node *H=make_heap();
x->child=NULL;
x->sibling=NULL;
x->parent=NULL;
x->degree=0;
H=x;
h=heap_union(h,H);
return h;
}
int display(struct node* H)
{
struct node* p;
if(H==NULL)
{
printf("\nheap is empty");
return 0;
}
printf("\nroot nodes are:-\n");
p=H;
while(p!=NULL)
{
printf("%d",p->n);
if(p->sibling!=NULL)
printf("-->");
p=p->sibling;
}
printf("\n");
}
struct node* extract_min(struct node* H1)
{
int min;
struct node* t=NULL;
struct   node* x=H1;
struct node *Hr;
struct node* p;
Hr=NULL;
if(x==NULL)
{
printf("\nNOTHING TO EXTRACT");
return x;
}
//    int min=x->n;
p=x;
while(p->sibling!=NULL)
{
if((p->sibling)->n<min)
{
min=(p->sibling)->n;
t=p;
x=p->sibling;
}
p=p->sibling;
}
if(t==NULL&&x->sibling==NULL)
H1=NULL;
 
else if(t==NULL)
H1=x->sibling;
else if(t->sibling==NULL)
t=NULL;
else
t->sibling=x->sibling;
if(x->child!=NULL)
{
revert_list(x->child);
(x->child)->sibling=NULL;
}
H=heap_union(H1,Hr);
return x;
}
int revert_list(struct node* y)
{
if(y->sibling!=NULL)
{
revert_list(y->sibling);
(y->sibling)->sibling=y;
}
else
{
Hr=y;
}
}
struct  node* find_node(struct node* H,int k)
{
struct node* x=H;
struct  node* p=NULL;
if(x->n==k)
{
p=x;
return p;
}
if(x->child!=NULL&&p==NULL)
{
p=find_node(x->child,k);
}
if(x->sibling!=NULL&&p==NULL)
{
p=find_node(x->sibling,k);
}
return p;
}
int decrease_key(struct node* H,int i,int k)
{
int temp;
struct     node* p;
struct node* y;
struct node* z;
p=find_node(H,i);
if(p==NULL)
{
printf("\nINVALID CHOICE OF KEY TO BE REDUCED");
return 0;
}
if(k>p->n)
{
printf("\nSORY!THE NEW KEY IS GREATER THAN CURRENT ONE");
return 0;
}
p->n=k;
y=p;
z=p->parent;
while(z!=NULL&&y->n<z->n)
{
temp=y->n;
y->n=z->n;
z->n=temp;
y=z;
z=z->parent;
}
printf("\nKey reduced success fully!");
}
int delete(struct node* H,int k)
{
struct  node* np;
if(H==NULL)
{
printf("\nHEAP EMPTY");
 
return 0;
}
decrease_key(H,k,-1000);
np=extract_min(H);
if(np!=NULL)
printf("\nnode deleted\n");
}
void main()
{
int ele,i;
int ch,ch1,m,l;
struct node *p,*np;
H=NULL;
printf("enter the number of elements:");
scanf("%d",&ele);
printf("enter the elements\n");
for(i=0;i<ele;i++)
{
scanf("%d",&ch);
p=create_node(ch);
H=insert(H,p);
}
display(H);
do
{
printf("Enter  your choise:1.inset() 2.Extract min 3.Delete 4.Decrease 5.exit  ");
scanf("%d",&ch1);
switch(ch1)
{
case 1:
printf("Enter any number:");
scanf("%d",&ch);
p=create_node(ch);
H=insert(H,p);
display(H);
break;
case 2:
p=extract_min(H);
if(p!=NULL)
printf("\nThe extracted node is: %d\n",p->n);
break;
case 3:
printf("\nenter element to be deleted: ");
scanf("%d",&m);
delete(H,m);
display(H);
break;
case 4:
printf("\nenter the key to be decrease:");
scanf("%d",&m);
printf("\nEnter new Key : ");
scanf("%d",&l);
decrease_key(H,m,l);
printf("\nnow the heap is:\n");
display(H);
break;
}
}while(ch1!=5);}


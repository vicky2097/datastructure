#include <iostream>
using namespace std;
int n;
struct node
{
    int data;
    struct node *next;
}*start=NULL;
 class ll
 {
     public:
      node* create_node(int value)
        {
             struct node *temp;
           temp = new(struct node);
            temp->data = value;
            temp->next = NULL;
             return temp;
        }

            void inst()
       {
        	 int value;
            cout<<"Enter the value to be inserted: ";
             cin>>value;
             cout<<endl;
             struct node *temp, *s;
              temp = create_node(value);
              if (start == NULL)
             {
              start = temp;
              start->next = NULL;
             }
             else
             {
                s = start;
                while (s->next != NULL)
                {
                s = s->next;
                 }
                temp->next = NULL;
                s->next = temp;

             }
       }

              void display()
            {
                struct node *temp;
                if (start == NULL)
                {
                    cout<<"The List is Empty"<<endl;
                    return;
                }
                temp = start;
                cout<<"Elements of list are: "<<endl;
                while (temp != NULL)
                {
                    cout<<temp->data<<"->";
                    temp = temp->next;
                }
            }
            void searching()
            {    int k,i;
                struct node *s,*p;
                s=new(struct node);
                p=new(struct node);
                s=start;
                p=start;
                cout<<"enter the k-th node to be searched:";
                cin>>k;
                i=n-k;
                for(int j=0;j<i;j++)
                    p=p->next;
                while(p->next!=NULL)
                {
                    s=s->next;
                    p=p->next;

                }
                cout<<endl<<"k th node data is:"<<s->data;
            }

 };
 int main()
 {
     ll a;

     cout<<"enter the no.of nodes to be inserted:";
     cin>>n;
     for(int i=0;i<n;i++)
     a.inst();
     a.display();
     a.searching();
     return 0;
 }


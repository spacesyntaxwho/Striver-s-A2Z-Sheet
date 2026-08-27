#include<iostream>
using namespace std;

struct order{
    int order_id;
    string customer_name;
    int order_quantity;
};

class queue{
    public:
    int front;
    int rear;
    order arr[10];

    queue(){
        front = -1;
        rear = -1;
    }

    int is_queue_empty(){
        if(front ==-1 && rear ==-1 || front == (rear+1)%10){
            return 1;
        }
        else{
            return 0;
        }
    }

    int is_queue_full(){
        if(rear == (front+9)%10){
            return 1;
        }
        else{
            return 0;
        }
    }

    void place_order(){
        if(is_queue_full()){
            cout<<"Queue is full, cannot place order."<<endl;
        }
        else{
            if(is_queue_empty()){
                front = (front+1)%10;
                rear = (rear+1)%10;
                cout<<"Order "<< rear+1 <<" details:\n";
                cin>>arr[rear].order_id;
                cin>>arr[rear].customer_name;
                cin>>arr[rear].order_quantity;
                cout<<"Order placed"<<endl;
            }
            else{
                rear = (rear+1)%10;
                cout<<"Order "<< rear+1 <<" details:\n";
                cin>>arr[rear].order_id;
                cin>>arr[rear].customer_name;
                cin>>arr[rear].order_quantity;
                cout<<"Order placed"<<endl;
            }
        }
    }

    void  serve_order(){
        if(is_queue_empty()){
            cout<<"Queue is empty.Order cannot be served."<<endl;
        }
        else{
            cout<<"Order "<<front + 1<<" is being served."<<endl;
            front = (front+1)%10;
        }
    }

    void display_order() {
        if (is_queue_empty()) {
            cout << "Queue is empty." << endl;
            return;
        }
        int i = front;
        while (true) {
            cout << "Order " << i + 1 << " details:\n";
            cout << arr[i].order_id << endl;
            cout << arr[i].customer_name << endl;
            cout << arr[i].order_quantity << endl;
            if (i == rear) {
                break;
            }
            i = (i + 1) % 10;
        }
    }
};



int main(){
    queue q;
    q.place_order();
    q.place_order();
    q.serve_order();
    q.display_order();


    return 0;
}

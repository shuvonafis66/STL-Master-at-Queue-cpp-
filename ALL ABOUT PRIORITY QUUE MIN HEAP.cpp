/*queue::empty()	Returns whether the queue is empty. It return true if the queue is empty otherwise returns false.
queue::size()	Returns the size of the queue.
queue::swap()	Exchange the contents of two queues but the queues must be of the same data type, although sizes may differ.
queue::emplace()	Insert a new element into the queue container, the new element is added to the end of the queue.
queue::top()	Returns a reference to the first element of the queue.
queue::push(g) 	Adds the element ‘g’ at the end of the queue.
queue::pop() 	Deletes the first element of the queue.*/

#include<iostream>
#include<queue>

using namespace std;

int main()
{
    priority_queue<int,vector<int>,greater<int>> que;//MAX_Heap

    que.push(9);
    que.push(8);
    que.push(5);
    que.push(5);
    que.emplace(6);

    cout << "The size of the queue is: " << que.size() << endl;

    // Check if the queue is empty or not
    if (que.empty())
        cout << "The queue is empty" << endl;
    else
        cout << "The queue is not empty" << endl;

    // Printing the first and last elements of the queue
    cout << "The first element of the queue is " << que.top() << endl;

    // Loop for printing the elements of the queue
    cout << "The elements of the queues are: " << endl;

    while (!que.empty())
    {
        cout << que.top() << endl;
        que.pop();
    }

    return 0;
}


deque<int> q;
//Finding the minimum:
int minimum = q.front();
//Adding an element:
while (!q.empty() && q.back() > new_element)
    q.pop_back();
q.push_back(new_element);
//Removing an element:
if (!q.empty() && q.front() == remove_element)
    q.pop_front();

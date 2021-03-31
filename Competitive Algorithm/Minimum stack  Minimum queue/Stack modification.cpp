stack<pair<int, int>> st;
//Adding an element:
int new_min = st.empty() ? new_elem : min(new_elem, st.top().second);
st.push({new_elem, new_min});
//Removing an element:
int removed_element = st.top().first;
st.pop();
//Finding the minimum:
int minimum = st.top().second;

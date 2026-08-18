class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for (auto i: operations){
            if(i == "+"){
                int l = st.top();
                st.pop();
                int m = st.top();
                st.push(l);
                st.push(l+m);
            }
            else if(i == "D" || i == "C"){
                if(i == "D"){
                    int l = st.top();
                    st.push(2 * l);
                }
                else {
                    st.pop();
                }
            }
            else{
                int s = stoi(i);
                st.push(s);
            }
        }
        int sum=0;
        int n = st.size();
        for(int i=0; i<n;i++){
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};
class Solution {
public:
    int findColoredRoot(vector<vector<int>>& edges, string colors) {
        int n = colors.size();
        vector<int> d(n,0);
        vector<int> id(n,0);
        for (auto &edge : edges){
            int u = edge[0];
            int v = edge[1];
            d[u]++;
            d[v]++;
            if(colors[u] == colors[v])
            {
                return -1;
            }
            if((colors[u] == 'R' && colors[v] == 'B')  || (colors[u] == 'B' && colors[v] == 'W') || (colors[u] == 'W' && colors[v] == 'R')){
                id[v]++;
            }
            else{
                id[u]++;
            }
        }
        int r = -1;
        int i =0;
        while(i<n)
        {
            if(id[i] == 0)
            {
                if(r != -1 || d[i]>2)
                {
                    return -1;
                }
                r = i;
            }
            else if(id[i] != 1 || d[ i] > 3)
            {
                return -1;
            }
            i++;
        }
        return r;
    }
};
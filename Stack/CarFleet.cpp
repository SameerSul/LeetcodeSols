class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        // probably will have to use a while loop because all cars arrive at different times?
        int n = position.size();
        // and within this for loop we'll have to iterate over the positions, it'll have to represent time (in hours)
        // need to create a hash map that keeps track of the position and speed of each
        int carFleets = 0;
        vector<pair<int, int>> posSpeed(n);

        for (int i = 0; i < n; i++)
        {
            posSpeed[i] = {position[i], speed[i]}; // if this doesn't work try first and second method
        }

        // then we need to sort it, in order of descending position
        sort(posSpeed.begin(), posSpeed.end(), [](const auto& a, const auto& b) {
            return a.first > b.first; // sort in decreasing order, a is first ptr ref and b is second
        });
        
        // now that array is sorted we can do the fun stuff
        
        // push all elements onto the stack
        vector<double> stack; // order relies on time to reach
        // initialize stack calculate time to reach for each one, if time is less than then we delete that element
        for (int i = 0; i < n; i++)
        {
            double time = static_cast<double>(target - posSpeed[i].first) / posSpeed[i].second; // time to get there is dist/velocity
            
            if (stack.empty() || time > stack.back()) // only add if current time > previous time
            {
                stack.push_back(time);
                carFleets++;
            }
        }

        return carFleets;
    }
};
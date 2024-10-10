class Solution {
public:
    vector<int> stableMountains(vector<int>& height, int threshold) {
        vector<int> indices;

        for (size_t i = 1; i < height.size(); ++i)
        {
            if (height[i - 1] > threshold)
            {
                indices.push_back(i);
            }
        }

        return indices;
    }
};
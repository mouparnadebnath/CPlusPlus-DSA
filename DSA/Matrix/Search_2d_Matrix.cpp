class Solution {
public:
    bool searchRow(vector<vector<int>>& mat, int tar, int mid) {
        int n = mat[0].size();
        int left = 0, right = n - 1;
        while (left <= right) {
        int md = left + (right - left) / 2;
            if (mat[mid][md] == tar) {
                return true;
            } else if (mat[mid][md] < tar) {
                left = md + 1;
            } else {
                right = md - 1;
            }

        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& mat, int tar) {
        int m = mat.size();
        int n = mat[0].size();
        int st = 0, end = m - 1;
        while (st <= end) {
        int mid = st + (end - st) / 2;
            if (mat[mid][0] <= tar && mat[mid][n - 1] >= tar) {
                // binary search on the row
                return searchRow(mat, tar, mid);

            } else if (mat[mid][0] >= tar) {
                end = mid - 1;
            } else if (mat[mid][n - 1] <= tar) {
                st = mid + 1;
            }

        }
        return false;
    }
};
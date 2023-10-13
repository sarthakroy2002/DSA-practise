vector<int> sortedArray(vector<int> a, vector<int> b) {
    vector<int> v;  // Initialize an empty vector to store the sorted result.
    int i = 0, j = 0;  // Initialize two pointers, i for vector 'a' and j for vector 'b'.

    // Compare elements from 'a' and 'b' until at least one vector is exhausted.
    while (i < a.size() && j < b.size()) {
        if (a[i] <= b[j]) {
            // If the current element from 'a' is less than or equal to the current element from 'b'.
            if (v.size() == 0 || v.back() != a[i]) {
                // Check if the result vector is empty or the current element is not a duplicate.
                v.push_back(a[i]);  // Add the element from 'a' to the result vector.
            }
            i++;  // Move the 'a' pointer to the next element.
        } else {
            // If the current element from 'b' is less than the current element from 'a'.
            if (v.size() == 0 || v.back() != b[j]) {
                // Check if the result vector is empty or the current element is not a duplicate.
                v.push_back(b[j]);  // Add the element from 'b' to the result vector.
            }
            j++;  // Move the 'b' pointer to the next element.
        }
    }

    // If there are remaining elements in 'a', add them to the result vector.
    while (i < a.size()) {
        if (v.back() != a[i]) {
            // Check for duplicates before adding elements.
            v.push_back(a[i]);
        }
        i++;
    }

    // If there are remaining elements in 'b', add them to the result vector.
    while (j < b.size()) {
        if (v.back() != b[j]) {
            // Check for duplicates before adding elements.
            v.push_back(b[j]);
        }
        j++;
    }

    return v;  // Return the sorted and deduplicated result vector.
}

/*
Given a sequence of integers as an array, 
determine whether it is possible to obtain a strictly increasing sequence 
by removing no more than one element from the array.

Note: sequence a0, a1, ..., an is considered to be a strictly increasing 
if a0 < a1 < ... < an. Sequence containing only one element is also considered 
to be strictly increasing.

Example
For sequence = [1, 3, 2, 1], the output should be
almostIncreasingSequence(sequence) = false.
There is no one element in this array that can be removed in order to get a strictly increasing sequence.

For sequence = [1, 3, 2], the output should be
almostIncreasingSequence(sequence) = true.

You can remove 3 from the array to get the strictly increasing sequence [1, 2]. 
Alternately, you can remove 2 to get the strictly increasing sequence [1, 3].

Input/Output
[execution time limit] 0.5 seconds (cpp)
[input] array.integer sequence

Guaranteed constraints:
2 ≤ sequence.length ≤ 105,
-105 ≤ sequence[i] ≤ 105.

[output] boolean
Return true if it is possible to remove one element from the array in order to get a strictly increasing sequence, 
otherwise return false.
*/

bool almostIncreasingSequence(vector<int> sequence) {
    int count = 0, last = INT_MIN, prevlast = INT_MIN;
    for (int i=0; i<sequence.size(); i++) {
        if (sequence[i] <= last) {
            count++;
            if (sequence[i] > prevlast) {
                last = sequence[i];
            }
        }
        else {
            prevlast = last;
            last = sequence[i];
        }
    }
    if (count > 1) {
        return false;
    }
    else {
        return true;
    }
    
}

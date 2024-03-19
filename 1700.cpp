// 1700. Number of Students Unable to Eat Lunch
// Easy

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        deque<int> students_deque(students.begin(), students.end());
        int counter = 0;

        while (counter < students_deque.size()){
            if (sandwiches.front() == students_deque.front()){
                sandwiches.erase(sandwiches.begin());
                students_deque.pop_front();
                counter = 0;
            } else {
                students_deque.push_back(students_deque.front());
                students_deque.pop_front();
                counter++;
            }
        }

    return students_deque.size();

    }
};

class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        int lowl = to_string(low).length();
        int highl = to_string(high).length();
        vector<int> temp;
        std::string numbers = "123456789";
        for (int i = lowl; i <= highl; i++) {
            for (int j = 0; j < 10 - i; j++) {
                int number = std::stoi(numbers.substr(j,i));
                if (number >= low && number <= high)
                    temp.push_back(number);
            }
        }
        return temp;
    }
};
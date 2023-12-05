class Solution {
public:
    std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
        std::unordered_map<std::string, std::vector<std::string>> anagramGroups;

        for (const std::string& str : strs) {
            // Sort the characters of the string to identify anagrams
            std::string key = str;
            std::sort(key.begin(), key.end());

            // Add the string to the corresponding group
            anagramGroups[key].push_back(str);
        }

        std::vector<std::vector<std::string>> result;

        // Extract groups from the map and add them to the result
        for (const auto& entry : anagramGroups) {
            result.push_back(entry.second);
        }

        return result;
    }
};
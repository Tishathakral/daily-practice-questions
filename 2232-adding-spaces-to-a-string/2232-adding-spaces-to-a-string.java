class Solution {
    public String addSpaces(String s, int[] spaces) {
        // Use StringBuilder for dynamic string manipulation
        StringBuilder result = new StringBuilder();
        int spaceCount = 0;

        for (int i = 0; i < s.length(); i++) {
            // Check if current index matches the next space index
            if (spaceCount < spaces.length && i == spaces[spaceCount]) {
                result.append(' '); // Add a space
                spaceCount++; // Move to the next space index
            }
            result.append(s.charAt(i)); // Add the current character
        }

        return result.toString();
    }
}

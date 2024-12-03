class Solution {
    public String addSpaces(String s, int[] spaces) {
        // Calculate the length of the new array
        int length = s.length() + spaces.length;
        char[] result = new char[length];
        
        int spaceIndex = 0; // Pointer for spaces array
        int resultIndex = 0; // Pointer for result array

        // Iterate through the characters of the string
        for (int i = 0; i < s.length(); i++) {
            // If the current index matches the next space position
            if (spaceIndex < spaces.length && i == spaces[spaceIndex]) {
                result[resultIndex++] = ' '; // Add a space
                spaceIndex++; // Move to the next space index
            }
            // Add the current character
            result[resultIndex++] = s.charAt(i);
        }

        // Convert the result array back to a String and return
        return new String(result);
    }
}

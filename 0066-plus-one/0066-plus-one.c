/**
 * Note: The returned array must be malloced, assume caller calls free().
 */


int* plusOne(int* digits, int digitsSize, int* returnSize) {
    *returnSize = digitsSize;  
    int carry = 1;  
    int* result = (int*)malloc((digitsSize + 1) * sizeof(int)); 
    
    
    for (int i = digitsSize - 1; i >= 0; i--) {
        int sum = digits[i] + carry; 
        result[i + 1] = sum % 10;  
        carry = sum / 10; 
    }
    
    
    if (carry) {
        result[0] = carry;  
        *returnSize = digitsSize + 1;
        return result;  
    }
    
    
    int* finalResult = (int*)malloc(digitsSize * sizeof(int));
    for (int i = 1; i < digitsSize + 1; i++) {
        finalResult[i - 1] = result[i];
    }
    free(result); 
    *returnSize = digitsSize; 
    return finalResult;
}

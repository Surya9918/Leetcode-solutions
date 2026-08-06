class Solution { 
public: 
    int smallestNumber(int n, int t) { 
        while (true) {
            int r = 1; 
            int temp = n; 
            
            
            while (temp > 0) { 
                int remainder = temp % 10; 
                r = r * remainder; 
                temp /= 10; 
            } 
            
          
            if (r % t == 0) { 
                return n; 
            } 
            
            n++; 
        } 
    } 
};

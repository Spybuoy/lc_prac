"""
PYTHON INTERVIEW CHEAT SHEET (SLIDING WINDOW, ARRAYS, STRINGS, DICTS)
Optimized for Speed (O(n)) and Cleanliness. 
Useful for Apple Design Verification (DV) / Software roles.
"""

import math
from collections import Counter, defaultdict, deque

# =============================================================================
# 1. STRINGS (The Bread & Butter)
# =============================================================================

s = "A man, a plan, a canal: Panama"

# Reverse a string
reversed_s = s[::-1]

# Clean a string (remove non-alphanumeric and lowercase)
# Essential for Palindrome problems
clean_s = "".join(char.lower() for char in s if char.isalnum())

# Count occurrences
freq_a = s.count('a')

# ASCII Conversion (Useful for shifting ciphers or bit manipulation)
# ord('a') -> 97, chr(97) -> 'a'
char_diff = ord('z') - ord('a') 


# =============================================================================
# 2. LISTS (Your Primary Buffer)
# =============================================================================

nums = [3, 1, 4, 1, 5, 9]

# Slicing: [start:stop:step]
first_three = nums[:3]
last_three = nums[-3:]
every_second = nums[::2]

# Sorting (O(n log n))
nums.sort()            # In-place (saves memory)
new_nums = sorted(nums) # Returns new list

# Custom Sort (e.g., sort by absolute value or length)
words = ["apple", "bat", "banana"]
words.sort(key=len)    # ["bat", "apple", "banana"]

# Initializing 2D Arrays (Matrix)
# DO NOT USE [[0]*n]*m (it creates shallow copies!)
rows, cols = 3, 4
grid = [[0 for _ in range(cols)] for _ in range(rows)]


# =============================================================================
# 3. DICTIONARIES & SETS (O(1) Lookups)
# =============================================================================

# DefaultDict: Prevents KeyErrors by providing a default starting value
d_int = defaultdict(int)   # Starts at 0
d_list = defaultdict(list) # Starts at []

# Counter: Automatically counts frequencies
counts = Counter("abracadabra") 
# Result: {'a': 5, 'b': 2, 'r': 2, 'c': 1, 'd': 1}
most_common_char = counts.most_common(1)[0][0] # Returns 'a'

# Sets: Use for unique elements and fast "membership" checks
seen = set()
seen.add(10)
if 10 in seen: # O(1) time
    pass


# =============================================================================
# 4. ITERATION POWER-UPS
# =============================================================================

# Enumerate: Get index AND value (Better than range(len(nums)))
for i, val in enumerate(nums):
    print(f"Index {i} has value {val}")

# Zip: Iterate through two lists simultaneously
names = ["Alice", "Bob"]
scores = [90, 85]
for name, score in zip(names, scores):
    print(f"{name}: {score}")

# Reversed: Iterate backwards
for x in reversed(nums):
    pass


# =============================================================================
# 5. MAX / MIN WITH "KEY" (The Interview Secret Weapon)
# =============================================================================

# Find string with max length
best_word = max(words, key=len)

# Find dict key with max value
score_dict = {"A": 10, "B": 50, "C": 20}
winner = max(score_dict, key=score_dict.get) # Returns "B"

# Find number furthest from zero
peak = max([-10, 5, 2], key=abs) # Returns -10


# =============================================================================
# 6. MATH & BITWISE (Hardware/DV Relevant)
# =============================================================================

# Infinity (Use for initializing min/max trackers)
min_val = float('inf')
max_val = float('-inf')

# Division
reg_div = 7 / 2    # 3.5
floor_div = 7 // 2 # 3

# Math Helpers
gcd = math.gcd(48, 18) # 6
rounded_up = math.ceil(4.2) # 5

# Binary / Bitwise
# 5 is 101, 3 is 011
bit_and = 5 & 3 # 001 (1)
bit_or  = 5 | 3 # 111 (7)
bit_xor = 5 ^ 3 # 110 (6)
bin_str = bin(5) # '0b101'


# =============================================================================
# 7. SLIDING WINDOW TEMPLATE (General Logic)
# =============================================================================
"""
def sliding_window(s):
    l = 0
    res = 0
    state = {} # or set()
    
    for r in range(len(s)):
        # 1. Add s[r] to state
        
        # 2. While state is invalid:
        #    Remove s[l] from state, l += 1
        
        # 3. Update res = max(res, r - l + 1)
    return res
"""

print("Cheat sheet loaded successfully!")
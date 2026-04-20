How it works:
---
## Example:
```c
&str[0] = 00 00 7f ff a3 17 bc 02
add = &str[0] = 00 00 7f ff a3 17 bc 02
```
### 1. Storing the Address as a Number
```c
bytes_of_addr = (long)add;
```
  - I stored the value of add (the memory address of str[0]) as a Decimal number.
  - Since a memory address on a 64-bit system is exactly 8 bytes, I used the long data type to ensure it can hold the entire 8-byte value without losing any data.

### 3. Accessing the Address Byte-by-Byte
 - `ptr_to_addr = (unsigned char *)&bytes_of_addr;`
 - `ptr_to_addr`  points to the memory location of `bytes_of_addr`.
 - Even though the variable contains 8 bytes, ptr_to_addr will only "see" 1 byte at a time because its type is unsigned char *. This allows me to use indexing (like ptr_to_addr[i]) to iterate through each individual byte of the address.

### 4. Why use unsigned char * instead of char *? (Crucial)
 - I used unsigned char because I am reading raw bytes directly from memory.
 - A single byte can hold a value up to FF (which is 255 in decimal).
 - The Problem with char: A standard char is typically signed, with a range only up to 127. If I read a byte containing FF using a signed char, it would cause an overflow, treating the value as -1.
 - The Result of an Overflow: This would break the logic. For example, trying to access your base array would result in base[-1 / 16], causing a crash or undefined behavior. By using unsigned, I ensure the value stays exactly between 0 and 255.
---
<img src="https://github.com/Yacin-lab/Uses/blob/main/img/output_print_memory.png" width="300" height="600">

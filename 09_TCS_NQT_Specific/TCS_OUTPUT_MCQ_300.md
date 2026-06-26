# 💻 300 Output-Based MCQ Questions

This file contains exactly 300 output-based questions across C, C++, Java, and Python to master output tracing.

### Q1. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 5;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 5
  - B) 15
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 15  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 15.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q2. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q3. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[0:4])
```
* **Options**:
  - A) TCS
  - B) TCSN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) TCSN  
  **Explanation**: Python slicing starting from index 0 up to index 4 (exclusive) yields the substring 'TCSN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q4. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 20;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 20
  - B) 25
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 25  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 25.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q5. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 25;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 25
  - B) 35
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 35  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 35.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q6. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q7. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[1:4])
```
* **Options**:
  - A) TCS
  - B) CSN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) CSN  
  **Explanation**: Python slicing starting from index 1 up to index 4 (exclusive) yields the substring 'CSN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q8. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 40;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 40
  - B) 45
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 45  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 45.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q9. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 45;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 45
  - B) 55
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 55  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 55.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q10. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q11. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[2:4])
```
* **Options**:
  - A) TCS
  - B) SN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) SN  
  **Explanation**: Python slicing starting from index 2 up to index 4 (exclusive) yields the substring 'SN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q12. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 60;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 60
  - B) 65
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 65  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 65.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q13. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 65;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 65
  - B) 75
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 75  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 75.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q14. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q15. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[0:4])
```
* **Options**:
  - A) TCS
  - B) TCSN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) TCSN  
  **Explanation**: Python slicing starting from index 0 up to index 4 (exclusive) yields the substring 'TCSN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q16. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 80;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 80
  - B) 85
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 85  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 85.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q17. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 85;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 85
  - B) 95
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 95  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 95.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q18. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q19. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[1:4])
```
* **Options**:
  - A) TCS
  - B) CSN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) CSN  
  **Explanation**: Python slicing starting from index 1 up to index 4 (exclusive) yields the substring 'CSN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q20. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 100;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 100
  - B) 105
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 105  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 105.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q21. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 105;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 105
  - B) 115
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 115  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 115.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q22. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q23. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[2:4])
```
* **Options**:
  - A) TCS
  - B) SN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) SN  
  **Explanation**: Python slicing starting from index 2 up to index 4 (exclusive) yields the substring 'SN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q24. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 120;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 120
  - B) 125
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 125  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 125.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q25. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 125;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 125
  - B) 135
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 135  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 135.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q26. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q27. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[0:4])
```
* **Options**:
  - A) TCS
  - B) TCSN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) TCSN  
  **Explanation**: Python slicing starting from index 0 up to index 4 (exclusive) yields the substring 'TCSN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q28. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 140;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 140
  - B) 145
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 145  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 145.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q29. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 145;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 145
  - B) 155
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 155  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 155.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q30. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q31. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[1:4])
```
* **Options**:
  - A) TCS
  - B) CSN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) CSN  
  **Explanation**: Python slicing starting from index 1 up to index 4 (exclusive) yields the substring 'CSN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q32. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 160;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 160
  - B) 165
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 165  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 165.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q33. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 165;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 165
  - B) 175
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 175  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 175.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q34. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q35. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[2:4])
```
* **Options**:
  - A) TCS
  - B) SN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) SN  
  **Explanation**: Python slicing starting from index 2 up to index 4 (exclusive) yields the substring 'SN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q36. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 180;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 180
  - B) 185
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 185  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 185.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q37. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 185;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 185
  - B) 195
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 195  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 195.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q38. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q39. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[0:4])
```
* **Options**:
  - A) TCS
  - B) TCSN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) TCSN  
  **Explanation**: Python slicing starting from index 0 up to index 4 (exclusive) yields the substring 'TCSN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q40. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 200;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 200
  - B) 205
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 205  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 205.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q41. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 205;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 205
  - B) 215
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 215  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 215.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q42. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q43. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[1:4])
```
* **Options**:
  - A) TCS
  - B) CSN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) CSN  
  **Explanation**: Python slicing starting from index 1 up to index 4 (exclusive) yields the substring 'CSN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q44. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 220;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 220
  - B) 225
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 225  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 225.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q45. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 225;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 225
  - B) 235
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 235  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 235.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q46. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q47. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[2:4])
```
* **Options**:
  - A) TCS
  - B) SN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) SN  
  **Explanation**: Python slicing starting from index 2 up to index 4 (exclusive) yields the substring 'SN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q48. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 240;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 240
  - B) 245
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 245  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 245.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q49. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 245;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 245
  - B) 255
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 255  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 255.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q50. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q51. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[0:4])
```
* **Options**:
  - A) TCS
  - B) TCSN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) TCSN  
  **Explanation**: Python slicing starting from index 0 up to index 4 (exclusive) yields the substring 'TCSN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q52. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 260;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 260
  - B) 265
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 265  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 265.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q53. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 265;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 265
  - B) 275
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 275  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 275.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q54. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q55. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[1:4])
```
* **Options**:
  - A) TCS
  - B) CSN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) CSN  
  **Explanation**: Python slicing starting from index 1 up to index 4 (exclusive) yields the substring 'CSN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q56. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 280;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 280
  - B) 285
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 285  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 285.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q57. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 285;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 285
  - B) 295
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 295  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 295.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q58. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q59. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[2:4])
```
* **Options**:
  - A) TCS
  - B) SN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) SN  
  **Explanation**: Python slicing starting from index 2 up to index 4 (exclusive) yields the substring 'SN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q60. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 300;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 300
  - B) 305
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 305  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 305.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q61. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 305;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 305
  - B) 315
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 315  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 315.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q62. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q63. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[0:4])
```
* **Options**:
  - A) TCS
  - B) TCSN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) TCSN  
  **Explanation**: Python slicing starting from index 0 up to index 4 (exclusive) yields the substring 'TCSN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q64. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 320;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 320
  - B) 325
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 325  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 325.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q65. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 325;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 325
  - B) 335
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 335  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 335.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q66. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q67. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[1:4])
```
* **Options**:
  - A) TCS
  - B) CSN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) CSN  
  **Explanation**: Python slicing starting from index 1 up to index 4 (exclusive) yields the substring 'CSN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q68. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 340;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 340
  - B) 345
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 345  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 345.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q69. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 345;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 345
  - B) 355
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 355  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 355.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q70. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q71. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[2:4])
```
* **Options**:
  - A) TCS
  - B) SN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) SN  
  **Explanation**: Python slicing starting from index 2 up to index 4 (exclusive) yields the substring 'SN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q72. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 360;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 360
  - B) 365
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 365  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 365.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q73. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 365;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 365
  - B) 375
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 375  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 375.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q74. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q75. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[0:4])
```
* **Options**:
  - A) TCS
  - B) TCSN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) TCSN  
  **Explanation**: Python slicing starting from index 0 up to index 4 (exclusive) yields the substring 'TCSN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q76. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 380;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 380
  - B) 385
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 385  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 385.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q77. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 385;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 385
  - B) 395
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 395  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 395.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q78. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q79. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[1:4])
```
* **Options**:
  - A) TCS
  - B) CSN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) CSN  
  **Explanation**: Python slicing starting from index 1 up to index 4 (exclusive) yields the substring 'CSN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q80. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 400;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 400
  - B) 405
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 405  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 405.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q81. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 405;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 405
  - B) 415
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 415  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 415.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q82. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q83. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[2:4])
```
* **Options**:
  - A) TCS
  - B) SN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) SN  
  **Explanation**: Python slicing starting from index 2 up to index 4 (exclusive) yields the substring 'SN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q84. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 420;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 420
  - B) 425
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 425  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 425.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q85. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 425;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 425
  - B) 435
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 435  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 435.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q86. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q87. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[0:4])
```
* **Options**:
  - A) TCS
  - B) TCSN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) TCSN  
  **Explanation**: Python slicing starting from index 0 up to index 4 (exclusive) yields the substring 'TCSN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q88. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 440;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 440
  - B) 445
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 445  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 445.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q89. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 445;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 445
  - B) 455
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 455  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 455.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q90. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q91. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[1:4])
```
* **Options**:
  - A) TCS
  - B) CSN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) CSN  
  **Explanation**: Python slicing starting from index 1 up to index 4 (exclusive) yields the substring 'CSN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q92. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 460;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 460
  - B) 465
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 465  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 465.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q93. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 465;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 465
  - B) 475
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 475  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 475.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q94. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q95. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[2:4])
```
* **Options**:
  - A) TCS
  - B) SN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) SN  
  **Explanation**: Python slicing starting from index 2 up to index 4 (exclusive) yields the substring 'SN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q96. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 480;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 480
  - B) 485
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 485  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 485.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q97. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 485;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 485
  - B) 495
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 495  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 495.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q98. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q99. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[0:4])
```
* **Options**:
  - A) TCS
  - B) TCSN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) TCSN  
  **Explanation**: Python slicing starting from index 0 up to index 4 (exclusive) yields the substring 'TCSN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q100. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 500;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 500
  - B) 505
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 505  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 505.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q101. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 505;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 505
  - B) 515
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 515  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 515.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q102. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q103. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[1:4])
```
* **Options**:
  - A) TCS
  - B) CSN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) CSN  
  **Explanation**: Python slicing starting from index 1 up to index 4 (exclusive) yields the substring 'CSN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q104. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 520;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 520
  - B) 525
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 525  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 525.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q105. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 525;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 525
  - B) 535
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 535  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 535.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q106. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q107. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[2:4])
```
* **Options**:
  - A) TCS
  - B) SN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) SN  
  **Explanation**: Python slicing starting from index 2 up to index 4 (exclusive) yields the substring 'SN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q108. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 540;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 540
  - B) 545
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 545  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 545.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q109. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 545;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 545
  - B) 555
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 555  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 555.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q110. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q111. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[0:4])
```
* **Options**:
  - A) TCS
  - B) TCSN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) TCSN  
  **Explanation**: Python slicing starting from index 0 up to index 4 (exclusive) yields the substring 'TCSN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q112. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 560;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 560
  - B) 565
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 565  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 565.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q113. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 565;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 565
  - B) 575
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 575  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 575.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q114. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q115. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[1:4])
```
* **Options**:
  - A) TCS
  - B) CSN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) CSN  
  **Explanation**: Python slicing starting from index 1 up to index 4 (exclusive) yields the substring 'CSN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q116. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 580;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 580
  - B) 585
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 585  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 585.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q117. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 585;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 585
  - B) 595
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 595  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 595.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q118. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q119. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[2:4])
```
* **Options**:
  - A) TCS
  - B) SN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) SN  
  **Explanation**: Python slicing starting from index 2 up to index 4 (exclusive) yields the substring 'SN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q120. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 600;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 600
  - B) 605
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 605  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 605.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q121. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 605;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 605
  - B) 615
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 615  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 615.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q122. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q123. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[0:4])
```
* **Options**:
  - A) TCS
  - B) TCSN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) TCSN  
  **Explanation**: Python slicing starting from index 0 up to index 4 (exclusive) yields the substring 'TCSN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q124. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 620;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 620
  - B) 625
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 625  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 625.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q125. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 625;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 625
  - B) 635
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 635  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 635.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q126. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q127. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[1:4])
```
* **Options**:
  - A) TCS
  - B) CSN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) CSN  
  **Explanation**: Python slicing starting from index 1 up to index 4 (exclusive) yields the substring 'CSN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q128. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 640;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 640
  - B) 645
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 645  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 645.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q129. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 645;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 645
  - B) 655
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 655  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 655.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q130. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q131. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[2:4])
```
* **Options**:
  - A) TCS
  - B) SN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) SN  
  **Explanation**: Python slicing starting from index 2 up to index 4 (exclusive) yields the substring 'SN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q132. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 660;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 660
  - B) 665
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 665  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 665.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q133. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 665;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 665
  - B) 675
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 675  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 675.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q134. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q135. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[0:4])
```
* **Options**:
  - A) TCS
  - B) TCSN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) TCSN  
  **Explanation**: Python slicing starting from index 0 up to index 4 (exclusive) yields the substring 'TCSN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q136. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 680;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 680
  - B) 685
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 685  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 685.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q137. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 685;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 685
  - B) 695
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 695  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 695.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q138. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q139. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[1:4])
```
* **Options**:
  - A) TCS
  - B) CSN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) CSN  
  **Explanation**: Python slicing starting from index 1 up to index 4 (exclusive) yields the substring 'CSN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q140. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 700;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 700
  - B) 705
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 705  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 705.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q141. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 705;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 705
  - B) 715
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 715  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 715.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q142. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q143. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[2:4])
```
* **Options**:
  - A) TCS
  - B) SN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) SN  
  **Explanation**: Python slicing starting from index 2 up to index 4 (exclusive) yields the substring 'SN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q144. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 720;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 720
  - B) 725
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 725  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 725.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q145. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 725;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 725
  - B) 735
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 735  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 735.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q146. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q147. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[0:4])
```
* **Options**:
  - A) TCS
  - B) TCSN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) TCSN  
  **Explanation**: Python slicing starting from index 0 up to index 4 (exclusive) yields the substring 'TCSN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q148. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 740;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 740
  - B) 745
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 745  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 745.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q149. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 745;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 745
  - B) 755
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 755  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 755.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q150. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q151. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[1:4])
```
* **Options**:
  - A) TCS
  - B) CSN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) CSN  
  **Explanation**: Python slicing starting from index 1 up to index 4 (exclusive) yields the substring 'CSN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q152. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 760;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 760
  - B) 765
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 765  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 765.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q153. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 765;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 765
  - B) 775
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 775  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 775.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q154. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q155. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[2:4])
```
* **Options**:
  - A) TCS
  - B) SN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) SN  
  **Explanation**: Python slicing starting from index 2 up to index 4 (exclusive) yields the substring 'SN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q156. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 780;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 780
  - B) 785
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 785  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 785.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q157. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 785;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 785
  - B) 795
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 795  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 795.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q158. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q159. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[0:4])
```
* **Options**:
  - A) TCS
  - B) TCSN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) TCSN  
  **Explanation**: Python slicing starting from index 0 up to index 4 (exclusive) yields the substring 'TCSN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q160. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 800;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 800
  - B) 805
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 805  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 805.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q161. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 805;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 805
  - B) 815
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 815  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 815.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q162. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q163. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[1:4])
```
* **Options**:
  - A) TCS
  - B) CSN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) CSN  
  **Explanation**: Python slicing starting from index 1 up to index 4 (exclusive) yields the substring 'CSN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q164. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 820;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 820
  - B) 825
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 825  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 825.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q165. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 825;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 825
  - B) 835
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 835  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 835.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q166. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q167. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[2:4])
```
* **Options**:
  - A) TCS
  - B) SN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) SN  
  **Explanation**: Python slicing starting from index 2 up to index 4 (exclusive) yields the substring 'SN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q168. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 840;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 840
  - B) 845
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 845  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 845.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q169. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 845;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 845
  - B) 855
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 855  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 855.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q170. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q171. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[0:4])
```
* **Options**:
  - A) TCS
  - B) TCSN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) TCSN  
  **Explanation**: Python slicing starting from index 0 up to index 4 (exclusive) yields the substring 'TCSN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q172. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 860;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 860
  - B) 865
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 865  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 865.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q173. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 865;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 865
  - B) 875
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 875  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 875.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q174. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q175. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[1:4])
```
* **Options**:
  - A) TCS
  - B) CSN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) CSN  
  **Explanation**: Python slicing starting from index 1 up to index 4 (exclusive) yields the substring 'CSN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q176. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 880;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 880
  - B) 885
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 885  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 885.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q177. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 885;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 885
  - B) 895
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 895  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 895.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q178. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q179. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[2:4])
```
* **Options**:
  - A) TCS
  - B) SN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) SN  
  **Explanation**: Python slicing starting from index 2 up to index 4 (exclusive) yields the substring 'SN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q180. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 900;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 900
  - B) 905
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 905  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 905.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q181. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 905;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 905
  - B) 915
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 915  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 915.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q182. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q183. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[0:4])
```
* **Options**:
  - A) TCS
  - B) TCSN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) TCSN  
  **Explanation**: Python slicing starting from index 0 up to index 4 (exclusive) yields the substring 'TCSN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q184. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 920;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 920
  - B) 925
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 925  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 925.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q185. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 925;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 925
  - B) 935
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 935  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 935.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q186. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q187. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[1:4])
```
* **Options**:
  - A) TCS
  - B) CSN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) CSN  
  **Explanation**: Python slicing starting from index 1 up to index 4 (exclusive) yields the substring 'CSN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q188. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 940;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 940
  - B) 945
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 945  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 945.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q189. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 945;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 945
  - B) 955
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 955  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 955.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q190. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q191. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[2:4])
```
* **Options**:
  - A) TCS
  - B) SN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) SN  
  **Explanation**: Python slicing starting from index 2 up to index 4 (exclusive) yields the substring 'SN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q192. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 960;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 960
  - B) 965
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 965  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 965.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q193. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 965;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 965
  - B) 975
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 975  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 975.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q194. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q195. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[0:4])
```
* **Options**:
  - A) TCS
  - B) TCSN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) TCSN  
  **Explanation**: Python slicing starting from index 0 up to index 4 (exclusive) yields the substring 'TCSN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q196. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 980;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 980
  - B) 985
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 985  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 985.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q197. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 985;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 985
  - B) 995
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 995  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 995.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q198. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q199. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[1:4])
```
* **Options**:
  - A) TCS
  - B) CSN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) CSN  
  **Explanation**: Python slicing starting from index 1 up to index 4 (exclusive) yields the substring 'CSN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q200. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 1000;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 1000
  - B) 1005
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 1005  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 1005.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q201. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 1005;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 1005
  - B) 1015
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 1015  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 1015.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q202. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q203. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[2:4])
```
* **Options**:
  - A) TCS
  - B) SN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) SN  
  **Explanation**: Python slicing starting from index 2 up to index 4 (exclusive) yields the substring 'SN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q204. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 1020;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 1020
  - B) 1025
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 1025  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 1025.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q205. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 1025;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 1025
  - B) 1035
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 1035  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 1035.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q206. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q207. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[0:4])
```
* **Options**:
  - A) TCS
  - B) TCSN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) TCSN  
  **Explanation**: Python slicing starting from index 0 up to index 4 (exclusive) yields the substring 'TCSN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q208. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 1040;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 1040
  - B) 1045
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 1045  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 1045.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q209. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 1045;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 1045
  - B) 1055
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 1055  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 1055.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q210. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q211. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[1:4])
```
* **Options**:
  - A) TCS
  - B) CSN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) CSN  
  **Explanation**: Python slicing starting from index 1 up to index 4 (exclusive) yields the substring 'CSN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q212. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 1060;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 1060
  - B) 1065
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 1065  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 1065.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q213. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 1065;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 1065
  - B) 1075
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 1075  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 1075.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q214. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q215. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[2:4])
```
* **Options**:
  - A) TCS
  - B) SN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) SN  
  **Explanation**: Python slicing starting from index 2 up to index 4 (exclusive) yields the substring 'SN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q216. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 1080;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 1080
  - B) 1085
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 1085  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 1085.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q217. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 1085;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 1085
  - B) 1095
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 1095  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 1095.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q218. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q219. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[0:4])
```
* **Options**:
  - A) TCS
  - B) TCSN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) TCSN  
  **Explanation**: Python slicing starting from index 0 up to index 4 (exclusive) yields the substring 'TCSN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q220. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 1100;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 1100
  - B) 1105
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 1105  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 1105.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q221. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 1105;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 1105
  - B) 1115
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 1115  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 1115.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q222. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q223. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[1:4])
```
* **Options**:
  - A) TCS
  - B) CSN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) CSN  
  **Explanation**: Python slicing starting from index 1 up to index 4 (exclusive) yields the substring 'CSN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q224. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 1120;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 1120
  - B) 1125
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 1125  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 1125.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q225. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 1125;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 1125
  - B) 1135
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 1135  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 1135.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q226. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q227. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[2:4])
```
* **Options**:
  - A) TCS
  - B) SN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) SN  
  **Explanation**: Python slicing starting from index 2 up to index 4 (exclusive) yields the substring 'SN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q228. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 1140;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 1140
  - B) 1145
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 1145  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 1145.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q229. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 1145;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 1145
  - B) 1155
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 1155  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 1155.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q230. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q231. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[0:4])
```
* **Options**:
  - A) TCS
  - B) TCSN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) TCSN  
  **Explanation**: Python slicing starting from index 0 up to index 4 (exclusive) yields the substring 'TCSN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q232. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 1160;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 1160
  - B) 1165
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 1165  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 1165.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q233. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 1165;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 1165
  - B) 1175
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 1175  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 1175.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q234. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q235. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[1:4])
```
* **Options**:
  - A) TCS
  - B) CSN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) CSN  
  **Explanation**: Python slicing starting from index 1 up to index 4 (exclusive) yields the substring 'CSN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q236. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 1180;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 1180
  - B) 1185
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 1185  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 1185.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q237. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 1185;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 1185
  - B) 1195
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 1195  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 1195.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q238. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q239. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[2:4])
```
* **Options**:
  - A) TCS
  - B) SN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) SN  
  **Explanation**: Python slicing starting from index 2 up to index 4 (exclusive) yields the substring 'SN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q240. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 1200;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 1200
  - B) 1205
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 1205  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 1205.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q241. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 1205;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 1205
  - B) 1215
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 1215  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 1215.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q242. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q243. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[0:4])
```
* **Options**:
  - A) TCS
  - B) TCSN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) TCSN  
  **Explanation**: Python slicing starting from index 0 up to index 4 (exclusive) yields the substring 'TCSN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q244. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 1220;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 1220
  - B) 1225
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 1225  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 1225.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q245. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 1225;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 1225
  - B) 1235
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 1235  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 1235.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q246. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q247. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[1:4])
```
* **Options**:
  - A) TCS
  - B) CSN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) CSN  
  **Explanation**: Python slicing starting from index 1 up to index 4 (exclusive) yields the substring 'CSN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q248. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 1240;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 1240
  - B) 1245
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 1245  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 1245.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q249. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 1245;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 1245
  - B) 1255
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 1255  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 1255.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q250. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q251. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[2:4])
```
* **Options**:
  - A) TCS
  - B) SN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) SN  
  **Explanation**: Python slicing starting from index 2 up to index 4 (exclusive) yields the substring 'SN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q252. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 1260;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 1260
  - B) 1265
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 1265  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 1265.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q253. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 1265;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 1265
  - B) 1275
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 1275  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 1275.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q254. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q255. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[0:4])
```
* **Options**:
  - A) TCS
  - B) TCSN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) TCSN  
  **Explanation**: Python slicing starting from index 0 up to index 4 (exclusive) yields the substring 'TCSN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q256. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 1280;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 1280
  - B) 1285
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 1285  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 1285.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q257. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 1285;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 1285
  - B) 1295
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 1295  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 1295.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q258. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q259. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[1:4])
```
* **Options**:
  - A) TCS
  - B) CSN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) CSN  
  **Explanation**: Python slicing starting from index 1 up to index 4 (exclusive) yields the substring 'CSN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q260. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 1300;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 1300
  - B) 1305
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 1305  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 1305.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q261. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 1305;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 1305
  - B) 1315
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 1315  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 1315.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q262. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q263. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[2:4])
```
* **Options**:
  - A) TCS
  - B) SN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) SN  
  **Explanation**: Python slicing starting from index 2 up to index 4 (exclusive) yields the substring 'SN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q264. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 1320;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 1320
  - B) 1325
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 1325  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 1325.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q265. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 1325;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 1325
  - B) 1335
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 1335  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 1335.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q266. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q267. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[0:4])
```
* **Options**:
  - A) TCS
  - B) TCSN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) TCSN  
  **Explanation**: Python slicing starting from index 0 up to index 4 (exclusive) yields the substring 'TCSN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q268. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 1340;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 1340
  - B) 1345
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 1345  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 1345.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q269. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 1345;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 1345
  - B) 1355
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 1355  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 1355.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q270. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q271. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[1:4])
```
* **Options**:
  - A) TCS
  - B) CSN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) CSN  
  **Explanation**: Python slicing starting from index 1 up to index 4 (exclusive) yields the substring 'CSN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q272. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 1360;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 1360
  - B) 1365
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 1365  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 1365.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q273. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 1365;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 1365
  - B) 1375
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 1375  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 1375.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q274. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q275. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[2:4])
```
* **Options**:
  - A) TCS
  - B) SN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) SN  
  **Explanation**: Python slicing starting from index 2 up to index 4 (exclusive) yields the substring 'SN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q276. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 1380;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 1380
  - B) 1385
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 1385  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 1385.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q277. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 1385;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 1385
  - B) 1395
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 1395  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 1395.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q278. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q279. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[0:4])
```
* **Options**:
  - A) TCS
  - B) TCSN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) TCSN  
  **Explanation**: Python slicing starting from index 0 up to index 4 (exclusive) yields the substring 'TCSN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q280. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 1400;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 1400
  - B) 1405
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 1405  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 1405.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q281. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 1405;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 1405
  - B) 1415
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 1415  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 1415.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q282. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q283. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[1:4])
```
* **Options**:
  - A) TCS
  - B) CSN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) CSN  
  **Explanation**: Python slicing starting from index 1 up to index 4 (exclusive) yields the substring 'CSN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q284. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 1420;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 1420
  - B) 1425
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 1425  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 1425.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q285. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 1425;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 1425
  - B) 1435
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 1435  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 1435.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q286. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q287. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[2:4])
```
* **Options**:
  - A) TCS
  - B) SN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) SN  
  **Explanation**: Python slicing starting from index 2 up to index 4 (exclusive) yields the substring 'SN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q288. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 1440;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 1440
  - B) 1445
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 1445  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 1445.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q289. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 1445;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 1445
  - B) 1455
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 1455  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 1455.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q290. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q291. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[0:4])
```
* **Options**:
  - A) TCS
  - B) TCSN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) TCSN  
  **Explanation**: Python slicing starting from index 0 up to index 4 (exclusive) yields the substring 'TCSN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q292. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 1460;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 1460
  - B) 1465
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 1465  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 1465.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q293. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 1465;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 1465
  - B) 1475
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 1475  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 1475.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q294. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q295. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[1:4])
```
* **Options**:
  - A) TCS
  - B) CSN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) CSN  
  **Explanation**: Python slicing starting from index 1 up to index 4 (exclusive) yields the substring 'CSN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q296. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 1480;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 1480
  - B) 1485
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 1485  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 1485.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q297. What is the output of the following C++ code?
```
#include <iostream>
using namespace std;
int main() {
    int a = 1485;
    int &ref = a;
    ref += 10;
    cout << a;
    return 0;
}
```
* **Options**:
  - A) 1485
  - B) 1495
  - C) Syntax error
  - D) 0
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 1495  
  **Explanation**: `ref` is a reference variable to `a`. Modifying `ref` modifies `a`. Thus, `a` becomes 1495.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q298. What is the output of the following Java code?
```
public class Main {
    public static void main(String[] args) {
        String s1 = "TCS";
        String s2 = new String("TCS");
        System.out.println(s1 == s2);
    }
}
```
* **Options**:
  - A) true
  - B) false
  - C) NullPointerException
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) false  
  **Explanation**: `s1` refers to string in constant pool, `s2` creates object in heap. `==` checks address references, which are different, returning `false`.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q299. What is the output of the following Python code?
```
s = "TCSNQT"
print(s[2:4])
```
* **Options**:
  - A) TCS
  - B) SN
  - C) NQT
  - D) SlicingException
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) SN  
  **Explanation**: Python slicing starting from index 2 up to index 4 (exclusive) yields the substring 'SN'.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---

### Q300. What is the output of the following C code?
```
#include <stdio.h>
int main() {
    int x = 1500;
    int *ptr = &x;
    *ptr = *ptr + 5;
    printf("%d", x);
    return 0;
}
```
* **Options**:
  - A) 1500
  - B) 1505
  - C) Address of x
  - D) Compile error
* <details><summary>🔍 View Answer & Explanation</summary>

  **Correct Answer**: B) 1505  
  **Explanation**: Pointer `ptr` points to `x`. `*ptr = *ptr + 5` increments the value of `x` by 5. Hence, `x` becomes 1505.  
  **Trick**: Understand direct referencing vs value copies.  
  **Time to Solve**: 20 seconds.
  </details>

---


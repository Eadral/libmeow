# libmeow

A cpp library for cats.

## Example

```cpp

#include <iostream>
#include "meow.hpp"

using namespace std;

int main() {

    println("Hello {}", "meow");

    cout << FORMAT("{} {}", 1, 'c') << endl;

    cout << meow::format("{} {}", "hello", "meow") << endl;

}


```

```bash
Hello meow                                                                         1 c                                                                                hello meow
```
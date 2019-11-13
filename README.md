# libmeow

A cpp library for cats.

## Example

```cpp

#include <iostream>
#include "meow.hpp"

using namespace std;

int main() {

    cout << FORMAT("{} {}", 1, 'c') << endl;

    cout << meow::format("{} {}", "hello", "meow") << endl;

}

```
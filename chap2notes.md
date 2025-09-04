# Fundamental Values


variable: portion of memory, stores a value

valid identifier:
- starts with letter (*sometimes* underscores, not recommended)
- includes letters, digits, and/or underscores
- excludes symbols, punctuation marks, and spaces

> note: c++ is case sensitive, so "Variable," "variable," and "VaRiAbLe," are different!

### According to cplusplus.com:
![table of fundamental values and characteristics<-- NOT MINE!](fundamental_types.png)
the types in the same group have the same characteristics, but different sizes.

### Types

*boolean, floating-point, integer,* and *character* types are all arithmetic types. <br>
*void* is just the lack of a type, and *nullptr* is a pointer. <br>
there are *compound types*, which are based on the aforementioned 4 fundamental types. these compound types are one of c++'s strengths.

### Declaration

c++ is strongly typed, therefore every variable must be declared before being used. <br>
just write the type and the variable name after it:<br>

int variable; <br>
float Variable; <br>
bool VaRiAbLe; <br>
char VARIABLE; <br>

> note: multiple variable of the same type can be listed on the same line with the same type abbrieviation. for example:<br>
 float a, d, j, w, n, c;

*declared variables do not have values until they are assigned one!*

### Initialization

declared variables are value-less until they are given a value. unless they are initialized, in which case they have a value when they're declared!<br>
c++ features 3 ways to initialize a variable:<br>

- c-like initialization<br>
  ``` type identifier = value; ```

- constructor initialization<br>
  ``` type identifier (value);```

- uniform initialization<br>
  ``` type identifier {value};```

<br>
all of these initializations are equal and accepted.

### Type Deduction

c++ is super cool because it can automatically detect/infer what the type of a variable is (if you let it). observe:<br>

``` int variable = 3;```<br>
``` auto whattypeami? = variable;```<br>

in the above snippet thingy, ```whattypeami?``` is of the type ```int```<br>

``` decltype(variable) whattypeami?``` also works! you can let c++ infer the type of an un-initialized variable by using ```decltype```


### String

strings are one of the many compound types. strings store sequences of characters, which can also be words or sentences! observe:<br>

```string word = "marsupial";```<br>
note that strings must be identified with *double* quotes.<br>

because ```string``` is not a fundamental type, ```#include <string>``` must be included in the header of the file including one. other than that, string are used the same way that fundamental types are used.


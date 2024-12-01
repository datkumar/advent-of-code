# Golang

The [Standard Library](https://pkg.go.dev/std) contains many packages for your needs such as `fmt` for formatting text

- Every Go program is made up of packages. Programs start running in package `main`. By convention, the package name is the same as the **last element of the import path**. For instance, the `math/rand` package comprises files that begin with the statement `package rand`

- Sample `Hello World` program:

  ```go
  package main // Define which package the file belongs to

  import "fmt" // Import for formatting text

  // Driver code
  func main() {
      fmt.Println("Hello World")
  }
  ```

- Running go program: `go run yourfile.go`

- **Imports**:

  ```go
  // Factored import statement (recommended):
  import (
      "fmt"
      "time"
  )
  // Multi-line import statements
  import "math"
  import "sort"
  ```

- **Exports**: must start with a Capital letter such as `Println` and `Pi` here. When you import them, you'll also refer them in that letter casing

  ```go
  fmt.Println(math.Pi)
  ```

## Functions

- Note that the **data type comes AFTER the variable name**. Refer [Go's declaration syntax](https://go.dev/blog/declaration-syntax) to know why

  ```go
  func add(x int, y int) int {
      return x + y
  }

  func main() {
      fmt.Println("Sum:", add(8, 15)) // Sum: 23
  }
  ```

- When two or more consecutive named parameters share the **same type**, you can **omit** the type from **all but the last** parameter

  ```go
  func greet(first, last string, age int) {
      fmt.Println("Hello", first, last)
      fmt.Println("You are", age, "years old")
  }

  func main() {
      greet("John", "Doe", 25)
      // Hello John Doe
      // You are 25 years old
  }
  ```

- A function can return **any number of results**

  ```go
  func swap(x, y string) (string, string) {
      return y, x
  }

  func main() {
      a, b := swap("Hello", "World")
      fmt.Println(a, b)
      // World Hello
  }
  ```

- Function **return values may be named**. If so, they are treated as variables defined at the top of the function. These names should be used to **document the meaning** of the return values

  ```go
  func split(num int) (x, y int) {
      x = num * 4 / 9
      y = num - x
      return
  }

  func main() {
      fmt.Println(split(17))
      // 7 10
  }
  ```

  A return statement without arguments returns the named return values. This is known as a **naked return**. They should be used only in short functions, as for longer functions, it can harm readability.

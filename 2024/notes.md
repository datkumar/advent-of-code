# Bash

- Count lines in file

  ```sh
  wc -l file.txt
  ```

- Longest word and longest line in file:

```sh
# Longest word
tr -s '[:space:]' '\n' < file.txt | awk '{ if (length > max) { max = length; word = $0 } } END { print word }'

# Longest line
awk 'length > max_length { max_length = length; longest = $0 } END { print longest }' file.txt
```

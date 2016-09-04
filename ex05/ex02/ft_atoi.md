# atoi: string to integer conversion

## The conversion

**TL;DR** = takes advantage of the ASCII/decimal range of characters and sequence by tens-place to convert to an integer
```c
num = num * 10 + str[i] - '0';
```
1. **Num:** stores the existing captured numbers
2. ```* 10```: takes captured numbers so far and iteratively adjusts for tens-place
3. ```str[i] - '0'```: uses ASCII/decimal range to convert to ones-place integer

### [ASCII table](http://blockofcodes.blogspot.com/2013/07/how-to-convert-string-to-integer-in-c.html)
|Character	|Decimal Value	|
|-----------|---------------|
|0			|48				|	
|1			|49				|
|2			|50				|
|3			|51				|
|4			|52				|
|5			|53				|
|6			|54				|
|7			|55				|
|8			|56				|
|9			|57				|

## The program

```c
// skips any non-printable characters preceding at '+'' or '-''
while (str[i] < 33)
	i++;

// accounts for negative numbers
if (str[i] == '+' || str[i] == '-')
{
	if (str[i] == '-')
		neg = -1;
	i++;
}

// handles the conversion
while (str[i] >= '0' && str[i] <= '9')
{
	num = num * 10 + str[i] - '0';
	i++;
}
```
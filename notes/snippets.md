### test if digits of number unique
```c++
int unique_digits( long long int n )
{
    const long long int Base = 10;

    int unique = 1;

    while ( unique && n )
    {
        long long int digit = n % Base;
        long long int tmp = n /= Base;

        while (tmp && digit != tmp % Base ) tmp /= Base;

        unique = tmp == 0;
    }

    return unique;
}
```
from [how do i check if a number has only unique digits?](https://stackoverflow.com/questions/59577683/how-do-i-check-if-a-number-has-only-unique-digits), the idea is nested loops with flag variable, unlike the ones with array ``int array[10]={0}``.

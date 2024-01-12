#include <stdio.h>
#include <math.h>
int main()
{
      int i = 2, a = 0, b = 1, c = 0, fact = 1;
      int n, p, ch, num, value, o;
      float numm, nu, res;
      printf("1.Addition\t2.Substraction\t3.Multiplication\t4.Division\t5.Remainder\t6.Power\t");
      printf("7.Logarithm\t8.Square root\t9.Cube root\t10.Exponential\t11.Log base10\t");
      printf("12.Ceil\t13.Floor\t14.Absolute\t15.Maximum\t16.Minimum\t17.EvenOdd\t18.PositiveNegative\t19.PrimeOrNot\t20.LeapYear\t");
      printf("21.Square\t22.Cube\t23.Factorial\t24.Fibonaci\t25.Armstrong\t26.Palindrome\t27.Spy\t28.PythagorasTriplet\t29.EquilateralTriangle\t");
      printf("30.Units converter\t31.Currency converter\n");
      printf("\n enter your choice\n");
      scanf("%d", &num);

      switch (num)
      {
      case 1:
            printf("enter two numbers:\n");
            scanf("%d%d", &n, &p);
            printf("Addition= %d", n + p);
            break;
      case 2:
            printf("enter two numbers:\n");
            scanf("%d%d", &n, &p);
            printf("Substraction= %d", n - p);
            break;
      case 3:
            printf("enter two numbers:\n");
            scanf("%d%d", &n, &p);
            printf("Multiplication= %d", n * p);
            break;
      case 4:
            printf("enter two numbers:\n");
            scanf("%d%d", &n, &p);
            printf("Divison= %d", n / p);
            break;
      case 5:
            printf("enter two numbers:\n");
            scanf("%d%d", &n, &p);
            printf("Remainder= %d", n % p);
            break;
      case 6:
            printf("enter your number and power:\n");
            scanf("%d%d", &n, &p);
            value = pow(n, p);
            printf("value= %d", value);
            break;
      case 7:
            printf("enter your number:\n");
            scanf("%f", &numm);
            res = log(numm);
            printf("log(%f)=%f", numm, res);
            break;
      case 8:
            printf("enter your number:\n");
            scanf("%f", &numm);
            res = sqrt(numm);
            printf("sqrt(%f)=%f", numm, res);
            break;
      case 9:
            printf("enter your number:\n");
            scanf("%f", &numm);
            res = cbrt(numm);
            printf("sqrt(%f)=%f", numm, res);
            break;
      case 10:
            printf("enter your number:\n");
            scanf("%f", &numm);
            res = exp(numm);
            printf("exp(%f)=%f", numm, res);
            break;
      case 11:
            printf("enter your number:\n");
            scanf("%f", &numm);
            res = log10(numm);
            printf("log10(%f)=%f", numm, res);
            break;
      case 12:
            printf("enter your number:\n");
            scanf("%f", &numm);
            res = ceil(numm);
            printf("ceil(%f)=%f", numm, res);
            break;
      case 13:
            printf("enter your number:\n");
            scanf("%f", &numm);
            res = floor(numm);
            printf("floor(%f)=%f", numm, res);
            break;
      case 14:
            printf("enter your number:\n");
            scanf("%f", &numm);

            printf("%f");
            break;
      case 15:
            printf("enter any two numbers:");
            scanf("%d%d", &n, &p);
            (n > p) ? printf("%d is maximum", n) : printf("%d is maximum", p);
            break;
      case 16:
            printf("enter any two numbers:");
            scanf("%d%d", &n, &p);
            (n < p) ? printf(" minimum=%d", n) : printf(" minimum=%d", p);
            break;
      case 17:
            printf("enter any numbers:");
            scanf("%d", &n);
            (n % 2 == 0) ? printf("%d is even", n) : printf("%d is odd", n);
            break;
      case 18:
            printf("enter any numbers:");
            scanf("%d", &n);
            (n >= 0) ? printf("%d is positive number", n) : printf("%d is negative number", n);
            break;
      case 19:

            printf("Enter your number:");
            scanf("%d", &n);
            (n % i == 1) ? printf("%d is Prime number", n) : printf("%d is not Prime number", n);
            break;
      case 20:
            printf("enter any year:");
            scanf("%d", &n);
            (n % 4 == 0) ? printf("%d is a Leap Year", n) : printf("%d is not a Leap Year", n);
            break;
      case 21:
            printf("enter your number:");
            scanf("%d", &n);
            printf("Square of %d =%d", n, n * n);
            break;
      case 22:
            printf("enter your number:");
            scanf("%d", &n);
            printf("Square of %d =%d", n, n * n * n);
            break;
      case 23:
            printf("enter your number");
            scanf("%d", &n);
            for (int i = 1; i <= n; i++)
            {
                  fact = fact * i;
            }
            printf("%d Factorial of %d", n, fact);
            break;
      case 24:

            printf("%d\n%d\n", a, b);
            for (int i = 1; i <= 10; i++)
            {
                  c = a + b;
                  printf("%d\n", c);
                  a = b;
                  b = c;
            }
            break;
      case 25:
            printf("enter your number:");
            scanf("%d", &num);
            n = num;
            while (num > 0)
            {
                  p = num % 10;
                  a = a + (p * p * p);
                  num = num / 10;
            }
            (a == n) ? printf("It is an Armstrong number") : printf("It is not an Armstrong number");
            break;
      case 26:
            printf("enter your numer:");
            scanf("%d", &num);
            n = num;
            while (num > 0)
            {
                  p = num % 10;
                  a = (a * 10) + p;
                  num = num / 10;
            }
            (a == n) ? printf("It is a Palindrome number") : printf("It is not a Palindrome number");
            break;
      case 27:
            printf("enter your number:");
            scanf("%d", &n);
            while (n > 0)
            {
                  p = n % 10;
                  a = a + p;
                  b = b * p;
                  n = n / 10;
            }
            (a == b) ? printf("It is a Spy number") : printf("It is not a Spy number");
            break;
      case 28:
            printf("enter any three numbers:");
            scanf("%d%d%d", &n, &o, &p);
            if (n > o && n > p)
            {
                  num = n * n;
                  value = (o * o) + (p * p);
                  (num == value) ? printf("It is a Triplet") : printf("It is not a Triplet");
            }
            if (o > n && o > p)
            {
                  num = o * o;
                  value = (n * n) + (p * p);
                  (num == value) ? printf("It is a Triplet") : printf("It is not a Triplet");
            }
            if (p > n && p > o)
            {
                  num = p * p;
                  value = (n * n) + (o * o);
                  (num == value) ? printf("It is a Triplet") : printf("It is not a Triplet");
            }
            break;
      case 29:
            printf("enter any three numbers:");
            scanf("%d%d%d", &n, &o, &p);
            ((n + o + p) == 180) ? printf("It is an Equilateral Triangle") : printf("It is not an Equilateral Triangle");
            break;
      case 30:
            printf(".......UNIT CONVERSION......\n");
            printf("1.Length\t2.Area\t3.Volume\t4.Speed\t5.Weight\t6.Temperature\n");
            scanf("%d", &ch);
            switch (ch)

            {
            case 1: // for LENGTH CONVERSION//

                  printf("1.cm\t2.m\t3.km\t4.mm\n");
                  scanf("%d", &num);
                  switch (num)
                  {
                  case 1:

                        printf("1.m\t2.km\t3.mm\n");
                        scanf("%d", &num);
                        switch (num)
                        {
                        case 1:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("cm=%f\t\tm=%f", nu, nu / 100);
                              break;

                        case 2:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("cm=%f\t\tkm=%f", nu, nu / 100000);
                              break;

                        case 3:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("cm=%f\t\tmm=%f", nu, nu * 10);
                              break;

                        default:
                              printf("invalid choice");
                              break;
                        }
                        break;

                  case 2:
                        printf("1.cm\t2.km\t3.mm\n");
                        scanf("%d", &num);
                        switch (num)
                        {
                        case 1:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("m=%f\t\tcm=%f", nu, nu * 100);
                              break;

                        case 2:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("m=%f\t\tkm=%f", nu, nu / 1000);
                              break;

                        case 3:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("m=%f\t\tmm=%f", nu, nu * 1000);
                              break;

                        default:
                              printf("invalid choice");
                              break;
                        }
                        break;

                  case 3:
                        printf("1.cm\t2.m\t3.mm\n");
                        scanf("%d", &num);
                        switch (num)
                        {
                        case 1:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("km=%f\t\tcm=%f", nu, nu * 100000);
                              break;

                        case 2:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("km=%f\t\tm=%f", nu, nu * 1000);
                              break;

                        case 3:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("km=%f\t\tmm=%f", nu, nu * 1000000);
                              break;

                        default:
                              printf("invalid choice");
                              break;
                        }
                        break;

                  case 4:
                        printf("1.cm\t2.m\t3.km\n");
                        scanf("%d", &num);
                        switch (num)
                        {
                        case 1:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("mm=%f\t\tcm=%f", nu, nu / 10);
                              break;

                        case 2:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("mm=%f\t\tm=%f", nu, nu / 1000);
                              break;

                        case 3:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("mm=%f\t\tkm=%f", nu, nu / 1000000);
                              break;

                        default:
                              printf("invalid choice");
                              break;
                        }
                        break;
                  default:
                        printf("invalid choice");
                        break;
                  }
                  break;

            case 2: // for AREA CONVERSION//
                  printf("1.sq cm\t2.sq m\t3.sq km\t4.sq mm\n");
                  scanf("%d", &num);
                  switch (num)
                  {
                  case 1:

                        printf("1.sq m\t2.sq km\t3.sq mm\n");
                        scanf("%d", &num);
                        switch (num)
                        {
                        case 1:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("sq cm=%f\t\tsq m=%f", nu, nu / 10000);
                              break;

                        case 2:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("sq cm=%f\t\tsq km=%f", nu, nu / 10000000000);
                              break;

                        case 3:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("sq cm=%f\t\tsq mm=%f", nu, nu * 100);
                              break;

                        default:
                              printf("invalid choice");
                              break;
                        }
                        break;

                  case 2:
                        printf("1.sq cm\t2.sq km\t3.sq mm\n");
                        scanf("%d", &num);
                        switch (num)
                        {
                        case 1:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("sq m=%f\t\tsq cm=%f", nu, nu * 10000);
                              break;

                        case 2:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("sq m=%f\t\tsq km=%f", nu, nu / 1000000);
                              break;

                        case 3:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("sq m=%f\t\tsq mm=%f", nu, nu * 1000000);
                              break;

                        default:
                              printf("invalid choice");
                              break;
                        }
                        break;

                  case 3:
                        printf("1.sq cm\t2.sq m\t3.sq mm\n");
                        scanf("%d", &num);
                        switch (num)
                        {
                        case 1:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("sq km=%f\t\tsq cm=%f", nu, nu * 10000000000);
                              break;

                        case 2:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("sq km=%f\t\tsq m=%f", nu, nu * 1000000);
                              break;

                        case 3:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("sq km=%f\t\tsq mm=%f", nu, nu * 1000000000000);
                              break;

                        default:
                              printf("invalid choice");
                              break;
                        }
                        break;

                  case 4:
                        printf("1.sq cm\t2.sq m\t3.sq km\n");
                        scanf("%d", &num);
                        switch (num)
                        {
                        case 1:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("sq mm=%f\t\tsq cm=%f", nu, nu / 100);
                              break;

                        case 2:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("sq mm=%f\t\tsq m=%f", nu, nu / 1000000);
                              break;

                        case 3:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("sq mm=%f\t\tsq km=%f", nu, nu / 1000000000000);
                              break;

                        default:
                              printf("invalid choice");
                              break;
                        }
                        break;
                  default:
                        printf("invalid choice");
                        break;
                  }
                  break;

            case 3: // for VOLUME CONVERSION//
                  printf("1.cu cm\t2.cu m\t3.cu mm\t4.l\t5.ml\n");
                  scanf("%d", &num);
                  switch (num)
                  {
                  case 1:

                        printf("1.cu m\t2.cu mm\t3.l\t 4.ml\n");
                        scanf("%d", &num);
                        switch (num)
                        {
                        case 1:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("cu cm=%f\t\tcu m=%f", nu, nu / 1000000);
                              break;

                        case 2:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("cu cm=%f\t\tcu mm=%f", nu, nu * 1000);
                              break;

                        case 3:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("cu cm=%f\t\tl=%f", nu, nu / 1000);
                              break;
                        case 4:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("cu cm=%f\t\tml=%f", nu, nu * 1);
                              break;

                        default:
                              printf("invalid choice");
                              break;
                        }
                        break;

                  case 2:
                        printf("1.cu cm\t2.cu mm\t3.l\t4.ml\n");
                        scanf("%d", &num);
                        switch (num)
                        {
                        case 1:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("cu m=%f\t\tcu cm=%f", nu, nu * 1000000);
                              break;

                        case 2:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("cu m=%f\t\tcu mm=%f", nu, nu * 1000000000);
                              break;

                        case 3:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("cu m=%f\t\tl=%f", nu, nu * 1000);
                              break;

                        case 4:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("cu m=%f\t\tml=%f", nu, nu * 1000000);
                              break;

                        default:
                              printf("invalid choice");
                              break;
                        }
                        break;

                  case 3:
                        printf("1.cu cm\t2.cu m\t3.l\t4.ml\n");
                        scanf("%d", &num);
                        switch (num)
                        {
                        case 1:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("cu mm=%f\t\tcu cm=%f", nu, nu / 1000);
                              break;

                        case 2:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("cu mm=%f\t\tcu m=%f", nu, nu * 1000000000);
                              break;

                        case 3:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("cu mm=%f\t\tl=%f", nu, nu / 1000000);
                              break;

                        case 4:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("cu mm=%f\t\tml=%f", nu, nu / 1000);
                              break;

                        default:
                              printf("invalid choice");
                              break;
                        }
                        break;

                  case 4:
                        printf("1.cu cm\t2.sq m\t3.cu mm\t4.ml\n");
                        scanf("%d", &num);
                        switch (num)
                        {
                        case 1:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("l=%f\t\tcu cm=%f", nu, nu * 1000);
                              break;

                        case 2:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("l=%f\t\tcu m=%f", nu, nu / 1000);
                              break;

                        case 3:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("l=%f\t\tcu mm=%f", nu, nu * 1000000);
                              break;

                        case 4:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("l=%f\t\tml=%f", nu, nu * 1000);
                              break;

                        default:
                              printf("invalid choice");
                              break;
                        }
                        break;

                  case 5:

                        printf("1.cu cm\t2.cu m\t3.cu mm\t 4.l\n");
                        scanf("%d", &num);
                        switch (num)
                        {
                        case 1:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("ml=%f\t\tcu cm=%f", nu, nu * 1);
                              break;

                        case 2:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("ml=%f\t\tcu m=%f", nu, nu / 1000000);
                              break;

                        case 3:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("ml=%f\t\tmm=%f", nu, nu * 1000);
                              break;
                        case 4:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("ml=%f\t\tl=%f", nu, nu / 1000);
                              break;

                        default:
                              printf("invalid choice");
                              break;
                        }
                        break;

                  default:
                        printf("invalid choice");
                        break;
                  }
                  break;

            case 4: // for SPEED CONERSION//

                  printf("1.km/s\t2.m/s\t3.km/h\t4.m/h\n");
                  scanf("%d", &num);
                  switch (num)
                  {
                  case 1:

                        printf("1.m/s\t2.km/h\t3.m/h\n");
                        scanf("%d", &num);
                        switch (num)
                        {
                        case 1:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("km/s=%f\t\tm/s=%f", nu, nu * 1000);
                              break;

                        case 2:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("km/s=%f\t\tkm/h=%f", nu, nu * 3600);
                              break;

                        case 3:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("km/s=%f\t\tm/h=%f", nu, nu * 2237);
                              break;

                        default:
                              printf("invalid choice");
                              break;
                        }
                        break;

                  case 2:
                        printf("1.km/s\t2.km/ht3.m/h\n");
                        scanf("%d", &num);
                        switch (num)
                        {
                        case 1:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("m/s=%f\t\tkm/s=%f", nu, nu / 1000);
                              break;

                        case 2:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("m/s=%f\t\tkm/h=%f", nu, nu * 3.6);
                              break;

                        case 3:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("m/s=%f\t\tm/h=%f", nu, nu * 2.237);
                              break;

                        default:
                              printf("invalid choice");
                              break;
                        }
                        break;

                  case 3:
                        printf("1.km/s\t2.m/s\t3.m/h\n");
                        scanf("%d", &num);
                        switch (num)
                        {
                        case 1:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("km/h=%f\t\tkm/s=%f", nu, nu / 3600);
                              break;

                        case 2:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("km/h=%f\t\tm/s=%f", nu, nu / 3.6);
                              break;

                        case 3:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("km/h=%f\t\tm/h=%f", nu, nu / 1.609);
                              break;

                        default:
                              printf("invalid choice");
                              break;
                        }
                        break;

                  case 4:
                        printf("1.km/s\t2.m/s\t3.km/h\n");
                        scanf("%d", &num);
                        switch (num)
                        {
                        case 1:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("m/h=%f\t\tkm/s=%f", nu, nu / 2237);
                              break;

                        case 2:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("m/h=%f\t\tm/s=%f", nu, nu / 2.237);
                              break;

                        case 3:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("m/h=%f\t\tkm/h=%f", nu, nu * 1.609);
                              break;

                        default:
                              printf("invalid choice");
                              break;
                        }
                        break;
                  default:
                        printf("invalid choice");
                        break;
                  }
                  break;

            case 5: // for WEIGHT CONVERSION//
                  printf("1.g\t2.mg\t3.kg\t4.t\n");
                  scanf("%d", &num);
                  switch (num)
                  {
                  case 1:

                        printf("1.mg\t2.kg\t3.t\n");
                        scanf("%d", &num);
                        switch (num)
                        {
                        case 1:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("g=%f\t\tmg=%f", nu, nu * 1000);
                              break;

                        case 2:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("g=%f\t\tkg=%f", nu, nu / 1000);
                              break;

                        case 3:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("g=%f\t\tt=%f", nu, nu / 1000000);
                              break;

                        default:
                              printf("invalid choice");
                              break;
                        }
                        break;

                  case 2:
                        printf("1.g\t2.kg\t3.t\n");
                        scanf("%d", &num);
                        switch (num)
                        {
                        case 1:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("mg=%f\t\tg=%f", nu, nu / 1000);
                              break;

                        case 2:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("mg=%f\t\tkg=%f", nu, nu / 1000000);
                              break;

                        case 3:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("mg=%f\t\tt=%f", nu, nu / 1000000000);
                              break;

                        default:
                              printf("invalid choice");
                              break;
                        }
                        break;

                  case 3:
                        printf("1.g\t2.mg\t3.t\n");
                        scanf("%d", &num);
                        switch (num)
                        {
                        case 1:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("kg=%f\t\tg=%f", nu, nu * 1000);
                              break;

                        case 2:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("kg=%f\t\tmg=%f", nu, nu * 1000000);
                              break;

                        case 3:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("kg=%f\t\tt=%f", nu, nu / 1000);
                              break;

                        default:
                              printf("invalid choice");
                              break;
                        }
                        break;

                  case 4:
                        printf("1.g\t2.mg\t3.kg\n");
                        scanf("%d", &num);
                        switch (num)
                        {
                        case 1:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("t=%f\t\tg=%f", nu, nu * 1000000);
                              break;

                        case 2:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("t=%f\t\tmg=%f", nu, nu * 1000000000);
                              break;

                        case 3:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("t=%f\t\tkg=%f", nu, nu * 1000);
                              break;

                        default:
                              printf("invalid choice");
                              break;
                        }
                        break;
                  default:
                        printf("invalid choice");
                        break;
                  }
                  break;

            case 6: // for TEMPERATURE//
                  printf("1.C\t2.K\t3.F\n");
                  scanf("%d", &num);
                  switch (num)
                  {
                  case 1:

                        printf("1.K\t2.F\n");
                        scanf("%d", &num);
                        switch (num)
                        {
                        case 1:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("C=%f\t\tK=%f", nu, nu + 273.15);
                              break;

                        case 2:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("C=%f\t\tF=%f", nu, ((nu * 9 / 5) + 32));
                              break;

                        default:
                              printf("invalid choice");
                              break;
                        }
                        break;

                  case 2:
                        printf("1.C\t2.F\n");
                        scanf("%d", &num);
                        switch (num)
                        {
                        case 1:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("K=%f\t\tC=%f", nu, (nu - 273.15));
                              break;

                        case 2:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("K=%f\t\tF=%f", nu, (nu - 273.15) * 9 / 5 + 32);
                              break;

                        default:
                              printf("invalid choice");
                              break;
                        }
                        break;

                  case 3:
                        printf("1.C\t2.K\n");
                        scanf("%d", &num);
                        switch (num)
                        {
                        case 1:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("F=%f\t\tC=%f", nu, ((nu - 32) * 5 / 9));
                              break;

                        case 2:
                              printf("enter your number: ");
                              scanf("%f", &nu);
                              printf("F=%f\t\tK=%f", nu, ((nu - 32) * 5 / 9 + 273.15));
                              break;

                        default:
                              printf("invalid choice");
                              break;
                        }
                        break;

                  default:
                        printf("invalid choice");
                        break;
                  }
                  break;

            default:
                  printf("invalid choice");
                  break;
            }
            break;

      case 31:
            printf(".........CURRENCY CONVERTER.........\n");
            printf("1.Russian Ruble RUB\t\t2.Chinese Yuan CNY\n3.Euro EUR\t\t4.Indian Rupee INR\n5.US Dollar USD\t\t6.Egyptian Pound EGP\n");
            scanf("%d", &n);
            switch (n)
            {
            case 1:
                  printf("1.Chinese Yuan CNY\t2.Euro EUR\t3.Indian Rupee INR\t4.US Dollar USD\t5.Egyptian Pound EGP\n");
                  scanf("%d", &ch);
                  switch (ch)
                  {
                  case 1:
                        printf("enter your Ruble:\n");
                        scanf("%f", &nu);
                        printf("%f Ruble equals %f Yuan", nu, nu * 0.091);
                        break;
                  case 2:
                        printf("enter your Ruble:\n");
                        scanf("%f", &nu);
                        printf("%f Ruble equals %f Euro", nu, nu * 0.012);
                        break;
                  case 3:
                        printf("enter your Ruble:\n");
                        scanf("%f", &nu);
                        printf("%f Ruble equals %f Rupee", nu, nu * 1.10);
                        break;
                  case 4:
                        printf("enter your Ruble:\n");
                        scanf("%f", &nu);
                        printf("%f Ruble equals %f Dollar", nu, nu * 0.013);
                        break;
                  case 5:
                        printf("enter your Ruble:\n");
                        scanf("%f", &nu);
                        printf("%f Ruble equals %f Pound", nu, nu * 0.40);
                        break;
                  default:
                        printf("invalid choice");
                  }
                  break;

            case 2:
                  printf("1.Russian Ruble RUB\t2.Euro EUR\t3.Indian Rupee INR\t4.US Dollar USD\t5.Egyptian Pound EGP\n");
                  scanf("%d", &ch);
                  switch (ch)
                  {
                  case 1:
                        printf("enter your Yuan:\n");
                        scanf("%f", &nu);
                        printf("%f Yuan equals %f Ruble", nu, nu * 11.02);
                        break;
                  case 2:
                        printf("enter your Ruble:\n");
                        scanf("%f", &nu);
                        printf("%f Yuan equals %f Euro", nu, nu * 0.14);
                        break;
                  case 3:
                        printf("enter your Yuan:\n");
                        scanf("%f", &nu);
                        printf("%f Yuan equals %f Rupee", nu, nu * 12.07);
                        break;
                  case 4:
                        printf("enter your Yuan:\n");
                        scanf("%f", &nu);
                        printf("%f Yuan equals %f Dollar", nu, nu * 0.15);
                        break;

                  case 5:
                        printf("enter your Yuan:\n");
                        scanf("%f", &nu);
                        printf("%f Yuan equals %f Pound", nu, nu * 4.46);
                        break;
                  default:
                        printf("invalid choice");
                  }
                  break;

            case 3:
                  printf("1.Russian Ruble RUB\t2.Chinese Yuan CNY\t3.Indian Rupee INR\t4.US Dollar USD\t5.Egyptian Pound EGP\n");
                  scanf("%d", &ch);
                  switch (ch)
                  {
                  case 1:
                        printf("enter your Euro:\n");
                        scanf("%f", &nu);
                        printf("%f Euro equals %f Ruble", nu, nu * 80.68);
                        break;
                  case 2:
                        printf("enter your Euro:\n");
                        scanf("%f", &nu);
                        printf("%f Euro equals %f Yuan", nu, nu * 7.33);
                        break;
                  case 3:
                        printf("enter your Euro:\n");
                        scanf("%f", &nu);
                        printf("%f Euro equals %f Rupee", nu, nu * 88.40);
                        break;
                  case 4:
                        printf("enter your Euro:\n");
                        scanf("%f", &nu);
                        printf("%f Euro equals %f Dollar", nu, nu * 1.07);
                        break;
                  case 5:
                        printf("enter your Euro:\n");
                        scanf("%f", &nu);
                        printf("%f Euro equals %f Pound", nu, nu * 32.67);
                        break;
                  default:
                        printf("invalid choice");
                  }
                  break;

            case 4:
                  printf("1.Russian Ruble RUB\t2.Chinese Yuan CNY\t3.Euro EUR\t4.US Dollar USD\t5.Egyptian Pound EGP\n");
                  scanf("%d", &ch);
                  switch (ch)
                  {
                  case 1:
                        printf("enter your Rupee:\n");
                        scanf("%f", &nu);
                        printf("%f Rupee equals %f Ruble", nu, nu * 0.91);
                        break;
                  case 2:
                        printf("enter your Rupee:\n");
                        scanf("%f", &nu);
                        printf("%f Rupee equals %f Yuan", nu, nu * 0.083);
                        break;
                  case 3:
                        printf("enter your Rupee:\n");
                        scanf("%f", &nu);
                        printf("%f Rupee equals %f Euro", nu, nu * 0.011);
                        break;
                  case 4:
                        printf("enter your Rupee:\n");
                        scanf("%f", &nu);
                        printf("%f Rupee equals %f Dollar", nu, nu * 0.012);
                        break;
                  case 5:
                        printf("enter your Rupee:\n");
                        scanf("%f", &nu);
                        printf("%f Rupee equals %f Pound", nu, nu * 0.37);
                        break;
                  default:
                        printf("invalid choice");
                  }
                  break;

            case 5:
                  printf("1.Russian Ruble RUB\t2.Chinese Yuan CNY\t3.Euro EUR\t4.Indian Rupee INR\t5.Egyptian Pound EGP\n");
                  scanf("%d", &ch);
                  switch (ch)
                  {
                  case 1:
                        printf("enter your Dollar:\n");
                        scanf("%f", &nu);
                        printf("%f Dollar equals %f Ruble", nu, nu * 75.50);
                        break;
                  case 2:
                        printf("enter your Dollar:\n");
                        scanf("%f", &nu);
                        printf("%f Dollar equals %f Yuan", nu, nu * 6.86);
                        break;
                  case 3:
                        printf("enter your Dollar:\n");
                        scanf("%f", &nu);
                        printf("%f Dollar equals %f Euro", nu, nu * 0.94);
                        break;
                  case 4:
                        printf("enter your Dollar:\n");
                        scanf("%f", &nu);
                        printf("%f Dollar equals %f Rupee", nu, nu * 82.70);
                        break;
                  case 5:
                        printf("enter your Dollar:\n");
                        scanf("%f", &nu);
                        printf("%f Dollar equals %f Pound", nu, nu * 30.56);
                        break;
                  default:
                        printf("invalid choice");
                  }
                  break;

            case 6:
                  printf("1.Russian Ruble RUB\t2.Chinese Yuan CNY\t3.Euro EUR\t4.Indian Rupee INR\t5.US Dollar USD\n");
                  scanf("%d", &ch);
                  switch (ch)
                  {
                  case 1:
                        printf("enter your Pound:\n");
                        scanf("%f", &nu);
                        printf("%f Pound equals %f Ruble", nu, nu * 2.47);
                        break;
                  case 2:
                        printf("enter your Pound:\n");
                        scanf("%f", &nu);
                        printf("%f Pound equals %f Yuan", nu, nu * 0.22);
                        break;
                  case 3:
                        printf("enter your Pound:\n");
                        scanf("%f", &nu);
                        printf("%f Pound equals %f Euro", nu, nu * 0.031);
                        break;
                  case 4:
                        printf("enter your Pound:\n");
                        scanf("%f", &nu);
                        printf("%f Pound equals %f Rupee", nu, nu * 2.71);
                        break;
                  case 5:
                        printf("enter your Pound:\n");
                        scanf("%f", &nu);
                        printf("%f Pound equals %f Dollar", nu, nu * 0.033);
                        break;
                  default:
                        printf("invalid choice");
                  }
                  break;
            }
            break;

      default:
            printf("invalid choice");
      }
      return 0;
}
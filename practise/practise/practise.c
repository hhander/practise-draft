#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//int main()
//{
//	int arr[] = { 9,6,4,2,3,5,7,0,1 };
//	int i = 0;
//	int sum1 = 0;
//	int sum2 = 0;
//	for (i = 0; i < 10; i++)
//	{
//		sum1 = sum1 + i;
//	}
//	for (i = 0; i < 9; i++)
//	{
//		sum2 = sum2 + arr[i];
//	}
//	int ret = sum1 - sum2;  
//	printf("Êý×ÖÊÇ%d", ret);
//	return 0;
//}

//int main()
//{
//    char ret = getchar();
//    putchar(ret);
//    return 0;
//}

//int main()
//{
//    char ch;
//    scanf("%c", &ch);
//    printf("%d", ch);
//    return 0;
//}

//int main()
//{
//    int a, b, c;
//    scanf("%d %d %d", a, b, c);
//    printf("score1=%d,score2=%d,score3=%d", a, b, c);
//    return 0;
//}

//int main()
//{
//    char arr[20];
//    float a, b, c;
//    scanf("%s%f%f%f", &arr, &a, &b, &c);
//    printf("The each subject score of No. %s is %.2f, %.2f, %.2f.", arr, a, b, c);
//
//
//    return 0;
//}

//int main()
//{
//    int a, b, c;
//    scanf("%4d%2d%2d", &a, &b, &c);
//    printf("year=%04d\nmonth=%02d\ndate=%02d\n", a, b, c);
//    return 0;
//}

//int main()
//{
//    int a, b;
//    scanf("%d%d", &a, &b);
//    printf("a=%d,b=%d", b, a);
//    return 0;
//}


//int main()
//{
//    int a, b;
//    scanf("%d%d", &a, &b);
//    a = a ^ b;
//    b = a ^ b;
//    a = a ^ b;
//    printf("a=%d,b=%d", a, b);
//    return 0;
//}

//int main()
//{
//    char ch;
//    ch = getchar();
//    int count = 2;
//    while (count)
//    {
//        if (isupper(ch))
//        {
//            ch = tolower(ch);
//            count--;
//        }
//        printf("%c", ch);
//    }
//    return 0;
//}
//#include<string.h>
//int main()
//{
//    int count = 2;
//    do
//    {
//        char ch;
//        ch = getchar();
//        if (isupper(ch))
//        {
//            ch = tolower(ch);
//            printf("%c", ch);
//            break;
//        }
//        --count;
//    } while (count);
//  return 0;
//}

//int main()
//{
//	printf("%#.2f", 1.55555);
//		return 0;
//}

//int main()
//{
//    char ch;
//    int a;
//    float c;
//    scanf("%c%d%f", &ch, &a, &c);
//    printf("%c %d %.6f", ch, a, c);
//    return 0;
//
//}


/*i*//*nt main()
{
	int ret = 3 ^ 3;
	printf("%d", ret);
	return 0;
}*/

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 9; i++)
//	{
//		printf("*");
//	}
//	for (i = 0; i < 8; i++)
//	{
//		printf("#");
//	}
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,1,2,3 };
//	int i = 0;
//	int x = 0;
//	for (i = 0; i < 5; i++)
//	{
//		x = x ^ arr[i];
//	}
//	printf("%d", x);
//}
//
//int main()
//{
//	printf("%d", 1 ^ 2);
//}

//int main()
//{
//	int arr[] = { 0,1,2,3,4,6,7,8,9 };
//	int x = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		x ^= i;
//	}
//	for (int i = 0; i < 9; i++)
//	{
//		x ^= arr[i];
//	}
//	printf("%d", x);
//	return 0;
//}


//int main()
//{
//	int x = 0;
//	int arr[] = { 3,1,2,1,2,3,5};
//	for (int i = 0; i < 7; i++)
//	{
//		x ^= arr[i];
//	}
//	printf("%d", x);
//	return 0;



//int main()
//{
//	int arr2[10] = { 0 };
//	int arr1[10] = { 0 };
//	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if ((arr[i] & 1) == 1)
//		{
//			arr1[i] = arr[i];
//		}
//		else
//		{
//			arr2[i] = arr[i];
//		}
//	}
//	int x = 0;
//	int y = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		x ^= arr1[i];
//		y ^= arr2[i];
//	}
//	printf("%d %d", x,y);
//	return 0;
//}

//void Rotate(int arr[], int k)
//{
//	for (int i = 0; i < k; i++)
//	{
//		int tmp = arr[6];
//		for (int j = 0; j < 7; j++)
//		{
//			arr[6 - j] = arr[6 - j - 1];
//		}
//		arr[0] = tmp;
//	}
//}
//
//
//int main()
//{
//	int arr[7] = { 1,2,3,4,5,6,7 };
//	/*printf("%d", sz);*/
//	int k = 0;
//	scanf("%d", &k);
//	Rotate(arr, k);
//	for (int i = 0; i < 7; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

//void reverse(int* arr, int k,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while(left<right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 0;
//	/*scanf("%d", &k);*/
//	reverse(arr + 4, k, sz);
//	reverse(arr, k,sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}


//void reverse(char* dest, char* sour)
//{
//	while (dest <= sour);
//	{
//		int ret = *dest;
//		*dest = *sour;
//		*sour = ret;
//		dest++;
//		sour--;
//	}
//}
//
//int main()
//{
//	char ch[] = "abcdef";
//	int k = 0;
//	scanf("%d", &k);
//
//	reverse(ch, ch + k);
//	reverse(ch + k + 1, ch + 5);
//	reverse(ch, ch + 5);
//	printf("%s", ch);
//	return 0;
//}


//void reverse(int* dest, int* sour)
//{
//	while (dest <= sour)
//	{
//		int ret = *sour;
//		*sour = *dest;
//		*dest = ret;
//		dest--;
//		sour++;
//
//	}
//
//}
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8 };
//	reverse(arr + 7, arr + 6);
//	for (int i = 0; i < 8; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}


void reverse(int* arr, int left, int right)
{
	while (left < right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}



void rotate(int* arr, int sz, int k)
{
	reverse(arr, 0, sz-1-k);

	reverse(arr, sz - k, sz - 1);

	reverse(arr, 0, sz - 1);

}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8 };
	int k = 0;
	scanf("%d", &k);
	int sz = sizeof(arr) / sizeof(arr[0]);
	k = k % sz;
	rotate(arr, sz, k);
	for (int i = 0; i < 8; i++)
	{
		printf("%d",arr[i]);
	}

}
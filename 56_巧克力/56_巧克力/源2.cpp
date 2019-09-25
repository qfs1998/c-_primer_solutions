//////Playfair密码
/////*理解算法最重要，最好自己动手实现试试看，可以使用MFC写一个简单的交互界面*/
////#include<iostream>
////#include<cstring>
////
////using namespace std;
////void encrypt()
////{
////	const int N = 100;
////	char letters[26] = "ABCDEFGHIKLMNOPQRSTUVWXYZ";//用于填充矩阵
////	int flag[25] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };//字母是否已在矩阵中，与letters数组对应
////	char ch[5][5];//5X5矩阵
////	char ch1[N];//密钥
////	char ch2[N];//明文
////	char ch4;//无关字符
////	int len = 'a' - 'A';
////	cout << "输入密钥：";
////	cin >> ch1;
////	int flg = 1;
////	while (flg == 1)
////	{
////		for (int i = 0; i < strlen(ch1); i++)//把所输入的密钥转化为大写字母
////		{
////			if (ch1[i] > 'z' || ch1[i] < 'a')
////			{
////				cout << "请重新选择操作：" << endl;
////				flg = 0; break;
////			}
////			else
////				ch1[i] = ch1[i] - len;
////		}
////		if (flg == 1)
////		{
////			for (int i = 0; i < strlen(ch1); i++)//把密钥中的J都变为I
////			{
////				if (ch1[i] == 'J')ch1[i] = 'I';
////			}
////			int i = 0; int j = 0;
////			//把密钥中的字母填入到矩阵中，并把该字母标记为已用
////			for (int k = 0; k < strlen(ch1); k++)
////			{
////				for (int t = 0; t < 25; t++)
////				{
////					if (ch1[k] == letters[t] && flag[t] == 0)
////					{
////						ch[i][j] = letters[t];
////						flag[t] = 1;
////						if (j < 4)j++;
////						else { i++; j = 0; }
////					}
////				}
////			}
////			for (int k = 0; k < 25; k++)//按字母表顺序把未用字母依次填入到矩阵中
////			{
////				if (flag[k] == 0)
////				{
////					ch[i][j] = letters[k];
////					flag[k] = 1;
////					if (j < 4)j++;
////					else { i++; j = 0; }
////				}
////			}
////			cout << "密钥填充后的矩阵为： " << endl;
////			for (i = 0; i < 5; i++)
////				for (j = 0; j < 5; j++)
////				{
////					cout << ch[i][j];
////					cout << " ";
////					if (j == 4)
////						cout << endl;
////				}
////			cout << endl;
////			cout << "请输入明文（请输入英文字符）：";
////			cin >> ch2;
////			cout << "输入一个无关字符：";
////			cin >> ch4;
////			if (ch4 >= 'a')
////				ch4 = ch4 - len;
////			for (int k = 0; k < strlen(ch2); k++)//把所输入的明文转化为大写字母
////			{
////				if (ch2[k] >= 'a')
////					ch2[k] = ch2[k] - len;
////			}
////			for (int k = 0; k < strlen(ch2); k++)//把明文中的J都变为I
////			{
////				if (ch2[k] == 'J')
////					ch2[k] = 'I';
////			}
////			//为明文添加必要的无关字符以防止同一组的两个字符相同
////			for (int k = 0; k < strlen(ch2); k += 2)
////			{
////				if (ch2[k] == ch2[k + 1])
////				{
////					for (int t = strlen(ch2); t > k; t--)
////						ch2[t + 1] = ch2[t];
////					ch2[k + 1] = ch4;
////				}
////			}
////			//若明文有奇数个字符，则添加一个无关字符以凑够偶数个
////			if (strlen(ch2) % 2 != 0)
////			{
////				ch2[strlen(ch2) + 1] = ch2[strlen(ch2)];//字符串结尾赋'\0'
////				ch2[strlen(ch2)] = ch4;//明文串尾插入无关字符
////			}
////			cout << "经过处理后的明文为：";
////			for (int k = 0; k < strlen(ch2); k += 2)
////				cout << ch2[k] << ch2[k + 1] << " ";
////			cout << endl;
////			cout << "其最终长度为：" << strlen(ch2) << endl;
////			//////////////////明文输入并整理完毕///////////////////////////////
////			for (int k = 0; k < strlen(ch2); k += 2)
////			{
////				int m1, m2, n1, n2;
////				for (m1 = 0; m1 <= 4; m1++)
////				{
////					for (n1 = 0; n1 <= 4; n1++)
////					{
////						if (ch2[k] == ch[m1][n1])break;
////					}
////					if (ch2[k] == ch[m1][n1])break;
////				}
////				for (m2 = 0; m2 <= 4; m2++)
////				{
////					for (n2 = 0; n2 <= 4; n2++)
////					{
////						if (ch2[k + 1] == ch[m2][n2])break;
////					}
////					if (ch2[k + 1] == ch[m2][n2])break;
////				}
////				m1 = m1 % 5;
////				m2 = m2 % 5;
////				if (n1 > 4) { n1 = n1 % 5; m1 = m1 + 1; }
////				if (n2 > 4) { n2 = n2 % 5; m2 = m2 + 1; }
////				if (m1 == m2)
////				{
////					ch2[k] = ch[m1][(n1 + 1) % 5];
////					ch2[k + 1] = ch[m2][(n2 + 1) % 5];
////				}
////				else
////				{
////					if (n1 == n2)
////					{
////						ch2[k] = ch[(m1 + 1) % 5][n1];
////						ch2[k + 1] = ch[(m2 + 1) % 5][n2];
////					}
////					else
////					{
////						ch2[k] = ch[m1][n2];
////						ch2[k + 1] = ch[m2][n1];
////					}
////				}
////			}
////			cout << "加密后所得到的密文是：";
////			for (int k = 0; k < strlen(ch2); k += 2)
////				cout << ch2[k] << ch2[k + 1] << " ";
////			cout << endl;
////		}
////		else break;
////	}
////
////}
////
//////解密算法
////void decrypt()
////{
////	const int N = 100;
////	char letters[26] = "ABCDEFGHIKLMNOPQRSTUVWXYZ";//用于填充矩阵
////	int flag[25] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
////	//标记字母是否已在矩阵中，与letters数组对应
////	char ch[5][5];//5X5矩阵
////	char ch1[N];//密钥
////	char ch2[N];//密文
////	int len = 'a' - 'A';
////	int flg = 1;
////	cout << "输入密钥：";
////	cin >> ch1;
////	while (flg == 1)
////	{
////		for (int i = 0; i < strlen(ch1); i++)//把所输入的密钥转化为大写字母
////		{
////			if (ch1[i] > 'z' || ch1[i] < 'a')
////			{
////				cout << "请重新选择操作：" << endl;
////				flg = 0; break;
////			}
////			else
////				ch1[i] = ch1[i] - len;
////		}
////		if (flg == 1)
////		{
////			for (int i = 0; i < strlen(ch1); i++)//把密钥中的J都变为I        
////			{
////				if (ch1[i] == 'J')ch1[i] = 'I';
////			}
////			int i = 0; int j = 0;
////			//把密钥中的字母填入到矩阵中，并把该字母标记为已用
////			for (int k = 0; k < strlen(ch1); k++)
////			{
////				for (int t = 0; t < 25; t++)
////				{
////					if (ch1[k] == letters[t] && flag[t] == 0)
////					{
////						ch[i][j] = letters[t];
////						flag[t] = 1;
////						if (j < 4)j++;
////						else { i++; j = 0; }
////					}
////				}
////			}
////			for (int k = 0; k < 25; k++)//按字母表顺序把未用字母依次填入到矩阵中
////			{
////				if (flag[k] == 0)
////				{
////					ch[i][j] = letters[k];
////					flag[k] = 1;
////					if (j < 4)j++;
////					else { i++; j = 0; }
////				}
////			}
////			cout << "密钥填充后的矩阵为： " << endl;
////			for (i = 0; i < 5; i++)
////
////				for (j = 0; j < 5; j++)
////				{
////					cout << ch[i][j];
////					cout << " ";
////					if (j == 4)
////						cout << endl;
////				}
////			cout << endl;
////			/////////////////////矩阵生成完毕////////////////////////////
////			int f = 0;
////			do {
////				cout << "请输入密文（英文字符）：";
////				cin >> ch2;
////				for (int k = 0; k < strlen(ch2); k++)//把所输入的密文转化为大写字母
////				{
////					if (ch2[k] >= 'a')
////						ch2[k] = ch2[k] - len;
////				}
////				for (int k = 0; k < strlen(ch2); k++)//把密文中的J都变为I
////				{
////					if (ch2[k] == 'J')ch2[k] = 'I';
////				}
////				for (int k = 0; k < strlen(ch2); k += 2)
////				{
////					if (ch2[k] == ch2[k + 1])
////					{
////						cout << "同一分组中不能出现相同字符！请重新输入。" << endl;
////						f = 1;
////						break;
////					}
////					else f = 2;
////				}
////				if (f == 1)continue;
////				if (strlen(ch2) % 2 != 0)
////				{
////					cout << "字符串不能为奇数个！请重新输入。" << endl;
////					f = 1;
////				}
////				else f = 2;
////			} while (f == 1);
////			//解密开始
////			for (int k = 0; k < strlen(ch2); k += 2)
////			{
////				int m1, m2, n1, n2;
////				for (m1 = 0; m1 <= 4; m1++)
////				{
////					for (n1 = 0; n1 <= 4; n1++)
////					{
////						if (ch2[k] == ch[m1][n1])break;
////					}
////					if (ch2[k] == ch[m1][n1])break;
////				}
////				for (m2 = 0; m2 <= 4; m2++)
////				{
////					for (n2 = 0; n2 <= 4; n2++)
////					{
////						if (ch2[k + 1] == ch[m2][n2])break;
////					}
////					if (ch2[k + 1] == ch[m2][n2])break;
////				}
////				m1 = m1 % 5;
////				m2 = m2 % 5;
////				if (n1 > 4) { n1 = n1 % 5; m1 = m1 + 1; }
////				if (n2 > 4) { n2 = n2 % 5; m2 = m2 + 1; }
////				if (m1 == m2)
////				{
////					ch2[k] = ch[m1][(n1 + 4) % 5];
////					ch2[k + 1] = ch[m2][(n2 + 4) % 5];
////				}
////				else
////				{
////					if (n1 == n2)
////					{
////						ch2[k] = ch[(m1 + 4) % 5][n1];
////						ch2[k + 1] = ch[(m2 + 4) % 5][n2];
////					}
////					else
////					{
////						ch2[k] = ch[m1][n2];
////						ch2[k + 1] = ch[m2][n1];
////					}
////				}
////			}
////			cout << "解密后所得到的明文是：";
////			for (int k = 0; k < strlen(ch2); k += 2)
////				cout << ch2[k] << ch2[k + 1] << " ";
////			cout << endl;
////		}
////		else break;
////	}
////
////}
////
////int main()
////{
////
////	int n;
////	cout << "请选择1加密2解密:" << endl;
////	while (true)
////	{
////		cin >> n;
////		switch (n)
////		{
////		case 1:
////			encrypt();
////			break;
////		case 2:
////			decrypt();
////			break;
////		default:
////			break;
////		}
////	}
////	system("pause");
////	return 0;
////}
//
//
//
//
//
//
////RSA密码
///*理解算法最重要，最好自己动手实现试试看，可以使用MFC写一个简单的交互界面*/
//
//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//#include <cstring>
//using namespace std;
////RSA算法所需参数
//typedef struct  RSA_PARAM_Tag
//{
//	unsigned __int64    p, q;   //两个素数，不参与加密解密运算
//	unsigned __int64    f;      //f=(p-1)*(q-1)，不参与加密解密运算
//	unsigned __int64    n, e;   //公匙，n=p*q，gcd(e,f)=1
//	unsigned __int64    d;      //私匙，e*d=1 (mod f)，gcd(n,d)=1
//	unsigned __int64    s;      //块长，满足2^s<=n的最大的s，即log2(n)
//} RSA_PARAM;
////小素数表
//const static long       g_PrimeTable[] =
//{
//	3,5,7,11,13,17,19,23,29,31,37,41,43,
//	47,53,59,61,67,71,73,79,83,89,97
//};
//const static long       g_PrimeCount = sizeof(g_PrimeTable) / sizeof(long); const unsigned __int64  multiplier = 12747293821;
//const unsigned __int64  adder = 1343545677842234541;//随机数类
//class                   RandNumber
//{
//private:
//	unsigned __int64    randSeed;
//public:
//	RandNumber(unsigned __int64 s = 0);
//	unsigned __int64    Random(unsigned __int64 n);
//};
//RandNumber::RandNumber(unsigned __int64 s)
//{
//	if (!s)
//	{
//		randSeed = (unsigned __int64)time(NULL);
//	}
//	else
//	{
//		randSeed = s;
//	}
//}
//unsigned __int64 RandNumber::Random(unsigned __int64 n)
//{
//	randSeed = multiplier * randSeed + adder;
//	return randSeed % n;
//}static RandNumber   g_Rnd;
//
////模乘运算，返回值 x=a*b mod n
//inline unsigned __int64 MulMod(unsigned __int64 a, unsigned __int64 b, unsigned __int64 n)
//{
//	return a * b % n;
//}
//
////模幂运算，返回值 x=base^pow mod n
//unsigned __int64 PowMod(unsigned __int64 &base, unsigned __int64 &pow, unsigned __int64 &n)
//{
//	unsigned __int64    a = base, b = pow, c = 1;
//	while (b)
//	{
//		while (!(b & 1))
//		{
//			b >>= 1;            //a=a * a % n;    //函数看起来可以处理64位的整数，但由于这里a*a在a>=2^32时已经造成了溢出，因此实际处理范围没有64位
//			a = MulMod(a, a, n);
//		}        b--;        //c=a * c % n;        //这里也会溢出，若把64位整数拆为两个32位整数不知是否可以解决这个问题。
//		c = MulMod(a, c, n);
//	}    return c;
//}
///*
//Rabin-Miller素数测试，通过测试返回1，否则返回0。
//n是待测素数。
//*/
//long RabinMillerKnl(unsigned __int64 &n)
//{
//	unsigned __int64    b, m, j, v, i;
//	m = n - 1;
//	j = 0;    //计算出m、j，使得n-1=m*2^j，其中m是正奇数，j是非负整数
//	while (!(m & 1))
//	{
//		++j;
//		m >>= 1;
//	}    //随机取一个b，2<=b<n-1
//	b = 2 + g_Rnd.Random(n - 3);    //算v=b^m mod n
//	v = PowMod(b, m, n);    //如果v==1，通过测试
//	if (v == 1)
//	{
//		return 1;
//	}    //令i=1
//	i = 1;    //v=n-1，通过测试
//	while (v != n - 1)
//	{
//		//i==l，非素数，结束
//		if (i == j)
//		{
//			return 0;
//		}        //v=v^2 mod n，i=i+1
//		unsigned long long xxx;
//		int xxxx = 2;
//		xxx = xxxx;
//		v = PowMod(v, xxx, n);
//		++i;        //循环到5
//	}    return 1;
//}
///*
//Rabin-Miller素数测试，循环调用核心loop次
//全部通过返回1，否则返回0
//*/
//long RabinMiller(unsigned __int64 &n, long loop)
//{
//	//用小素数筛选一次，提高效率
//	for (long i = 0; i < g_PrimeCount; i++)
//	{
//		if (n % g_PrimeTable[i] == 0)
//		{
//			return 0;
//		}
//	}    //循环调用Rabin-Miller测试loop次，使得非素数通过测试的概率降为(1/4)^loop
//	for (long i = 0; i < loop; i++)
//	{
//		if (!RabinMillerKnl(n))
//		{
//			return 0;
//		}
//	}    return 1;
//}/*
//随机生成一个bits位(二进制位)的素数，最多32位
//*/
//unsigned __int64 RandomPrime(char bits)
//{
//	unsigned __int64    base;
//	do
//	{
//		base = (unsigned long)1 << (bits - 1);   //保证最高位是1
//		base += g_Rnd.Random(base);               //再加上一个随机数
//		base |= 1;    //保证最低位是1，即保证是奇数
//	} while (!RabinMiller(base, 30));    //进行拉宾－米勒测试30次
//	return base;    //全部通过认为是素数
//}/*
//欧几里得法求最大公约数
//*/
//unsigned __int64 EuclidGcd(unsigned __int64 &p, unsigned __int64 &q)
//{
//	unsigned __int64    a = p > q ? p : q;
//	unsigned __int64    b = p < q ? p : q;
//	unsigned __int64    t;
//	if (p == q)
//	{
//		return p;   //两数相等，最大公约数就是本身
//	}
//	else
//	{
//		while (b)    //辗转相除法，gcd(a,b)=gcd(b,a-qb)
//		{
//			a = a % b;
//			t = a;
//			a = b;
//			b = t;
//		}        return a;
//	}
//}/*
//Stein法求最大公约数
//*/
//unsigned __int64 SteinGcd(unsigned __int64 &p, unsigned __int64 &q)
//{
//	unsigned __int64    a = p > q ? p : q;
//	unsigned __int64    b = p < q ? p : q;
//	unsigned __int64    t, r = 1;
//	if (p == q)
//	{
//		return p;           //两数相等，最大公约数就是本身
//	}
//	else
//	{
//		while ((!(a & 1)) && (!(b & 1)))
//		{
//			r <<= 1;          //a、b为偶数时，gcd(a,b)=2*gcd(a/2,b/2)
//			a >>= 1;
//			b >>= 1;
//		}        if (!(a & 1))
//		{
//			t = a;            //a为偶数，交换a，b
//			a = b;
//			b = t;
//		}        do
//		{
//			while (!(b & 1))
//			{
//				b >>= 1;      //b为偶数，a为奇数时，gcd(b,a)=gcd(b/2,a)
//			}            if (b < a)
//			{
//				t = a;        //b小于a，交换a，b
//				a = b;
//				b = t;
//			}            b = (b - a) >> 1; //b、a都是奇数，gcd(b,a)=gcd((b-a)/2,a)
//		} while (b);
//		return r * a;
//	}
//}/*
//已知a、b，求x，满足a*x =1 (mod b)
//相当于求解a*x-b*y=1的最小整数解
//*/
//unsigned __int64 Euclid(unsigned __int64 &a, unsigned __int64 &b)
//{
//	unsigned __int64    m, e, i, j, x, y;
//	long                xx, yy;
//	m = b; e = a; x = 0; y = 1; xx = 1; yy = 1;
//	while (e)
//	{
//		i = m / e; j = m % e;
//		m = e; e = j; j = y; y *= i;
//		if (xx == yy)
//		{
//			if (x > y)
//				y = x - y;
//			else {
//				y -= x;
//				yy = 0;
//			}
//		}
//		else
//		{
//			y += x;
//			xx = 1 - xx;
//			yy = 1 - yy;
//		}        x = j;
//	}
//	if (xx == 0)
//		x = b - x;
//	return x;
//}/*
//随机产生一个RSA加密参数
//*/
//RSA_PARAM RsaGetParam(void)
//{
//	RSA_PARAM           Rsa = { 0 };
//	unsigned __int64    t;
//	Rsa.p = RandomPrime(16);          //随机生成两个素数
//	Rsa.q = RandomPrime(16);
//	Rsa.n = Rsa.p * Rsa.q;
//	Rsa.f = (Rsa.p - 1) * (Rsa.q - 1);
//	do
//	{
//		Rsa.e = g_Rnd.Random(65536);  //小于2^16，65536=2^16
//		Rsa.e |= 1;                   //保证最低位是1，即保证是奇数，因f一定是偶数，要互素，只能是奇数
//	} while (SteinGcd(Rsa.e, Rsa.f) != 1);
//	Rsa.d = Euclid(Rsa.e, Rsa.f);
//	Rsa.s = 0;
//	t = Rsa.n >> 1;
//	while (t)
//	{
//		Rsa.s++;                    //s=log2(n)
//		t >>= 1;
//	}
//	return Rsa;
//}/*
//拉宾－米勒测试
//*/
//void TestRM(void)
//{
//	unsigned long   k = 0;
//	cout << "拉宾－米勒测试\n" << endl;
//	for (unsigned __int64 i = 4197900001; i < 4198000000; i += 2)
//	{
//		if (RabinMiller(i, 30))
//		{
//			k++;
//			cout << i << endl;
//		}
//	}    cout << "Total: " << k << endl;
//}/*
// RSA加密解密
// */
//void TestRSA(void)
//{
//	cout << "请输入待加密的内容（支持字母、汉字、以及其他符号和下划线）：\n";
//	RSA_PARAM           r;
//	string in_1;
//	//char  pSrc[123];
///*    char *pSrc;
//	getline(cin, in_1);
//	getline(cin, in_1);*/
//	//    char pSrc[100];
//	fflush(stdin);
//	char pSrc[100];
//	scanf("%[^\n]s", pSrc);
//	//scanf("%[^\n]s",pSrc);
//	//puts(pSrc);
//	//fflush(stdin);
////    pSrc = const_cast<char *>(in_1.data());
//
//	const unsigned long n = sizeof(pSrc);
//	unsigned char       *q, pDec[n];
//	unsigned __int64    pEnc[n];
//	r = RsaGetParam();
//	cout << "---------------------------------\n";
//	cout << "p=" << r.p << endl;
//	cout << "q=" << r.q << endl;
//	cout << "f=(p-1)*(q-1)=" << r.f << endl;
//	cout << "n=p*q=" << r.n << endl;
//	cout << "e=" << r.e << endl;
//	cout << "d=" << r.d << endl;
//	cout << "s=" << r.s << endl;
//	cout << "---------------------------------\n";
//
//	q = (unsigned char*)pSrc;
//	//cout<<q<<"&&&&&\n";//=================
//	cout << "Encode:\n";
//	for (unsigned long i = 0; i < n; i++)
//	{
//		unsigned long long xxx;
//		int xxxx = q[i];
//		xxx = xxxx;
//		pEnc[i] = PowMod(xxx, r.e, r.n);
//		cout << hex << pEnc[i] << " ";
//	}
//	cout << "\n\n";
//
//	cout << "Decode:\n";
//	for (unsigned long i = 0; i < n; i++)
//	{
//		pDec[i] = PowMod(pEnc[i], r.d, r.n);
//		cout << hex << (unsigned long)pDec[i] << " ";
//	}
//	cout << "\n\n";
//
//	cout << "解密后的文档：\n";
//	cout << (char *)pDec << endl;
//}/* */
//int main(void)
//{
//	cout << "Start~!\n\n";
//	char inorder;
//	/*cin >> inorder;
//	fflush(stdin);
//	if (inorder == '1')
//		TestRSA();
//	//    TestRSA();*/
//	cout << "如果想进行下一个加密过程，请输入n键，退出请输入q键：\n\n";
//	while (cin >> inorder && inorder == 'n')
//	{
//		system("cls");
//		TestRSA();
//		cout << "如果想进行下一个加密过程，请输入n键，退出请输入q键：\n\n";
//	}
//	if (inorder == 'q')
//		cout << "谢谢使用~！下次再见 > . < ~\n";
//	return 0;
//}




#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>//reverse函数所需添加的头文件
using namespace std;
/*
大整数类
*/
class BigInt
{
private:
	inline int compare(string s1, string s2)
	{
		if (s1.size() < s2.size())
			return -1;
		else if (s1.size() > s2.size())
			return 1;
		else
			return s1.compare(s2);
	}
public:
	bool flag;//true表示正数，false表示负数，0默认为正数
	string values;//保存所有位上的数字
	BigInt() :values("0"), flag(true) {};//构造函数
	BigInt(string str)//类型转换构造函数(默认为正整数)
	{
		values = str;
		flag = true;
	}
public:
	friend ostream& operator << (ostream& os, const BigInt& bigInt);//重载输出操作符
	friend istream& operator>>(istream& is, BigInt& bigInt);//输入操作符重载
	BigInt operator+(const BigInt& rhs);//加法操作重载
	BigInt operator-(const BigInt& rhs);//减法操作重载
	BigInt operator*(const BigInt& rhs);//乘法操作重载
	BigInt operator/(const BigInt& rhs);//除法操作重载
	BigInt operator%(const BigInt& rhs);//求余操作重载
};
/*
重载流提取运算符'>>'，输出一个整数
*/
ostream& operator << (ostream& os, const BigInt& bigInt)
{
	if (!bigInt.flag)
	{
		os << '-';
	}
	os << bigInt.values;
	return os;
}
/*
重载流插入运算符'>>'，输入一个正整数
*/
istream& operator >> (istream& is, BigInt& bigInt)
{
	string str;
	is >> str;
	bigInt.values = str;
	bigInt.flag = true;
	return is;
}
/*
两个正整数相加
*/
BigInt BigInt::operator+(const BigInt& rhs)
{
	BigInt ret;
	ret.flag = true;//正整数相加恒为正数
	string lvalues(values), rvalues(rhs.values);
	//处理特殊情况
	if (lvalues == "0")
	{
		ret.values = rvalues;
		return ret;
	}
	if (rvalues == "0")
	{
		ret.values = lvalues;
		return ret;
	}
	//调整s1与s2的长度
	unsigned int i, lsize, rsize;
	lsize = lvalues.size();
	rsize = rvalues.size();
	if (lsize < rsize)
	{
		for (i = 0; i < rsize - lsize; i++)//在lvalues左边补零
		{
			lvalues = "0" + lvalues;
		}
	}
	else
	{
		for (i = 0; i < lsize - rsize; i++)//在rvalues左边补零
		{
			rvalues = "0" + rvalues;
		}
	}
	//处理本质情况
	int n1, n2;
	n2 = 0;
	lsize = lvalues.size();
	string res = "";
	reverse(lvalues.begin(), lvalues.end());//颠倒字符串，以方便从低位算起计算
	reverse(rvalues.begin(), rvalues.end());
	for (i = 0; i < lsize; i++)
	{
		n1 = (lvalues[i] - '0' + rvalues[i] - '0' + n2) % 10;//n1代表当前位的值
		n2 = (lvalues[i] - '0' + rvalues[i] - '0' + n2) / 10;//n2代表进位
		res = res + char(n1 + '0');
	}

	if (n2 == 1)
	{
		res = res + "1";
	}
	reverse(res.begin(), res.end());

	ret.values = res;
	return ret;
}
/*
两个整数相减
*/
BigInt BigInt::operator-(const BigInt& rhs)
{
	BigInt ret;
	string lvalues(values), rvalues(rhs.values);
	//负数减负数
	if (flag == false && rhs.flag == false)
	{
		string tmp = lvalues;
		lvalues = rvalues;
		rvalues = tmp;
	}
	//负数减正数
	if (flag == false && rhs.flag == true)
	{
		BigInt res(lvalues);
		ret = res + rhs;
		ret.flag = false;
		return ret;
	}
	if (flag == true && rhs.flag == false)
	{
		BigInt rel(lvalues), res(rhs.values);
		ret = rel + res;
		ret.flag = true;
		return ret;
	}
	//处理特殊情况
	if (rvalues == "0")
	{
		ret.values = lvalues;
		ret.flag = true;
		return ret;
	}
	if (lvalues == "0")
	{
		ret.values = rvalues;
		ret.flag = false;
		return ret;
	}
	//调整s1与s2的长度
	unsigned int i, lsize, rsize;
	lsize = lvalues.size();
	rsize = rvalues.size();
	if (lsize < rsize)
	{
		for (i = 0; i < rsize - lsize; i++)//在lvalues左边补零
		{
			lvalues = "0" + lvalues;
		}
	}
	else
	{
		for (i = 0; i < lsize - rsize; i++)//在rvalues左边补零
		{
			rvalues = "0" + rvalues;
		}
	}
	//调整使‘-’号前边的数大于后边的数
	int t = lvalues.compare(rvalues);//相等返回0，str1<str2返回负数，str1>str2返回正数
	if (t < 0)
	{
		ret.flag = false;
		string tmp = lvalues;
		lvalues = rvalues;
		rvalues = tmp;
	}
	else if (t == 0)
	{
		ret.values = "0";
		ret.flag = true;
		return ret;
	}
	else
	{
		ret.flag = true;
	}
	//处理本质情况
	unsigned int j;
	lsize = lvalues.size();
	string res = "";
	reverse(lvalues.begin(), lvalues.end());//颠倒字符串，以方便从低位算起计算
	reverse(rvalues.begin(), rvalues.end());
	for (i = 0; i < lsize; i++)
	{
		if (lvalues[i] < rvalues[i])//不足，向前借一维
		{
			j = 1;
			while (lvalues[i + j] == '0')
			{
				lvalues[i + j] = '9';
				j++;
			}
			lvalues[i + j] -= 1;
			res = res + char(lvalues[i] + ':' - rvalues[i]);
		}
		else
		{
			res = res + char(lvalues[i] - rvalues[i] + '0');
		}
	}
	reverse(res.begin(), res.end());
	res.erase(0, res.find_first_not_of('0'));//去掉前导零

	ret.values = res;
	return ret;
}

/*
两个整数相乘
*/
BigInt BigInt::operator*(const BigInt& rhs)
{
	BigInt ret;
	string lvalues(values), rvalues(rhs.values);
	//处理0或结果正负
	if (lvalues == "0" || rvalues == "0")
	{
		ret.values = "0";
		ret.flag = true;
		return ret;
	}
	if (flag == false || rhs.flag == false)
	{
		ret.flag = false;
	}
	//处理特殊情况
	unsigned int lsize, rsize;
	lsize = lvalues.size();
	rsize = rvalues.size();
	string temp;
	BigInt res, itemp;
	//让lvalues的长度最长
	if (lvalues < rvalues)
	{
		temp = lvalues;
		lvalues = rvalues;
		rvalues = temp;
		lsize = lvalues.size();
		rsize = rvalues.size();
	}
	//处理本质情况
	int i, j, n1, n2, n3, t;
	reverse(lvalues.begin(), lvalues.end());//颠倒字符串
	reverse(rvalues.begin(), rvalues.end());

	for (i = 0; i < rsize; i++)
	{
		temp = "";
		n1 = n2 = n3 = 0;
		for (j = 0; j < i; j++)
		{
			temp = temp + "0";
		}
		n3 = rvalues[i] - '0';
		for (j = 0; j < lsize; j++)
		{
			t = (n3*(lvalues[j] - '0') + n2);
			n1 = t % 10;//n1记录当前位置的值
			n2 = t / 10;//n2记录进位的值
			temp = temp + char(n1 + '0');
		}
		if (n2)
		{
			temp = temp + char(n2 + '0');
		}
		reverse(temp.begin(), temp.end());
		itemp.values = temp;
		res = res + itemp;
	}

	ret.values = res.values;
	return ret;
}
/*
两个正整数相除
*/
BigInt BigInt::operator/(const BigInt& rhs)
{
	BigInt ret;
	string lvalues(values), rvalues(rhs.values);
	string quotient;
	string temp;
	//处理特殊情况
	if (rvalues == "0")
	{
		ret.values = "error";//输出错误
		ret.flag = true;
		return ret;
	}
	if (lvalues == "0")
	{
		ret.values = "0";
		ret.flag = true;
		return ret;
	}

	if (compare(lvalues, rvalues) < 0)
	{
		ret.values = "0";
		ret.flag = true;
		return ret;
	}
	else if (compare(lvalues, rvalues) == 0)
	{
		ret.values = "1";
		ret.flag = true;
		return ret;
	}
	else
	{
		//处理本质情况

		unsigned int lsize, rsize;
		lsize = lvalues.size();
		rsize = rvalues.size();
		int i;
		if (rsize > 1) temp.append(lvalues, 0, rsize - 1);
		for (i = rsize - 1; i < lsize; i++)
		{
			temp = temp + lvalues[i];
			//试商
			for (char c = '9'; c >= '0'; c--)
			{
				BigInt t = (BigInt)rvalues * (BigInt)string(1, c);
				BigInt s = (BigInt)temp - t;

				if (s.flag == true)
				{
					temp = s.values;
					quotient = quotient + c;
					break;
				}
			}
		}
	}
	//去除前导零
	quotient.erase(0, quotient.find_first_not_of('0'));
	ret.values = quotient;
	ret.flag = true;
	return ret;
}
/*
两个正整数取余
*/
BigInt BigInt::operator%(const BigInt& rhs)
{
	BigInt ret, kj(values), ki(rhs.values);
	string lvalues(values), rvalues(rhs.values);
	string quotient;
	string temp;
	//处理特殊情况
	if (rvalues == "0")
	{
		ret.values = "error";//输出错误
		ret.flag = true;
		return ret;
	}
	if (lvalues == "0")
	{
		ret.values = "0";
		ret.flag = true;
		return ret;
	}

	if (compare(lvalues, rvalues) < 0)
	{
		if (flag == false)
		{
			ret.values = (ki - kj).values;
			ret.flag = true;
			return ret;
		}
		else {
			ret.values = lvalues;
			ret.flag = true;
			return ret;
		}
	}
	else if (compare(lvalues, rvalues) == 0)
	{
		ret.values = "0";
		ret.flag = true;
		return ret;
	}
	else
	{
		//处理本质情况
		unsigned int lsize, rsize;
		lsize = lvalues.size();
		rsize = rvalues.size();
		int i;
		if (rsize > 1) temp.append(lvalues, 0, rsize - 1);
		for (i = rsize - 1; i < lsize; i++)
		{
			if (temp == "0") {
				temp = lvalues[i];
			}
			else {
				temp = temp + lvalues[i];
			}
			//试商
			for (char c = '9'; c >= '0'; c--)
			{
				BigInt t = (BigInt)rvalues * (BigInt)string(1, c);
				BigInt s = (BigInt)temp - t;

				if (s.flag == true)
				{
					//cout<<s.values<<endl;
					temp = s.values;
					quotient = quotient + c;
					break;
				}
			}
		}
	}
	//去除前导零
	quotient.erase(0, quotient.find_first_not_of('0'));
	ret.values = temp;
	ret.flag = true;
	return ret;
}
/*
一个大整数和一个小整数的取余
int divMod(string ch,int num)
{
	int s=0;
	for(int i=0;ch[i]!='\0';i++)
	s=(s*10+ch[i]-'0')%num;
	return s;
}*/

/*
欧几里德求GCD
*/
BigInt gcd(BigInt a, BigInt b)
{
	BigInt stemp;
	//cout<<a<<endl;
	//cout<<b<<endl;
	if ((a - b).flag == false)//判断大小
	{
		stemp.values = a.values;
		a.values = b.values;
		b.values = stemp.values;
	}
	if (b.values == "0") return a;
	else return gcd(b, a%b);
}
/*
快速幂
*/
BigInt fast(BigInt a, BigInt b)
{
	BigInt aa = a, t("1"), k("2");
	//   int b2=atoi(b1[lsize-1].c_str());
	while (b.values != "0")
	{
		if ((b%k).values != "0")
		{
			t = t * aa;
		}
		aa = aa * aa;
		b = b / k;
	}
	return t;
}
/*
快速幂模
*/
BigInt mod_fast(BigInt a, BigInt b, BigInt p)
{
	BigInt aa = a, t("1"), k("2");
	//   int b2=atoi(b1[lsize-1].c_str());
	while (b.values != "0")
	{
		if ((b%k).values != "0")
		{
			t = (t%p)*(aa%p) % p;
		}
		aa = (aa%p)*(aa%p) % p;
		b = b / k;
	}
	return t % p;
}

/*
扩展欧几里德实现乘法逆
*/
BigInt extgcd(BigInt a, BigInt b, BigInt& x, BigInt& y)
{
	BigInt d(a.values);

	if (b.values != "0") {
		d = extgcd(b, a % b, y, x);
		y = y - (a / b) * x;
		//   cout<<"a:"<<a<<endl;
		 //  cout<<"b:"<<b<<endl;
		 //  cout<<"x:"<<x<<endl;
		 //  cout<<"y:"<<y<<endl<<endl<<endl;
	}
	else {
		x.values = "1";
		y.values = "0";
	}
	return d;
}
BigInt mod_inverse(BigInt a, BigInt m)
{
	BigInt x, y;
	extgcd(a, m, x, y);
	if (x.flag == false)
	{
		x.flag = true;
		x = m - x;
	}
	return (m + x % m) % m;
}

int main()
{
	BigInt p("965020263285415169225506842409"), q("415924872698612520126277439911"), N, n, a("1"), b("2");
	BigInt d, e;
	BigInt m, s;
	N = p * q;
	s = gcd(p - a, q - a);
	n = s * ((p - a) / s)*((q - a) / s);
	//cout<<s<<endl;
	//cout<<(p-a)*(q-a)<<endl;
	cout << "n: " << n << endl;
	cout << "N: " << N << endl;
	while (1) {
		cout << "请输入整数e：" << endl;
		cin >> e;
		cout << "gcd(e,n): " << gcd(e, n) << endl;
		if (gcd(e, n).values == "1" && (n - e).flag == true) {

			d = mod_inverse(e, n);
			cout << "d：" << d << endl;
			cout << "请输入需要加密的字符：" << endl;
			cin >> m;
			BigInt t;
			cout << "加密：" << mod_fast(m, e, N) << endl;
			cout << "解密：" << mod_fast(mod_fast(m, e, N), d, N) << endl;
		}
		else {
			cout << "d和N非互素或者非1<e<n！" << endl;
		}
	}

	return 0;
}
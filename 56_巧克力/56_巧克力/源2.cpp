//////Playfair����
/////*����㷨����Ҫ������Լ�����ʵ�����Կ�������ʹ��MFCдһ���򵥵Ľ�������*/
////#include<iostream>
////#include<cstring>
////
////using namespace std;
////void encrypt()
////{
////	const int N = 100;
////	char letters[26] = "ABCDEFGHIKLMNOPQRSTUVWXYZ";//����������
////	int flag[25] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };//��ĸ�Ƿ����ھ����У���letters�����Ӧ
////	char ch[5][5];//5X5����
////	char ch1[N];//��Կ
////	char ch2[N];//����
////	char ch4;//�޹��ַ�
////	int len = 'a' - 'A';
////	cout << "������Կ��";
////	cin >> ch1;
////	int flg = 1;
////	while (flg == 1)
////	{
////		for (int i = 0; i < strlen(ch1); i++)//�����������Կת��Ϊ��д��ĸ
////		{
////			if (ch1[i] > 'z' || ch1[i] < 'a')
////			{
////				cout << "������ѡ�������" << endl;
////				flg = 0; break;
////			}
////			else
////				ch1[i] = ch1[i] - len;
////		}
////		if (flg == 1)
////		{
////			for (int i = 0; i < strlen(ch1); i++)//����Կ�е�J����ΪI
////			{
////				if (ch1[i] == 'J')ch1[i] = 'I';
////			}
////			int i = 0; int j = 0;
////			//����Կ�е���ĸ���뵽�����У����Ѹ���ĸ���Ϊ����
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
////			for (int k = 0; k < 25; k++)//����ĸ��˳���δ����ĸ�������뵽������
////			{
////				if (flag[k] == 0)
////				{
////					ch[i][j] = letters[k];
////					flag[k] = 1;
////					if (j < 4)j++;
////					else { i++; j = 0; }
////				}
////			}
////			cout << "��Կ����ľ���Ϊ�� " << endl;
////			for (i = 0; i < 5; i++)
////				for (j = 0; j < 5; j++)
////				{
////					cout << ch[i][j];
////					cout << " ";
////					if (j == 4)
////						cout << endl;
////				}
////			cout << endl;
////			cout << "���������ģ�������Ӣ���ַ�����";
////			cin >> ch2;
////			cout << "����һ���޹��ַ���";
////			cin >> ch4;
////			if (ch4 >= 'a')
////				ch4 = ch4 - len;
////			for (int k = 0; k < strlen(ch2); k++)//�������������ת��Ϊ��д��ĸ
////			{
////				if (ch2[k] >= 'a')
////					ch2[k] = ch2[k] - len;
////			}
////			for (int k = 0; k < strlen(ch2); k++)//�������е�J����ΪI
////			{
////				if (ch2[k] == 'J')
////					ch2[k] = 'I';
////			}
////			//Ϊ������ӱ�Ҫ���޹��ַ��Է�ֹͬһ��������ַ���ͬ
////			for (int k = 0; k < strlen(ch2); k += 2)
////			{
////				if (ch2[k] == ch2[k + 1])
////				{
////					for (int t = strlen(ch2); t > k; t--)
////						ch2[t + 1] = ch2[t];
////					ch2[k + 1] = ch4;
////				}
////			}
////			//���������������ַ��������һ���޹��ַ��Դչ�ż����
////			if (strlen(ch2) % 2 != 0)
////			{
////				ch2[strlen(ch2) + 1] = ch2[strlen(ch2)];//�ַ�����β��'\0'
////				ch2[strlen(ch2)] = ch4;//���Ĵ�β�����޹��ַ�
////			}
////			cout << "��������������Ϊ��";
////			for (int k = 0; k < strlen(ch2); k += 2)
////				cout << ch2[k] << ch2[k + 1] << " ";
////			cout << endl;
////			cout << "�����ճ���Ϊ��" << strlen(ch2) << endl;
////			//////////////////�������벢�������///////////////////////////////
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
////			cout << "���ܺ����õ��������ǣ�";
////			for (int k = 0; k < strlen(ch2); k += 2)
////				cout << ch2[k] << ch2[k + 1] << " ";
////			cout << endl;
////		}
////		else break;
////	}
////
////}
////
//////�����㷨
////void decrypt()
////{
////	const int N = 100;
////	char letters[26] = "ABCDEFGHIKLMNOPQRSTUVWXYZ";//����������
////	int flag[25] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
////	//�����ĸ�Ƿ����ھ����У���letters�����Ӧ
////	char ch[5][5];//5X5����
////	char ch1[N];//��Կ
////	char ch2[N];//����
////	int len = 'a' - 'A';
////	int flg = 1;
////	cout << "������Կ��";
////	cin >> ch1;
////	while (flg == 1)
////	{
////		for (int i = 0; i < strlen(ch1); i++)//�����������Կת��Ϊ��д��ĸ
////		{
////			if (ch1[i] > 'z' || ch1[i] < 'a')
////			{
////				cout << "������ѡ�������" << endl;
////				flg = 0; break;
////			}
////			else
////				ch1[i] = ch1[i] - len;
////		}
////		if (flg == 1)
////		{
////			for (int i = 0; i < strlen(ch1); i++)//����Կ�е�J����ΪI        
////			{
////				if (ch1[i] == 'J')ch1[i] = 'I';
////			}
////			int i = 0; int j = 0;
////			//����Կ�е���ĸ���뵽�����У����Ѹ���ĸ���Ϊ����
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
////			for (int k = 0; k < 25; k++)//����ĸ��˳���δ����ĸ�������뵽������
////			{
////				if (flag[k] == 0)
////				{
////					ch[i][j] = letters[k];
////					flag[k] = 1;
////					if (j < 4)j++;
////					else { i++; j = 0; }
////				}
////			}
////			cout << "��Կ����ľ���Ϊ�� " << endl;
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
////			/////////////////////�����������////////////////////////////
////			int f = 0;
////			do {
////				cout << "���������ģ�Ӣ���ַ�����";
////				cin >> ch2;
////				for (int k = 0; k < strlen(ch2); k++)//�������������ת��Ϊ��д��ĸ
////				{
////					if (ch2[k] >= 'a')
////						ch2[k] = ch2[k] - len;
////				}
////				for (int k = 0; k < strlen(ch2); k++)//�������е�J����ΪI
////				{
////					if (ch2[k] == 'J')ch2[k] = 'I';
////				}
////				for (int k = 0; k < strlen(ch2); k += 2)
////				{
////					if (ch2[k] == ch2[k + 1])
////					{
////						cout << "ͬһ�����в��ܳ�����ͬ�ַ������������롣" << endl;
////						f = 1;
////						break;
////					}
////					else f = 2;
////				}
////				if (f == 1)continue;
////				if (strlen(ch2) % 2 != 0)
////				{
////					cout << "�ַ�������Ϊ�����������������롣" << endl;
////					f = 1;
////				}
////				else f = 2;
////			} while (f == 1);
////			//���ܿ�ʼ
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
////			cout << "���ܺ����õ��������ǣ�";
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
////	cout << "��ѡ��1����2����:" << endl;
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
////RSA����
///*����㷨����Ҫ������Լ�����ʵ�����Կ�������ʹ��MFCдһ���򵥵Ľ�������*/
//
//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//#include <cstring>
//using namespace std;
////RSA�㷨�������
//typedef struct  RSA_PARAM_Tag
//{
//	unsigned __int64    p, q;   //������������������ܽ�������
//	unsigned __int64    f;      //f=(p-1)*(q-1)����������ܽ�������
//	unsigned __int64    n, e;   //���ף�n=p*q��gcd(e,f)=1
//	unsigned __int64    d;      //˽�ף�e*d=1 (mod f)��gcd(n,d)=1
//	unsigned __int64    s;      //�鳤������2^s<=n������s����log2(n)
//} RSA_PARAM;
////С������
//const static long       g_PrimeTable[] =
//{
//	3,5,7,11,13,17,19,23,29,31,37,41,43,
//	47,53,59,61,67,71,73,79,83,89,97
//};
//const static long       g_PrimeCount = sizeof(g_PrimeTable) / sizeof(long); const unsigned __int64  multiplier = 12747293821;
//const unsigned __int64  adder = 1343545677842234541;//�������
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
////ģ�����㣬����ֵ x=a*b mod n
//inline unsigned __int64 MulMod(unsigned __int64 a, unsigned __int64 b, unsigned __int64 n)
//{
//	return a * b % n;
//}
//
////ģ�����㣬����ֵ x=base^pow mod n
//unsigned __int64 PowMod(unsigned __int64 &base, unsigned __int64 &pow, unsigned __int64 &n)
//{
//	unsigned __int64    a = base, b = pow, c = 1;
//	while (b)
//	{
//		while (!(b & 1))
//		{
//			b >>= 1;            //a=a * a % n;    //�������������Դ���64λ������������������a*a��a>=2^32ʱ�Ѿ��������������ʵ�ʴ���Χû��64λ
//			a = MulMod(a, a, n);
//		}        b--;        //c=a * c % n;        //����Ҳ�����������64λ������Ϊ����32λ������֪�Ƿ���Խ��������⡣
//		c = MulMod(a, c, n);
//	}    return c;
//}
///*
//Rabin-Miller�������ԣ�ͨ�����Է���1�����򷵻�0��
//n�Ǵ���������
//*/
//long RabinMillerKnl(unsigned __int64 &n)
//{
//	unsigned __int64    b, m, j, v, i;
//	m = n - 1;
//	j = 0;    //�����m��j��ʹ��n-1=m*2^j������m����������j�ǷǸ�����
//	while (!(m & 1))
//	{
//		++j;
//		m >>= 1;
//	}    //���ȡһ��b��2<=b<n-1
//	b = 2 + g_Rnd.Random(n - 3);    //��v=b^m mod n
//	v = PowMod(b, m, n);    //���v==1��ͨ������
//	if (v == 1)
//	{
//		return 1;
//	}    //��i=1
//	i = 1;    //v=n-1��ͨ������
//	while (v != n - 1)
//	{
//		//i==l��������������
//		if (i == j)
//		{
//			return 0;
//		}        //v=v^2 mod n��i=i+1
//		unsigned long long xxx;
//		int xxxx = 2;
//		xxx = xxxx;
//		v = PowMod(v, xxx, n);
//		++i;        //ѭ����5
//	}    return 1;
//}
///*
//Rabin-Miller�������ԣ�ѭ�����ú���loop��
//ȫ��ͨ������1�����򷵻�0
//*/
//long RabinMiller(unsigned __int64 &n, long loop)
//{
//	//��С����ɸѡһ�Σ����Ч��
//	for (long i = 0; i < g_PrimeCount; i++)
//	{
//		if (n % g_PrimeTable[i] == 0)
//		{
//			return 0;
//		}
//	}    //ѭ������Rabin-Miller����loop�Σ�ʹ�÷�����ͨ�����Եĸ��ʽ�Ϊ(1/4)^loop
//	for (long i = 0; i < loop; i++)
//	{
//		if (!RabinMillerKnl(n))
//		{
//			return 0;
//		}
//	}    return 1;
//}/*
//�������һ��bitsλ(������λ)�����������32λ
//*/
//unsigned __int64 RandomPrime(char bits)
//{
//	unsigned __int64    base;
//	do
//	{
//		base = (unsigned long)1 << (bits - 1);   //��֤���λ��1
//		base += g_Rnd.Random(base);               //�ټ���һ�������
//		base |= 1;    //��֤���λ��1������֤������
//	} while (!RabinMiller(base, 30));    //�������������ղ���30��
//	return base;    //ȫ��ͨ����Ϊ������
//}/*
//ŷ����÷������Լ��
//*/
//unsigned __int64 EuclidGcd(unsigned __int64 &p, unsigned __int64 &q)
//{
//	unsigned __int64    a = p > q ? p : q;
//	unsigned __int64    b = p < q ? p : q;
//	unsigned __int64    t;
//	if (p == q)
//	{
//		return p;   //������ȣ����Լ�����Ǳ���
//	}
//	else
//	{
//		while (b)    //շת�������gcd(a,b)=gcd(b,a-qb)
//		{
//			a = a % b;
//			t = a;
//			a = b;
//			b = t;
//		}        return a;
//	}
//}/*
//Stein�������Լ��
//*/
//unsigned __int64 SteinGcd(unsigned __int64 &p, unsigned __int64 &q)
//{
//	unsigned __int64    a = p > q ? p : q;
//	unsigned __int64    b = p < q ? p : q;
//	unsigned __int64    t, r = 1;
//	if (p == q)
//	{
//		return p;           //������ȣ����Լ�����Ǳ���
//	}
//	else
//	{
//		while ((!(a & 1)) && (!(b & 1)))
//		{
//			r <<= 1;          //a��bΪż��ʱ��gcd(a,b)=2*gcd(a/2,b/2)
//			a >>= 1;
//			b >>= 1;
//		}        if (!(a & 1))
//		{
//			t = a;            //aΪż��������a��b
//			a = b;
//			b = t;
//		}        do
//		{
//			while (!(b & 1))
//			{
//				b >>= 1;      //bΪż����aΪ����ʱ��gcd(b,a)=gcd(b/2,a)
//			}            if (b < a)
//			{
//				t = a;        //bС��a������a��b
//				a = b;
//				b = t;
//			}            b = (b - a) >> 1; //b��a����������gcd(b,a)=gcd((b-a)/2,a)
//		} while (b);
//		return r * a;
//	}
//}/*
//��֪a��b����x������a*x =1 (mod b)
//�൱�����a*x-b*y=1����С������
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
//�������һ��RSA���ܲ���
//*/
//RSA_PARAM RsaGetParam(void)
//{
//	RSA_PARAM           Rsa = { 0 };
//	unsigned __int64    t;
//	Rsa.p = RandomPrime(16);          //���������������
//	Rsa.q = RandomPrime(16);
//	Rsa.n = Rsa.p * Rsa.q;
//	Rsa.f = (Rsa.p - 1) * (Rsa.q - 1);
//	do
//	{
//		Rsa.e = g_Rnd.Random(65536);  //С��2^16��65536=2^16
//		Rsa.e |= 1;                   //��֤���λ��1������֤����������fһ����ż����Ҫ���أ�ֻ��������
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
//���������ղ���
//*/
//void TestRM(void)
//{
//	unsigned long   k = 0;
//	cout << "���������ղ���\n" << endl;
//	for (unsigned __int64 i = 4197900001; i < 4198000000; i += 2)
//	{
//		if (RabinMiller(i, 30))
//		{
//			k++;
//			cout << i << endl;
//		}
//	}    cout << "Total: " << k << endl;
//}/*
// RSA���ܽ���
// */
//void TestRSA(void)
//{
//	cout << "����������ܵ����ݣ�֧����ĸ�����֡��Լ��������ź��»��ߣ���\n";
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
//	cout << "���ܺ���ĵ���\n";
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
//	cout << "����������һ�����ܹ��̣�������n�����˳�������q����\n\n";
//	while (cin >> inorder && inorder == 'n')
//	{
//		system("cls");
//		TestRSA();
//		cout << "����������һ�����ܹ��̣�������n�����˳�������q����\n\n";
//	}
//	if (inorder == 'q')
//		cout << "ллʹ��~���´��ټ� > . < ~\n";
//	return 0;
//}




#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>//reverse����������ӵ�ͷ�ļ�
using namespace std;
/*
��������
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
	bool flag;//true��ʾ������false��ʾ������0Ĭ��Ϊ����
	string values;//��������λ�ϵ�����
	BigInt() :values("0"), flag(true) {};//���캯��
	BigInt(string str)//����ת�����캯��(Ĭ��Ϊ������)
	{
		values = str;
		flag = true;
	}
public:
	friend ostream& operator << (ostream& os, const BigInt& bigInt);//�������������
	friend istream& operator>>(istream& is, BigInt& bigInt);//�������������
	BigInt operator+(const BigInt& rhs);//�ӷ���������
	BigInt operator-(const BigInt& rhs);//������������
	BigInt operator*(const BigInt& rhs);//�˷���������
	BigInt operator/(const BigInt& rhs);//������������
	BigInt operator%(const BigInt& rhs);//�����������
};
/*
��������ȡ�����'>>'�����һ������
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
���������������'>>'������һ��������
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
�������������
*/
BigInt BigInt::operator+(const BigInt& rhs)
{
	BigInt ret;
	ret.flag = true;//��������Ӻ�Ϊ����
	string lvalues(values), rvalues(rhs.values);
	//�����������
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
	//����s1��s2�ĳ���
	unsigned int i, lsize, rsize;
	lsize = lvalues.size();
	rsize = rvalues.size();
	if (lsize < rsize)
	{
		for (i = 0; i < rsize - lsize; i++)//��lvalues��߲���
		{
			lvalues = "0" + lvalues;
		}
	}
	else
	{
		for (i = 0; i < lsize - rsize; i++)//��rvalues��߲���
		{
			rvalues = "0" + rvalues;
		}
	}
	//���������
	int n1, n2;
	n2 = 0;
	lsize = lvalues.size();
	string res = "";
	reverse(lvalues.begin(), lvalues.end());//�ߵ��ַ������Է���ӵ�λ�������
	reverse(rvalues.begin(), rvalues.end());
	for (i = 0; i < lsize; i++)
	{
		n1 = (lvalues[i] - '0' + rvalues[i] - '0' + n2) % 10;//n1����ǰλ��ֵ
		n2 = (lvalues[i] - '0' + rvalues[i] - '0' + n2) / 10;//n2�����λ
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
�����������
*/
BigInt BigInt::operator-(const BigInt& rhs)
{
	BigInt ret;
	string lvalues(values), rvalues(rhs.values);
	//����������
	if (flag == false && rhs.flag == false)
	{
		string tmp = lvalues;
		lvalues = rvalues;
		rvalues = tmp;
	}
	//����������
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
	//�����������
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
	//����s1��s2�ĳ���
	unsigned int i, lsize, rsize;
	lsize = lvalues.size();
	rsize = rvalues.size();
	if (lsize < rsize)
	{
		for (i = 0; i < rsize - lsize; i++)//��lvalues��߲���
		{
			lvalues = "0" + lvalues;
		}
	}
	else
	{
		for (i = 0; i < lsize - rsize; i++)//��rvalues��߲���
		{
			rvalues = "0" + rvalues;
		}
	}
	//����ʹ��-����ǰ�ߵ������ں�ߵ���
	int t = lvalues.compare(rvalues);//��ȷ���0��str1<str2���ظ�����str1>str2��������
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
	//���������
	unsigned int j;
	lsize = lvalues.size();
	string res = "";
	reverse(lvalues.begin(), lvalues.end());//�ߵ��ַ������Է���ӵ�λ�������
	reverse(rvalues.begin(), rvalues.end());
	for (i = 0; i < lsize; i++)
	{
		if (lvalues[i] < rvalues[i])//���㣬��ǰ��һά
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
	res.erase(0, res.find_first_not_of('0'));//ȥ��ǰ����

	ret.values = res;
	return ret;
}

/*
�����������
*/
BigInt BigInt::operator*(const BigInt& rhs)
{
	BigInt ret;
	string lvalues(values), rvalues(rhs.values);
	//����0��������
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
	//�����������
	unsigned int lsize, rsize;
	lsize = lvalues.size();
	rsize = rvalues.size();
	string temp;
	BigInt res, itemp;
	//��lvalues�ĳ����
	if (lvalues < rvalues)
	{
		temp = lvalues;
		lvalues = rvalues;
		rvalues = temp;
		lsize = lvalues.size();
		rsize = rvalues.size();
	}
	//���������
	int i, j, n1, n2, n3, t;
	reverse(lvalues.begin(), lvalues.end());//�ߵ��ַ���
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
			n1 = t % 10;//n1��¼��ǰλ�õ�ֵ
			n2 = t / 10;//n2��¼��λ��ֵ
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
�������������
*/
BigInt BigInt::operator/(const BigInt& rhs)
{
	BigInt ret;
	string lvalues(values), rvalues(rhs.values);
	string quotient;
	string temp;
	//�����������
	if (rvalues == "0")
	{
		ret.values = "error";//�������
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
		//���������

		unsigned int lsize, rsize;
		lsize = lvalues.size();
		rsize = rvalues.size();
		int i;
		if (rsize > 1) temp.append(lvalues, 0, rsize - 1);
		for (i = rsize - 1; i < lsize; i++)
		{
			temp = temp + lvalues[i];
			//����
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
	//ȥ��ǰ����
	quotient.erase(0, quotient.find_first_not_of('0'));
	ret.values = quotient;
	ret.flag = true;
	return ret;
}
/*
����������ȡ��
*/
BigInt BigInt::operator%(const BigInt& rhs)
{
	BigInt ret, kj(values), ki(rhs.values);
	string lvalues(values), rvalues(rhs.values);
	string quotient;
	string temp;
	//�����������
	if (rvalues == "0")
	{
		ret.values = "error";//�������
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
		//���������
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
			//����
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
	//ȥ��ǰ����
	quotient.erase(0, quotient.find_first_not_of('0'));
	ret.values = temp;
	ret.flag = true;
	return ret;
}
/*
һ����������һ��С������ȡ��
int divMod(string ch,int num)
{
	int s=0;
	for(int i=0;ch[i]!='\0';i++)
	s=(s*10+ch[i]-'0')%num;
	return s;
}*/

/*
ŷ�������GCD
*/
BigInt gcd(BigInt a, BigInt b)
{
	BigInt stemp;
	//cout<<a<<endl;
	//cout<<b<<endl;
	if ((a - b).flag == false)//�жϴ�С
	{
		stemp.values = a.values;
		a.values = b.values;
		b.values = stemp.values;
	}
	if (b.values == "0") return a;
	else return gcd(b, a%b);
}
/*
������
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
������ģ
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
��չŷ�����ʵ�ֳ˷���
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
		cout << "����������e��" << endl;
		cin >> e;
		cout << "gcd(e,n): " << gcd(e, n) << endl;
		if (gcd(e, n).values == "1" && (n - e).flag == true) {

			d = mod_inverse(e, n);
			cout << "d��" << d << endl;
			cout << "��������Ҫ���ܵ��ַ���" << endl;
			cin >> m;
			BigInt t;
			cout << "���ܣ�" << mod_fast(m, e, N) << endl;
			cout << "���ܣ�" << mod_fast(mod_fast(m, e, N), d, N) << endl;
		}
		else {
			cout << "d��N�ǻ��ػ��߷�1<e<n��" << endl;
		}
	}

	return 0;
}
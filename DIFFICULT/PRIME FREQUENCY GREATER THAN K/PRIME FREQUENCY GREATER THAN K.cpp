// https://www.geeksforgeeks.org/numbers-prime-frequencies-greater-equal-k/

#include<iostream>
#include<vector>
// #include<bits/stdc++.h>
using namespace std;
bool isPrime(int num){
    bool flag=true;
    for(int i = 2; i <= num / 2; i++) {
       if(num % i == 0) {
          flag = false;
          break;
       }
    }
    return flag;
}

void primeFreq(int a[],int n,int k){
	sort(a,a+n);
	vector<pair<int,int> >v;
	int count =1;
	int pc=0;
	int i=0;
	while(i<n){
		if(a[i]==a[i+1]){
			count++;
			i++;
		}
		else if(a[i]!=a[i+1]){
			if(count>1){
			v.push_back(make_pair(a[i],count));
			}
			count=1;
			i++;
			
		}
	}
	sort(v.begin(),v.end());
	// for (int i = 0; i < v.size(); i++)
	// {
	// 	cout<<v[i].first<<" "<<v[i].second<<endl;
	// }

	for (int i = 0; i < v.size(); i++)
	{
		if(isPrime(v[i].second) && v[i].second>=k){
			pc++;
			cout<<v[i].first<< " ";
		}

	}
	if(pc>0)
	cout<<endl;
	else if(pc==0){
		cout<<"-1"<<endl;
	}
}
int main(){
	// int a[] = {4250,2941,5198,5083,2057,2918,3501,1606,7270,9171,7203,7771,8201,3967,2144,5549,6890,6351,9786,5043,8591,9363,2738,8691,1841,5771,2904,1524,3808,7798,3130,8058,739,4680,9493,9148,7598,9347,755,1221,8518,7958,8992,3071,8278,1136,4972,5168,7488,4758,6564,2431,474,5654,1123,8667,7777,379,191,1585,8177,3321,5996,5268,4353,5489,768,8304,1188,1523,9525,6059,5834,8517,9130,464,9653,455,1984,3493,1565,8548,5925,2039,555,3400,706,8332,3779,897,9918,1956,570,5914,3576,4924,7755,4344,3228,8944,2220,9105,5003,4406,7622,485,1222,7275,940,3206,7121,2506,8107,3046,4545,8662,2798,1604,3346,6577,2501,3264,4885,3072,5530,8461,7996,9638,2805,7576,8582,5025,6681,9937,5783,655,422,7005,4282,7715,212,1403,6573,4671,801,7470,9685,3599,9074,3031,176,1576,2648,5061,4648,4530,9874,8996,4168,2680,2924,9102,4057,5957,9039,9841,6612,5814,6846,894,9881,3410,2298,6454,8081,9451,3924,4118,3051,2999,7150,9579,927,6150,993,5575,680,867,923,4849,9899,199,303,309,6156,9343,150,2768,1509,3348,14,1390,6759,8664,4196,1192,8116,8120,5311,7519,7471,8813,3450,8398,4963,4443,325,5643,1663,7600,6844,7914,7799,3500,8223,3955,2843,4725,3075,704,4426,3090,8446,7537,1754,2642,8729,9870,7114,392,3741,938,9205,7192,5688,4168,7987,6014,6164,6002,9966,9360,269,7766,2860,8492,1721,2055,9570,1149,9111,3996,4239,7557,7885,5993,199,6614,2216,3666,3359,5957,4604,2564,9501,292,3085,7489,2658,5601,3491,2625,1313,3760,391,526,8605,8464,8933,4527,9613,8045,4875,204,1954,2760,2550,2154,5726,4766,2172,9085,7075,6776,8002,6577,7068,1087,4066,6079,3040,3909,8704,705,4022,5447,1231,2627,3911,165,3506,9877,4562,8381,81,6516,1141,2631,5022,3219,3749,7194,2305,825,322,307,7402,3743,7746,7820,9822,7138,1729,8526,7843,2103,3973,9075,4730,4236,5592,8236,4113,6506,2969,547,3022,462,3178,8045,3682,3280,1591,2339,4105,1914,8998,7859,5657,3096,2031,1831,234,112,357,8077,2216,682,3504,6946,4918,5448,1535,5384,1954,856,5931,4977,1319,5461,9374,1353,8741,965,3692,9198,9231,9042,3409,1240,2138,5440,3071,2372,5553,9780,6801,7769,462,306,1067,1733,5754,8954,7117,7709,9811,9400,9038,7482,4861,8412,8835,9955,5729,8879,9153,1313,7921,8915,2553,6411,4355,1977,8783,9908,8109,1936,4029,8572,8594,1449,6657,4349,403,3774,8410,6566,3174,7448,4048,4387,2212,9235,694,4293,4466,6200,5606,2387,5115,4512,5150,9470,2841,285,5731,950,2222,9760,5874,816,1209,2531,1517,7965,2657,9927,4531,2183,3727,4932,6571,2291,4167,7265,6585,8634,3465,8543,7373,8580,3055,2524,4403,2248,2809,134,3199,5031,6246,9073,2200,3808,7957,3717,8125,614,3645,2656,2798,3724,7588,5721,6016,8108,2986,8953,6742,2804,7496,467,7736,6904,2991,8491,9152,2153,4977,2351,3536,1224,7777,5736,1384,5734,9454,5861,2700,9451,8517,5498,3175,2458,1219,5543,6918,558,4496,12,9714,8345,479,7450,5249,9823,5942,4401,1976,919,3105,1864,8495,7234,7601,6231,9320,7055,2092,2020,2858,6962,3871,2385,5772,5090,7929,9042,2000,8777,9054,1714,7122,5885,5517,8723,5708,7811,9477,4036,5082,8934,5901,9930,6168,9854,2513,5488,3261,958,7508,6119,7920,1379,8504,44,2822,2785,9086,1174,7915,4492,9241,1389,377,1110,113,2438,8921,9590,2826,355,4876,8727,285,1044,4933,9151,2884,8194,109,6744,4313,4381,8124,9170,4425,7298,1955,9863,4824,9870,707,4065,1260,1084,5175,7725,3522,448,3667,6349,804,8543,1428,7441,5939,6362,6592,8823,4556,3053,5567,5222,7434,43,4392,8211,7341,2699,4426,2166,8922,5133,2583,6534,6218,7759,4259,6092,8207,4278,8793,5363,2821,6574,2805,8760,2936,5749,3935,3844,8803,9502,5418,2589,9546,6162,801,3239,8862,1579,1757,4136,6713,4341,670,9283,8452,1281,5375,6659,5559,521,8375,4732,7095,7532,3492,6383,3281,7427,6579,8436,3281,1998,1026,2827,8160,8179,6067,3374,9758,4176,7510,6471,8517,8180,2106,3321,9461,3834,6333,1372,4355,4708,6104,1450,2240,5948,4185,5521,3375,764,310,3009,2762,1336,5836,7275,9515,8255,7001,5625,8784,4512,8449,7301,9044,555,623,4858,4389,3308,6230,8744,8016,8687,6546,256,4635,731,2129,4363,7848,2439,7372,610,127,9560,4237,5994,7816,1239,1620,6600,2103,69,253,7499,6976,7228,8709,1366,536,1292,6462,4904,9979,3009,5160,4614,92,3642,8977,7940,2433,6349,4903,2561,5910,5492,8555,78,3083,6527,3030,1538,2948,9635,9038,9925,6864,7747,7643,3752,5391,4105,8657,5370,3466,169,9985,3559,163,8962,7851,2597,5312,9106,1510,7574,4599,6417,7652,7682,2945,7034,9221,2245,6669,4611,8522,9885,8710,6165,3638,4102,271,8647,9472,3737,5168,9457,3648,1684,4772,7852,633,6436,6958,2143,4010,1557,8560,8014,5592,7857,5048,1165,6455,1717,2128,4977,1603};
	
	// int n = sizeof(a)/sizeof(a[0]);
	// primeFreq(a,n,2);
	

	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int a[n];
		for (int i = 0; i < n; i++)
		{
			cin>>a[i];
		}
		primeFreq(a,n,k);
	}
	return 0;
}